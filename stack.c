/*Based on listing 4.1 in "Computer Security - A hands on approach"*/
/*Author: Prof. Wenliang Du, Syracuse University ISBN-10: 154836794X*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int foo (char *str){
	char buffer[100];
	strcpy(buffer, str);
	return 1;
}

int main (int argc, char **argv){
	char str[400];
	FILE *badfile;
	badfile = fopen("badfile", "r");
	fread(str, sizeof(char), 300, badfile);
	foo(str);
	printf("Returned Properly\n");
	return 1;

}
