#include <stdio.h>
#include <stdbool.h>

bool Mission(int *p , int m , int size){
		for(int i = 0 ; i < size ; ++i){
				if((p[i] ^ m) == 0){
						return true;
				}
		}
		return false;
}
