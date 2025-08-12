#include <stdio.h>

unsigned int Strlen(char *p){
		char * ptr = p;
		while(*ptr){
				++ptr;
		}
		return  (unsigned int)(ptr - p);
}
