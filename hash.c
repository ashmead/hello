/*
* This software is free to use and distribute in any form the end user sees fit.
* The author assumes no responsibility for damage or loss incurred prior, during and after its use.
* Keep software free. Contribute to an open source project.
* Name        : hash.c
* Author      : Ashmead Mohammed
* Discription : Implementation of a hash table. 
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define OK 1
#define ERR NULL
#define EXIST 2

typedef struct Node {
	int id ;
	int key ;
	const char *name ;
	struct Node *L ;
	struct Node *R ;
	} Node ;

Node *CreateMap(const char *name) {
	Node *n1 = malloc(sizeof(Node)) ;
	n1->id = 1 ;
	n1->key = n1->id ;
	n1->name = strdup(name) ;
	return n1 ;
	}

Node *FindKey (Node *hMap, int key) {
	Node *current = hMap ;

	while( current ) {
	if( (key > current->key) && (current->R != NULL) )
		current = current->R ;
	else return current ;

	if ( (key < current->key) && (current->L != NULL) )
		current = current->L ;
	else return current ;

	if( (key > current->key) && (current->R == NULL) )
		return current ; //current = current->R ;
	//else return current ;

	if ( (key < current->key) && (current->L == NULL) )
		return current ; //current = current->L ;
	//else return current ;

//	else if ( ( (current->L == NULL) && (key < current->key ) ) || ( (current->R == NULL)  && (key > current->key) )  )
//		return current ;
	if ( key == current->key )
	return EXIST ;
	//else return ERR ;
	}
}

int AddNode(Node *hMap, int key) {
	Node *current = FindKey(hMap, key) ;
	if ( current == ERR ) {
		printf("Free to add ie no duplicate.") ;
		//current->
		return OK ;
	}
	else if ( current == EXIST ){
		printf("Node exists") ;
		return EXIST  ;
	}
}

int main( void ) {
;
const char *ppo = "thisone" ;
Node *n = CreateMap(ppo) ;
int x = AddNode(n, 1) ;
if(x == ERR)
	printf("oops");
else
	printf("%d", x);
return 0 ;
}
