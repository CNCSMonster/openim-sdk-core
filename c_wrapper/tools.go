package main

/*
#include <stdio.h>
#include <stdlib.h>
*/
import "C"

import (
	"encoding/json"
	"unsafe"
)

func parseBool(b int) bool {
	if b == 1 {
		return true
	}
	return false
}

func StructToJsonString(param interface{}) string {
	dataType, _ := json.Marshal(param)
	dataString := string(dataType)
	return dataString
}

func FreeCString(strList ...*C.char) {
	for _, str := range strList {
		C.free(unsafe.Pointer(str))
	}
}
