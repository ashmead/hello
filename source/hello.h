/*
* This software is free to use and distribute in any form the end user sees fit.
* The author will stand no liability for damage or loss incured prior, during  and after its use. 
* Name        : hello.h
* Author      : Ashmead Mohammed
* Discription : Definitions for hello.c
*/

#ifndef _hello_h
#define _hello_h

typedef struct Object {
	int id ;
	char *name ;
	} Object ;

Object *NewObject(int id, const char *name) ;

void ObjectOutput(Object *world) ;

void DestroyObject(Object *world) ;

#endif
