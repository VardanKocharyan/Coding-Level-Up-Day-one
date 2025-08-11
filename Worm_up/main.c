#include <stdio.h>
#include <stdbool.h>
#define SIZE 4

void Print_Two_Arr(int * , int * , const int );
bool Mission(int * , int , int );
void Print_Digits(char * , int );
void Uppercase(char * , int);

int main(void){
	printf("	Print_Two_Arr\n");
	int arr1[] = {1 , 2 , 3 , 4};
	int arr2[] = {4 , 3 , 2 , 1};

	Print_Two_Arr(arr1 , arr2 , SIZE);
	printf("\n");

	printf("	Mission\n");
	int mission = 0;
	int arr[SIZE] = {};

	printf("Enter the mission: ");
	scanf("%d" , &mission);
	
	printf("\nEnter the arr[%d] numbers\n" , SIZE);
	for(int i = 0 ; i < SIZE ; ++i){
			printf("arr[%d] = " , i);
			scanf("%d" , (arr + i));
	}
	printf("\n1 - True\n0-False\n%d\n\n" , Mission(arr , mission , SIZE));

	printf("	Print_Digits\n");
	char crr[SIZE] = {};

	printf("Enter crr[%d] characters\n" , SIZE);
	for(int i = 0 ; i < SIZE ; ++i){
			printf("crr[%d] = " , i);
			scanf(" %c" , (crr + i));
	}
	Print_Digits(crr , SIZE);

	printf("	Uppercase\n");
	char brr[SIZE] = {};

	printf("Enter brr[%d] characters\n" , SIZE);
	for(int i = 0 ; i < SIZE ; ++i){
			do{
				printf("brr[%d] = " , i);
				scanf(" %c" , (brr + i));
			}while((brr[i] < 64 || brr[i] > 90) && (brr[i] < 96 || brr[i]> 123));
	}
	Uppercase(brr , SIZE);

return 0;
}
