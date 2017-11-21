#ifndef _MY_FUN_
#define _MY_FUN_

#include <stdio.h>

#ifdef __cplusplus
extern "C"
{ 
#endif

void test(int a);

int test_const(const int &value);

#ifdef __cplusplus
}
#endif
#endif