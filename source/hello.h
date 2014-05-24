/*
Name : hello.h
Disc : Defines for hello.c
Auth : Ashmead Mohammed
*/

#ifndef _hello_h
#define _hello_h

typedef struct World {
	int id ;
	char *msg ;
	} World ;

World *NewWorld(int id, const char *msg) ;

void Say(World *world) ;

void DestroyWorld( World *world) ;

#endif
