// ����3�ֺ���
#include <pthread.h>
typedef void (*CB_S)(char *);
// typedef void (*CB_I_S)(int,char *);
// typedef void (*CB_S_I_S_S)(char *,int,char *,char *);
// typedef void (*CB_S_I_S_S_I)(char *,int,char *,char *,int);

// ����һ�����ܻص������ĺ���,��������,�첽���ûص�����
void call_back_s(CB_S cb){
  // Ҫ��,��������,�����첽��������ʱ�����ûص�����
  // ����һ���߳�,�߳���ִ������1s����ûص�����,����hello
  // �����߳�,ʹ��pthread
  
  int ok=pthread_create(NULL,NULL,cb,"hello");
  // ok==0,�����ɹ�
  if (ok!=0){
    // ����ʧ��,
    // ��������
    cb("error");
  }else{
    // �����ɹ�
    // ��������
  }
}

int main(){

}