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
                      char *msg;
                      } World;

struct World *NewWorld(int id, char *msg){
	World *world = malloc(sizeof(World)) ;
	world->id = id ;
	world->msg = strdup(msg);
	return world ;
}

void SayHi(World *world) {
  assert(world != NULL);
	printf("%d %s", world->id, world->msg);
}

void DestroyWorld( World *world){
	assert(world != NULL);
	free(world);	
	}

int main (int argc, char **argv) {
World *wrl = NewWorld(1, "this");
SayHi(wrl) ;
DestroyWorld(wrl);
return 0;
}
