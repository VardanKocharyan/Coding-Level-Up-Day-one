#include <stdio.h>

void Swaps(int *p , int *w){
		*p ^= *w;
		*w ^= *p;
		*p ^= *w;
}
