#include <stdio.h>

void Print_Digits(char *p , int size){
		for(int i = 0 ; i < size ; ++i){
				if((p[i] > 47) && (p[i] < 58)){
						printf(" %c" , p[i]);
				}
		}
		printf("\n");
}
