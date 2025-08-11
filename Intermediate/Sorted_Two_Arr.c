#include <stdio.h>

void Sorted_Two_Arr(int * p1 , int * p2 , int * p , int size){
	int idx1 = 0 ;
	int idx2 = 0;

	for(int i = 0 ; i < (2 * size) ; ++i){
		if((p1[idx1] <= p2[idx2]) && (idx1 < size)){
			p[i] = p1[idx1];
			++idx1;
		}
		else if(idx2 < size){
			p[i] = p2[idx2];
			++idx2;
		}
		printf("%d " , p[i]);
	}
}
