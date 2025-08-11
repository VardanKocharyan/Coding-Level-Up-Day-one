#include <stdio.h>
#include <stdbool.h>
#define SIZE 5

bool Check_Two_Arr(int * , int * , int);
void Sorted_Two_Arr(int * , int * , int * , int);
void Reverse_Arr(int * , int * , int);
void Delete_Duplicates(int * , int);
void Rotate_array_right(int * , int  , int );

int main(void){
	printf("	Check_Two_Arr\n");		
	int arr1[SIZE] = {};
	int arr2[SIZE] = {};

	printf("Enter arr1[SIZE] numbers:\n");
	for(int i = 0 ; i < SIZE ; ++i){
			printf("arr1[%d] = " , i);
			scanf("%d" , &arr1[i]);
	}

	printf("Enter arr2[SIZE] numbers:\n");
	for(int i = 0 ; i < SIZE ; ++i){
			printf("arr2[%d] = " , i);
			scanf("%d" , &arr2[i]);
	}
	printf("1 - True\n0 - False\n%d\n\n" , Check_Two_Arr(arr1 , arr2 , SIZE));

	printf("	Sorted_New_Arr\n");
	int a[SIZE] = {};
	int b[SIZE] = {};
	int sort[2 * SIZE] = {};

	printf("Enter a[%d] numbers:\n" , SIZE);
	printf("a[0] = ");
	scanf("%d" , &a[0]);
	for(int i = 1 ; i < SIZE ; ++i){
			do{
				printf("a[%d] = " , i);
				scanf("%d" , &a[i]);
			}while(a[i- 1] > a[i]);
	}
	
	printf("Enter b[%d] numbers:\n" , SIZE);
	printf("b[0] = ");
	scanf("%d" , &b[0]);
	for(int i = 1 ; i < SIZE ; ++i){
			do{
				printf("b[%d] = " , i);
				scanf("%d" , &b[i]);
			}while(b[i- 1] > b[i]);
	}

	Sorted_Two_Arr(a , b , sort , SIZE);
	printf("\n\n");

	printf("	Reverse\n");
	int rev[SIZE] = {};

	printf("Enter rev[%d] numbers:\n" , SIZE);
	for(int i = 0 ; i < SIZE ; ++i){
			printf("rev[%d] = " , i);
			scanf("%d" , &rev[i]);
	}
	Reverse_Arr(rev ,(rev + SIZE - 1) , SIZE);
	

	printf("	Delete_Duplicates\n");
	int drr[SIZE] = {};
	printf("Enter drr[%d] number :\n" , SIZE);
	for(int i = 0 ; i < SIZE ; ++i){
			printf("drr[%d] = " , i);
			scanf("%d" , (drr + i));
	}

	Delete_Duplicates(drr, SIZE);
	printf("\n\n");

	printf("	Rotate_array_right");
	int rot[SIZE] = {};
	printf("Enter rot[%d] number :\n" , SIZE);
	for(int i = 0 ; i < SIZE ; ++i){
		printf("rot[%d] = " , i);
		scanf("%d" , (rot + i));
	}
	int pos = 0;
	printf("Enter rotate position count:\n");
	scanf("%d" , &pos);
	Rotate_array_right(rot , pos , SIZE);
	printf("\n\n");

	return 0;
}
