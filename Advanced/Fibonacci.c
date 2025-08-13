#include <stdio.h>

extern long cache[100];

int fibonacci_cache(int n){
	if(n < 2) return n;

	if(cache[n] != 0) return cache[n];

	cache[n] = fibonacci_cache(n - 1) + fibonacci_cache(n - 2);
	return cache[n];
}
 

