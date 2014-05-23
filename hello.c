/*
Name  : the most absolutely stunning hello world program in thello mutha fugin world!!!
Lang  : C
Auth  : Ashmead Mohammed
Note  : The name "may" be an empty boast and is not subject for debate. Flames accepted. XP
*/

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

typedef struct World {
	int id ;
	char *msg ;
	} World ;

struct World *NewWorld(int id, char *msg){
	World *world = malloc(sizeof(World)) ;
	world->id = id ;
	world->msg = strdup(msg) ;
	return world ;
	}

void Say(World *world) {
  assert(world != NULL) ;
	printf("%d %s", world->id, world->msg) ;
	}

void DestroyWorld( World *world){
	assert(world != NULL) ;
	free(world) ;
	}

int main (int argc, char **argv) {
	
	World *Whello = NewWorld(1, "Hello") ;
	World *Wworld = NewWorld(1, "World") ;

	Say(Whello) ;
	Say(Wworld) ;

	DestroyWorld(Whello) ;
	DestroyWorld(Wworld) ;
	
	return 0 ;

	}
