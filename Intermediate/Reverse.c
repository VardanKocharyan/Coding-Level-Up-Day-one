#include <stdio.h>

void Reverse_Arr(int * l , int * r , int size){
	int * p = l;	
	while(l < r){
			*l ^= *r;
			*r ^= *l;
			*l ^= *r;
			++l;
			--r;
	}
	printf("Reverse\n");
	for(int i = 0 ; i < size ; ++i){
		printf("%d " , p[i]);
	}
	printf("\n\n");
}
