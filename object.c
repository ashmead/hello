/*
* This software is free to use and distribute in any form the end user sees fit.
* The author assumes no responsibility for damage or loss incurred prior, during and after its use.
* Keep software free. Contribute to an open source project.
* Name        : hello.c
* Author      : Ashmead Mohammed
* Discription : Functions to create, retrieve from and delete data types
*/

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include "object.h"

typedef struct Object {
	int id ;
	char *name ;
	} Object ;

Object *NewObject(int id, const char *name){
	Object *obj = malloc(sizeof(Object)) ;
	obj->id = id ;
	obj->name = strdup(name) ;
	return obj ;
	}

void ObjectOutput(Object *obj) {
	assert(obj != NULL) ;
	printf("%d %s\n", obj->id, obj->name) ;
	}

void DestroyObject(Object *obj){
	assert(obj != NULL) ;
	free(obj) ;
	}
