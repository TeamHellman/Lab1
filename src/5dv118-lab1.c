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
#define BUFSIZE 1024
int main(int argc, char **argv){
	FILE *ip;

		char line[BUFSIZE];
		/* om vi ska läsa från stdin */
		if(argc<=1)
			ip=stdin;

		/* Kontrollerar att filen verkligen finns och går att öppna */
		else if((ip=fopen(argv[1], "r")) == NULL){
		 	fprintf (stderr, "Error: Could not open and read file '%s'\n", argv[1]);
			exit(1);
		}
		char *hex;
		while(fgets(line,BUFSIZE, ip) != NULL){
			strncpy(hex, line, 2);

			printf("%s ", hex);
			if(strcmp(hex, "0x")==0){
				printf(" hex ");
			}

			printf("%s", line);

		}
free(hex);

		/* Stänger filen och returnerar första noden i listan */
		if(ip!=stdin)
			fclose(ip);
		return 1;
}
