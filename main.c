/*
* This software is free to use and distribute in any form the end user sees fit.
* The author assumes no responsibility for damage or loss incurred prior, during and after its use.
* Keep software free. Contribute to an open source project.
* Name        : the most absolutely stunning hello world program in thello mutha fugin world!!!
* Author      : Ashmead Mohammed
* Discription : Hello World algorithm using data structures and some other basics in C. 
*/

#include <stdio.h>
#include "object.h"

int main (int argc, char **argv) {
	if(argc == 1){
		printf("Usage: %s args...", argv[0]) ;
		return -1 ;
	}

	int i, j, k ;
	Object *hello[argc-1] ;

	for(i = 0 ; i < argc ; i++) {
		hello[i] = NewObject(i, argv[i]) ;
	}

	for(j = 0 ; j < argc ; j++) {
		ObjectOutput(hello[j]) ;
	}
	
	for(k = 0 ; k < argc ; k++) {
		DestroyObject(hello[k]) ;
	}

return 0 ;
}
