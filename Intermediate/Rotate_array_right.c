#include <stdio.h>

void Rotate_array_right(int * p , int k , int size){
	k = k % size;

	int idx = 0;
	while(idx < size - idx - 1){
		p[idx] ^= p[size - idx - 1];
		p[size - idx - 1] ^= p[idx];
		p[idx] ^= p[size - idx - 1];
		++idx;
	}
	idx = 0;
	while(idx < k - idx - 1){
		p[idx] ^= p[k - idx - 1];
		p[k - idx - 1] ^= p[idx];
		p[idx] ^= p[k - idx - 1];
		++idx;

	}
	idx = 0;
	while(k < size - idx - 1){
		p[k] ^= p[size - idx - 1];
		p[size - idx - 1] ^= p[k];
		p[k] ^= p[size - idx - 1];
		++idx;
		++k;
	}
	for(int i = 0 ; i < size ; ++i){
			printf("%d " , p[i]);
	}
}
