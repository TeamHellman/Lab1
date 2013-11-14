/*
 ============================================================================
 Name        : 5dv118-lab1.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv){
	FILE *ip;
		struct node *first;

		/* om vi ska l�sa fr�n stdin */
		if(argc<=1)
			ip=stdin;

		/* Kontrollerar att filen verkligen finns och g�r att �ppna */
		else if((ip=fopen(argv[1], "r")) == NULL){
		 	fprintf (stderr, "Error: Could not open and read file '%s'\n", argv[1]);
			exit(1);
		}

		first=readFile(ip);

		/* St�nger filen och returnerar f�rsta noden i listan */
		if(ip!=stdin)
			fclose(ip);
		return 1;
}
