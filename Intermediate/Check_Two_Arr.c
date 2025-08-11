#include <stdio.h>
#include <stdbool.h>

bool Check_Two_Arr(int * p1 , int * p2 , int size){
	
	for(int i = 0 ; i < size ; ++i){
		if(p1[i] != p2[i]){		
			return 0;
		}
	}
	return 1;
}
