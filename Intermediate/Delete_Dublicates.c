#include <stdio.h>

void Delete_Duplicates(int *p , int size){
	int idx = size;

	for(int i = 0 ; i < idx; ++i){
			for(int j = i + 1 ; j < idx ; ){
				if(p[i] == p[j]){
					for(int k = j ; k < idx - 1 ; ++k){
						p[k] = p[k + 1];
					}
					--idx;
				}
				else{
						++j;
				}
			}
	}
	printf("The result\n");
	for(int i = 0; i < idx ; ++i){
			printf("%d " , p[i]);
	}

}
