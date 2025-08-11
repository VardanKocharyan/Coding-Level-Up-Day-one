#include <stdio.h>

void Print_Two_Arr(int * p , int * t , int size){
		printf("\nResult is\n");
		for(int i = 0 ; i < size ; ++i){
				printf("%d * %d = %d\n" , p[i] , t[i] , p[i] * t[i]);
		}
}
