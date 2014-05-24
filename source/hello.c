/*
Name  : hello.c
Disc  : Functions to create, retrieve from and delete data types
Auth  : Ashmead Mohammed
*/

struct World *NewWorld(int id, char *msg){
	World *world = malloc(sizeof(World)) ;
	world->id = id ;
	world->msg = strdup(msg) ;
	return world ;
	}

void Say(World *world) {
	assert(world != NULL) ;
	printf("%d %s\n", world->id, world->msg) ;
	}

void DestroyWorld( World *world){
	assert(world != NULL) ;
	free(world) ;
	}
