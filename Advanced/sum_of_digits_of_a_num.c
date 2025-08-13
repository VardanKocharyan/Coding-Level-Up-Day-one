#include <stdio.h>

int sum_of_digits_of_a_num(int num){
		if(num < 10){
				return num;
		}
		return sum_of_digits_of_a_num(num / 10) + (num % 10);
}
