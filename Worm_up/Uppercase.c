#include <stdio.h>

void Uppercase(char * p , int size){

	for(int i = 0 ; i < size ; ++i){
			if(p[i] & 32){
				p[i] ^= 32;
			}
			printf("p[%d] = %c\n" , i , p[i]);
	}
	printf("\n\n");
		
}
