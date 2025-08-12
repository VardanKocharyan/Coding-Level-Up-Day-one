#include <stdio.h>

char * Strcat(char *p , const char *str){
		char * ptr = p;
		while(*ptr){
				++ptr;
		}
		while(*str){
			*ptr = *str;
			++ptr;
			++str;
		}
		*ptr = '\0';
		return p;
}
