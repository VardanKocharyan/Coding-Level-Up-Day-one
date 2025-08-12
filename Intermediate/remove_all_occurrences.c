#include <stdio.h>

void remove_all_occurrences(char * str , char c){
	char *p = str;
	char *f = str;

	while(*p){
			if(*p != c){
				*f++ = *p;
			}
			++p;
	}
	*f = '\0';
}
