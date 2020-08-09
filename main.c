#include <stdio.h>
#include "functions.h"
#include "matrix.h"

int  main(){
	printf("Hello\n");
	int vector[3];
	vector[0] = 1;
	vector[1] = 2;
	vector[2] = 3;
	int vector2[3];
	vector2[0] = 2;
	vector2[1] = 4;
	vector2[2] = 6;
	int output[3];
	int* p = output;
	output[0] = 0;
	output[1] = 0;
	output[2] = 0;
	sum(vector,vector2,3,p);
    printVector(vector,3);
	printVector(p,3);


	return 0;
}
