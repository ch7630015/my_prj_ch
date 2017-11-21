#include "stdio.h"
#include "stdlib.h"
#include "myfun.h"
#include "Manager.h"
#include<assert.h> 
#include "BaseNode.h"
#include "BaseUtil.h"

#include <iostream>
#define _USE_NAMESPACE_STD_ using namespace std;

_USE_NAMESPACE_STD_

int val[10];

int &put(int a){
	return val[a];
	
}



void test(){

	int value[12] = {1,31,4,2,7,5,9,8,145,23,67,142};
	
	my_util::sort2(value, 12);

	for(int val: value){
		cout<<" :::"<<val<<endl;
	}
	
}


int main(int argc, char*argv[]){

	if(argc < 2){ 
		printf("argc < 1\n");
		return 0;
	}
	printf("test:\n\n");
	test();

	int value  = atoi(argv[1]);
	test(value);

	int a = 27;
	a = test_const(a);
	
	//a = 1; // 正确

	printf("a = %d\n",a);

	put(3) = 10;
	put(2) = 89;
	put(1) = getnumb(65);

	bool bb =((put(2)+put(3)) == (put(1)+put(3)));

	Manager manager(put(2));
	Manager manager1(val[3]);
	int code = manager1.parse(put(1));
	Manager manager2(code);

	cout << manager.getinfo()<<" bb = "<< bb << endl; 
	cout <<manager1.getinfo()<< endl;
	cout <<manager2.getinfo()<< endl;
	
	return 0;
}
