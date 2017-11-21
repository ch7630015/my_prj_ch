#include "BaseUtil.h"
_USE_NAMESPACE_MY_UTIL_

SortUtil::SortUtil(){}
SortUtil::~SortUtil(){}
void SortUtil::swap(int *val1, int *val2){
	if(val1 == NULL || val2 == NULL) return;
	int tem = *val1;
	*val1 = *val2;
	*val2 = tem;
}

void SortUtil::sortInt(int   value[], int size){
	for(int i = 0;i<size;i++){
		for(int j=0; j<size-i-1;j++){
			if(value[j]>value[j+1]) swap(&value[j],&value[j+1]);
		}
	}
}

