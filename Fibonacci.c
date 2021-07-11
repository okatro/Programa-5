/* *****************************************************************
* Fibonacci.c
* Displays the Fibonacci number at n position
*
* Author: Covarrubias Minez Brandon Ivan
* License: MIT
*
* GitHub: https://github.com/okatro/Programa-4-Factorial
*
* *****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Prototypes
int isInt(char* Ap);

int main(int argc, char** argv){
	//Check the input, there should only be one integer and positive parameter
	
	if(argc < 2){
		printf("Usage %s p1 p2 .. pn \n",argv[0]);
		exit(0);
	}

	for( int i = 1 ; i != argc ; i++ ){
		if(!isInt(argv[i])){
			printf("Usage %s p1 p2 .. pn \n",argv[0]);
			exit(0);
		}
	}



}

//Verify that the parameter is a positive integer
int isInt(char* Ap){
	while (*Ap != 0){
		if(!isdigit(Ap[0]))
			return 0;
		++Ap;
	}
	return 1;
}