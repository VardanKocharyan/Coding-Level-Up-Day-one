#include <stdio.h>
#define LEN 100

int fibonacci_cache(int );
int sum_of_digits_of_a_num(int );

long cache[LEN] = {0};

int main(void) {
		
	printf("	Fibonacci:\n");
	int n = 0;
	do{
		printf("n-th number:(n > 0)");
		scanf("%d" , &n);
	}while(n <= 0);

	printf("%d " , fibonacci_cache(n));

	printf("	sum_of_digits_of_a_num\n");
	int num = 0 ;
	printf("Enter the num: ");
	scanf("%d" , &num);
	printf("Number is %d\n" , sum_of_digits_of_a_num(num));

	return 0;
}
