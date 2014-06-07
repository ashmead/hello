/*
* This software is free to use and distribute in any form the end user sees fit.
* The author assumes no responsibility for damage or loss incurred prior, during and after its use.
* Keep software free. Contribute to an open source project.
* Name        : bintree.c
* Author      : Ashmead Mohammed
* Discription : Implementation of a binary tree. 
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ERR -1
#define OK 1
#define NODEEXIST 2
#define NODENOTEXIST 3

typedef struct Node {
	int key ;
	struct Node *L ;
	struct Node *R ;
	} Node ;

Node *CreateNode(int key) {
	Node *n1 = malloc(sizeof(Node)) ;
	n1->key = key ;
	return n1 ;
	}

/*Functions: (s)earch, (r)eturn, (a)dd, (d)elete */
Node *KeyFunct (Node *hMap, int key, char funct) {
	while( hMap ) {
		if( (key > hMap->key) && (hMap->R != NULL) ) {
			hMap = hMap->R ;
		}
		if ( (key < hMap->key) && (hMap->L != NULL) ) {
			hMap = hMap->L ;
		}
		if( (key > hMap->key) && (hMap->R == NULL) ) {
			if(funct == 's' || funct == 'r' || funct == 'd') {
				printf("Key %d not found.\n", key) ;
				return NODENOTEXIST ;
			}
			if(funct == 'a') {
				hMap->R = CreateNode(key) ;
				printf("Key %d created.\n", key) ;
				return hMap ;
			}
		}
		if ( (key < hMap->key) && (hMap->L == NULL) ) {
			if(funct == 's' || funct == 'r' || funct == 'd') {
				printf("Key %d not found.\n", key) ;
				return NODENOTEXIST ;
			}
			if(funct == 'a') {
				hMap->L = CreateNode(key) ;
				printf("Key %d created.\n", key) ;
				return OK ;
			}
		}
		if ( key == hMap->key ) {
			if(funct == 's' || funct == 'r') {
				printf("Key %d found.\n", key) ;
				return hMap ;
			}
			if(funct == 'a') {
				printf("Key %d already exists.\n", key) ;
				return ERR ;
			}
			if(funct == 'd') {
				printf("Key %d deleted.\n", key) ;
				return OK ;
			}
		}
		continue ;
	}
return hMap ;
}

int main( int argc, char **argv ) {
	
if( argc < 2) {
	printf("Usage %s n1 n2 n3...", argv[0]) ;
	return 0 ;
}
int i=1, p = 3 ; 
Node *n = CreateNode(p) ;
char f = 'y' ;
while(i != argc) {
	KeyFunct( n, atoi(argv[i++]), 'a' ) ;
}
printf("Starter Values Created\n");
while( f != 'q' ) {
	switch(f) {
		case 'a' :
		case 's' :
		case 'd' :
		case 'r' : {
			printf("Enter Key:") ;
			int k =0 ;
			scanf("%d", &k) ;
			Node *tn = n ;
			tn = KeyFunct(tn, k, f) ;
		}
		default : {
			printf("Commands (a)dd (r)eturn (s)earch (d)elete\n");
		} 
	}
	scanf("%c", &f) ;
}
return 0 ;
}
