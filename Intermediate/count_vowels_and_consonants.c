#include <stdio.h>

void count_vowels_and_consonants(char * p , int size){

	int vow = 0;
	int con = 0;
	while(*p){
			if((*p == 'a') || (*p == 'A') || (*p == 'e') || (*p == 'E') || (*p == 'i') || (*p == 'I') || (*p == 'o') || (*p == 'O') || (*p == 'u') || (*p == 'U')){
					++vow;
			}
			else{
					++con;
			}
			++p;
	}
	printf("Vowels = %d\nConsonants = %d\n" , vow , con);
}
