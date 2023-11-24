
#include "callback.h"

// typedef void (*CB_S)(char *);
// typedef void (*CB_I_S)(int,char *);
// typedef void (*CB_S_I_S_S)(char *,int,char *,char *);
// typedef void (*CB_S_I_S_S_I)(char *,int,char *,char *,int);

// // ��������������ͺ����ṩ1s��ص�����
// void call_cb_s(CB_S cb);
// void call_cb_i_s(CB_I_S cb);
// void call_cb_s_i_s_s(CB_S_I_S_S cb);
// void call_cb_s_i_s_s_i(CB_S_I_S_S_I cb);
#include <functional>
#include <string>
#include <iostream>
#include <bitset>
#include <atomic>
#include <thread>
#include <chrono>
#include <mutex>

// define max num of callback function stored
#define MAX_NUM_OF_CB_S 10
#define MAX_NUM_OF_CB_I_S 10
#define MAX_NUM_OF_CB_S_I_S_S 10
#define MAX_NUM_OF_CB_S_I_S_S_I 10
// ʹ�õݹ�ģ���̶����㹻�ĳ�������ָ������
namespace {
  CB_S* _fps_cb_s=new CB_S[MAX_NUM_OF_CB_S];
  // CB_I_S* _fps_cb_i_s=new CB_I_S[MAX_NUM_OF_CB_I_S];
  // CB_S_I_S_S* _fps_cb_s_i_s_s=new CB_S_I_S_S[MAX_NUM_OF_CB_S_I_S_S];
  // CB_S_I_S_S_I* _fps_cb_s_i_s_s_i=new CB_S_I_S_S_I[MAX_NUM_OF_CB_S_I_S_S_I];
  // c type func interface call cpp function
  std::function<void(const std::string&)>* _cpp_function_cb_s=new std::function<void(const std::string&)>[MAX_NUM_OF_CB_S];
  // std::function<const std::string&>* _cpp_function_cb_i_s=new std::function<const std::string&>[MAX_NUM_OF_CB_I_S];
  // std::function<const std::string&>* _cpp_function_cb_s_i_s_s=new std::function<const std::string&>[MAX_NUM_OF_CB_S_I_S_S];
  // std::function<const std::string&>* _cpp_function_cb_s_i_s_s_i=new std::function<const std::string&>[MAX_NUM_OF_CB_S_I_S_S_I];
  template<int N>
  void _generate_cb_s(){
    _fps_cb_s[N]=[](char* c_str){
      _cpp_function_cb_s[N](std::string(c_str));
    };
    _generate_cb_s<N-1>();
  }
  template<>
  void _generate_cb_s<0>(){
    _fps_cb_s[0]=[](char* c_str){
      _cpp_function_cb_s[0](std::string(c_str));
    };
  }

  // init function
  void init(){
    _generate_cb_s<MAX_NUM_OF_CB_S-1>();
  }
  // ����һ����������������
  class FuncPoolManager{
    private:
    // ����һ��ȫ��bitmap,�����ܹ�֧��ԭ�Ӳ���,�����������е�cb_s��
    std::bitset<MAX_NUM_OF_CB_S> _cb_s_bitmap;
    // std::bitset<MAX_NUM_OF_CB_I_S> _cb_i_s_bitmap;
    // std::bitset<MAX_NUM_OF_CB_S_I_S_S> _cb_s_i_s_s_bitmap;
    // std::bitset<MAX_NUM_OF_CB_S_I_S_S_I> _cb_s_i_s_s_i_bitmap;
    std::mutex _cb_s_mutex;
    // std::mutex _cb_i_s_mutex;
    // std::mutex _cb_s_i_s_s_mutex;
    // std::mutex _cb_s_i_s_s_i_mutex;
    // ���ع��캯��
    FuncPoolManager(){

      init();
    }
    // ���ؿ������캯��
    FuncPoolManager(const FuncPoolManager&){}
    public:
    static FuncPoolManager& get_instance(){
      static FuncPoolManager instance;
      return instance;
    }
    // ��ȡһ�����õ�cb_s�����±�
    int get_cb_s_index(){
      std::lock_guard<std::mutex> lock(_cb_s_mutex);
      // �ҵ���һ��Ϊ0���±�
      _cb_s_bitmap.size();
      int index=-1;
      for(int i=0;i<_cb_s_bitmap.size();i++){
        if(_cb_s_bitmap[i]==0){
          _cb_s_bitmap[i]=1;
          index=i;
          break;
        }
      }
      return index;
    }
    // �ͷ�һ�����õ�cb_s�����±�
    int release_cb_s_index(int index){
      std::lock_guard<std::mutex> lock(_cb_s_mutex);
      if(index<0||index>=_cb_s_bitmap.size()){
        return -1;
      }
      _cb_s_bitmap[index]=0;
      return 0;
    }

  };
}

// ��call_cb_s��cpp��װ
void cpp_wrapp_call_cb_s(const std::function<void(const std::string&)>& func){
  // ��ȡһ�����õ�cb_s�±�
  int index=FuncPoolManager::get_instance().get_cb_s_index();
  // �����ȡ����������
  while(index==-1){
    std::cout<<"waiting for cb_s index"<< index<<std::endl;
    index=FuncPoolManager::get_instance().get_cb_s_index();
  }
  // ���ƺ���func
  // ���������뺯������
  auto copy_func=func;
  _cpp_function_cb_s[index]=[copy_func,index](const std::string& str){
    copy_func(str);
    // �Ӻ�������ɾ������
    _cpp_function_cb_s[index]=nullptr;
    // ���ú��ͷſռ�
    FuncPoolManager::get_instance().release_cb_s_index(index);
  };
  // ����call_cb_s
  call_cb_s(_fps_cb_s[index]);
}


int main(){
  // ����cpp_wrapp_call_cb_s
  cpp_wrapp_call_cb_s([](const std::string& str){
    std::cout<<"cpp_wrapp_call_cb_s:"<<str<<std::endl;
  });
  // ˯��10s
  std::this_thread::sleep_for(std::chrono::seconds(10));
  return 0;
}

