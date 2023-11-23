typedef void (*CB)(char *);  //ϵͳ�޹ز��ֶ���ص���������
#ifdef _WIN32
// Windows��
#include <windows.h>
#include <process.h>
#include <stdio.h>
// �޸�thread_func Ϊ ���ڲ�����������ɶ�̬���ӿ�󲻱�¶
unsigned __stdcall thread_func(void* arg) {
    Sleep(500);
    CB f= (CB)arg;
    f("hh");
    return 0;
}
__declspec(dllexport) void call_cb_s(CB f) {
    uintptr_t thread_id = _beginthreadex(NULL, 0, thread_func, f, 0, NULL);
    if (thread_id == 0) {
        // handle error
    }
}
#elif defined(__linux__)
// Linux��
#include <pthread.h>
#include <unistd.h>
#include <stdio.h>
// �޸�thread_funcΪ���ڲ�����������ɶ�̬���ӿ�󲻱�¶
static void* thread_func(void* arg) {
    sleep(1);  // Sleep for 1 second. Note that sleep function in Linux takes seconds, not milliseconds.
    CB f = (CB)arg;
    f("hh");
    return NULL;
}
void call_cb_s(CB f) {
    pthread_t thread_id;
    if (pthread_create(&thread_id, NULL, thread_func, f) != 0) {
        // handle error
    }
}
#else
// ����ƽ̨
#endif

