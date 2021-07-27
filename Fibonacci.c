/* *****************************************************************
* Fibonacci.c
* Displays the Fibonacci number at n position
*
* Author: Covarrubias Minez Brandon Ivan
* License: MIT
*
* GitHub: https://github.com/okatro/Programa-5
*
* *****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Prototypes
long Fibonacci(int n);
long isLong(char* Ap);

int main(int argc, char** argv){
	//Check the input, there should only be one long and positive parameter
	if(argc < 2){
		printf("Usage %s p1 p2 .. pn \n",argv[0]);
		exit(0);
	}

	for( int i = 1 ; i != argc ; i++ ){
		if(!isLong(argv[i])){
			printf("Usage %s p1 [p2] .. [pn] \n",argv[0]);
			exit(0);
		}
	}

	for(int i = 1 ; i != argc ; i++){
		printf("%lu ",Fibonacci(atoi(argv[i])));
	}
	printf("\n");
}

long Fibonacci(int n){
	long a;
	long b;

	switch(n){
		case 0:
			return 0;

		case 1:
		case 2:
			return 1;

		default:
			a = Fibonacci(n-1);
			b = Fibonacci(n-2);
			return a+b;
	};
}

//Verify that the parameter is a positive integer
long isLong(char* Ap){
	while (*Ap != 0){
		if(!isdigit(Ap[0]))
			return 0;
		++Ap;
	}
	return 1;
}