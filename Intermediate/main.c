#include <stdio.h>
#include <stdbool.h>
#define SIZE 5
#define SIZE2 8

bool Check_Two_Arr(int * , int * , int);
void Sorted_Two_Arr(int * , int * , int * , int);
void Reverse_Arr(int * , int * , int);
void Delete_Duplicates(int * , int);
void Rotate_array_right(int * , int  , int );
void counts_the_frequency_of_each_element(int * , int);
void count_vowels_and_consonants(char * , int);
unsigned int Strlen(char *);
void Swaps(int * , int *);
char * Strcat(char * , const char *);
void remove_all_occurrences(char * , char);

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

	printf("	counts_the_frequency_of_each_element\n");
	int fre[SIZE2] = {};
	printf("Enter fre[%d] numbers:\n" , SIZE2);
	for(int i = 0 ; i < SIZE2 ; ++i){
		printf("fre[%d] = " , i);
		scanf("%d" , (fre + i));
	}
	counts_the_frequency_of_each_element(fre , SIZE2);
	printf("\n\n");

	printf("	count_vowels_and_consonants\n");
	char vc[SIZE2] = {};
	printf("Enter vc[%d] characters:\n" , SIZE2 - 1);
	for(int i = 0 ; i < SIZE2 - 1 ; ++i){
			do{
				printf("vc[%d] = " , i);
				scanf(" %c" , (vc + i));
			}while((vc[i] < 'a' && vc[i] > 'z') || (vc[i] < 'A' && vc[i] > 'Z') );
	}
	vc[SIZE2 - 1] = '\0';
	count_vowels_and_consonants(vc , SIZE2);
	printf("\n\n");

	printf("	Strlen:\n");
	char Str[SIZE2] = {};
	printf("Enter Str[%d] characters:\n" ,SIZE2 - 1);
	for(int i = 0 ; i < SIZE2 - 1 ; ++i){
			printf("Str[%d] = " , i);
			scanf(" %c" , (Str + i));
	}
	Str[SIZE2 - 1] = '\0';
	printf("String lenght is %u:\n\n" , Strlen(Str));

	printf("	Swap:\n");
	int a1 = 0;
	int b1 = 0;
	printf("Enter first number: ");
	scanf("%d" , &a1);
	do{
			printf("Enter second one: (!= %d))" , a1);
			scanf("%d" , &b1);
	}while(b1 == a1);
	Swaps(&a1 , &b1);
	printf("a1 = %d\nb1 = %d\n\n" , a1 , b1);

	printf("	Strcat:\n");
	char str1[50] = "Hello ";
	char str2[] = "World ";
	Strcat(str1 , str2);
	printf("%s\n\n" , str1);

	printf("	remove all occurrences:\n");
	char strr[20] = "hello world";
	char ch = '\0';
	printf("ch = ");
	scanf(" %c" , &ch);
	remove_all_occurrences(strr , ch); 
	printf("%s\n\n" , strr);

	return 0;
}
