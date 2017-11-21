#ifndef _BASE_UTIL_H_
#define _BASE_UTIL_H_

#define _USE_NAMESPACE_MY_UTIL_ using namespace my_util;
using namespace std;
#include <stdlib.h>
#include <iostream>
namespace my_util{


	template <class T> T findMin1(T *value, int size){
		T min = value[0]; 
		for(int i = 1;i<size;i++){
			if(value[i] < min) min = value[i];
		}
		return min;
	}

	template <class T> T findMin(T value[], int size){
		T min = value[0]; 
		for(int i = 1;i<size;i++){
			if(value[i] < min) min = value[i];
		}
		return min;
	}

	template <class T> void mprint(T value[], int size){
		for(int i = 0;i<size;i++){
			cout<<value[i]<<" ";
		}
		cout<<endl;
	}

	template <class T> void swap1(T *val1, T *val2){
		if(val1 == NULL || val2 == NULL) return;
		T tem = *val1;
		*val1 = *val2;
		*val2 = tem;	
	}

	/**
	 *	for Integer
	 */
	template <class T> void swap2(T *val1, T *val2){
		if(val1 == NULL || val2 == NULL) return;
		*val1 = *val1^*val2;
		*val2 = *val1^*val2;
		*val1 = *val1^*val2;
	}

	template <class T> void swap(T &val1, T &val2){
		T tem = val1;
		val1 = val2;
		val2 = tem;	
	}

	//quick sort
	template <class T> void sort3(T *value, int size){
		for(int i = 0;i <size; i++){
			
		}
	}

	//selection sort
	template <class T> void sort2(T value[], int size){
		int minindex = 0;
		T min = value[0]; 
		for(int i=0; i<size; i++){
			minindex = i;
			min = value[i];
			for(int j=i; j< size; j++){
				if(value[j] < min){
					min = value[j];
					minindex = j;
				}
			}
			if(i != minindex){
				swap(value[i], value[minindex]);
			}
		}
	}

	//bubble Sort2
	template <class T> void sort1(T value[], int size){
		int i = size -1;
		while(i > 0){
			int temp = 0;
			for(int j=0; j<i;j++){
				if(value[j]>value[j+1]){
					temp = j;
					swap(value[j],value[j+1]);
				}
			}
			i = temp;
		}
	}

	//bubble Sort1
	template <class T> void sort(T value[], int size){
		for(int i = 0;i<size;i++){
			for(int j=0; j<size-i-1;j++){
				if(value[j]>value[j+1]) swap(value[j],value[j+1]);
			}
		}
	}

	
	class SortUtil{
	public:
		SortUtil();
		~SortUtil();
		static void swap(int *val1, int *val2);
		static void sortInt(int value[] , int size);
	
	};
}

#endif
