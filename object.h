/*
* This software is free to use and distribute in any form the end user sees fit.
* The author assumes no responsibility for damage or loss incurred prior, during and after its use.
* Keep software free. Contribute to an open source project.
* Name        : hello.h
* Author      : Ashmead Mohammed
* Discription : Definitions for hello.c
*/

#ifndef _object_h
#define _object_h

typedef struct Object {
	int id ;
	char *name ;
	} Object ;

Object *NewObject(int id, const char *name) ;

void ObjectOutput(Object *obj) ;

void DestroyObject(Object *obj) ;

#endif
