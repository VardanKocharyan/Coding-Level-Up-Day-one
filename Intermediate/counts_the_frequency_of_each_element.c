#include <stdio.h>

void counts_the_frequency_of_each_element(int *p , int size){
	int idx = size - 1;
	int sum = 1;
	for(int i = 0 ; i < idx ; ++i){
		for (int j = i + 1 ; j < idx + 1 ; ){
			if(p[i] == p[j]){
					++sum;
					if(idx != j){
						p[j] ^= p[idx];
						p[idx] ^= p[j];
						p[j] ^= p[idx];
					}
					--idx;
					
			}
			else{
					++j;
			}
		}
		printf("%d - %d\n" , p[i] , sum);
		sum = 1;
	}
}
