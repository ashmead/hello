/*
Name : main.c
Disc : the most absolutely stunning hello world program in thello mutha fugin world!!!
Auth : Ashmead Mohammed
*/

#include "hello.h"

int main (int argc, char **argv) {
	
	World *Whello = NewWorld(1, "Hello") ;
	World *Wworld = NewWorld(2, "World") ;

	Say(Whello) ;
	Say(Wworld) ;

	DestroyWorld(Whello) ;
	DestroyWorld(Wworld) ;
	
	return 0 ;

	}
