#ifndef _CALLBACK_H_
#define _CALLBACK_H_

typedef void (*CB_S)(char *);
typedef void (*CB_I_S)(int,char *);
typedef void (*CB_S_I_S_S)(char *,int,char *,char *);
typedef void (*CB_S_I_S_S_I)(char *,int,char *,char *,int);

// ��������������ͺ����ṩ1s��ص�����
void call_cb_s(CB_S cb);
void call_cb_i_s(CB_I_S cb);
void call_cb_s_i_s_s(CB_S_I_S_S cb);
void call_cb_s_i_s_s_i(CB_S_I_S_S_I cb);

#endif // !_

