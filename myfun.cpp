#include "myfun.h"

void test(int x){
	printf("value = %d\n",x);
	int countx =0; 
	while(x) 
	{ 
		countx ++; 
		x = x&(x-1); 
	} 
	printf("countx = %d\n",countx); 
}

int test_const(const int &value){
	return value*value;
}