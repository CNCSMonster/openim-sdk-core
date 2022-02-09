package network

import (
	"bytes"
	"encoding/json"
	"errors"
	//"fmt"

	//"fmt"
	"io/ioutil"
	"net/http"
	"open_im_sdk/pkg/utils"
	"time"
)

func get(url string) (response []byte, err error) {
	client := http.Client{Timeout: 5 * time.Second}
	resp, err := client.Get(url)
	if err != nil {
		return nil, err
	}
	defer resp.Body.Close()
	body, err := ioutil.ReadAll(resp.Body)
	if err != nil {
		return nil, err
	}
	return body, nil
}
func retry(url string, data interface{}, token string, attempts int, sleep time.Duration, fn func(string, interface{}, string) ([]byte, error)) ([]byte, error) {
	b, err := fn(url, data, token)
	if err != nil {
		if attempts--; attempts > 0 {
			time.Sleep(sleep)
			return retry(url, data, token, attempts, 2*sleep, fn)
		}
		return nil, err
	}
	return b, nil
}

//application/json; charset=utf-8
func Post2Api(url string, data interface{}, token string) (content []byte, err error) {
	c, err := postLogic(url, data, token)
	return c, utils.Wrap(err, " post")
	return retry(url, data, token, 1, 10*time.Second, postLogic)
}

func Post2ApiForRead(url string, data interface{}, token string) (content []byte, err error) {
	return retry(url, data, token, 3, 10*time.Second, postLogic)
}

func postLogic(url string, data interface{}, token string) (content []byte, err error) {
	jsonStr, err := json.Marshal(data)
	if err != nil {
		return nil, utils.Wrap(err, "marshal failed, url")
	}
	//	fmt.Println(url, "Marshal data: ", string(jsonStr))

	req, err := http.NewRequest("POST", url, bytes.NewBuffer(jsonStr))
	if err != nil {
		return nil, utils.Wrap(err, "newRequest failed, url")
	}
	req.Close = true
	req.Header.Add("content-type", "application/json")
	req.Header.Add("token", token)

	client := &http.Client{Timeout: 5 * time.Second}
	resp, err := client.Do(req)
	if err != nil {
		return nil, utils.Wrap(err, "client.Do failed, url")
	}
	if resp.StatusCode != 200 {
		return nil, utils.Wrap(errors.New(resp.Status), "status code failed "+url)
	}
	defer resp.Body.Close()
	result, err := ioutil.ReadAll(resp.Body)
	if err != nil {
		return nil, utils.Wrap(err, "ioutil.ReadAll failed, url")
	}
	return result, nil
}
