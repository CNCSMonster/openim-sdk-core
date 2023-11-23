#ifndef  _CF_H
#define _CF_H
#ifdef __cplusplus
extern "C" {
#endif // DEBUG
typedef void (*CB)(char *);
void call_cb_s(CB f);
#ifdef __cplusplus
}
#endif // DEBUG
#endif // ! _C