#include <stdio.h>
#include "functions.h"
#include "matrix.h"

int  main(){
	/*
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
	printVector(p,3);*/

	int matrix1[2][3] = {
		{1,2,3},
		{1,1,1}
	};

	int matrix2[2][3] = {
		{2,1,3},
		{2,2,2}
	};

	int matrix3[3][2] = {
		{1,2},
		{1,3},
		{3,2}
	};

	int outputMatrix[2][3];

	printf("%ld",sizeof(matrix1[0])/sizeof(matrix1[0][0]));
	printMatrix(2,3,matrix1);

	sumMatrices(2,3,matrix1,matrix2,outputMatrix);

	printMatrix(2,3,outputMatrix);
	
	int outputProduct[2][2];
	multiplyMatrices(2,3,2,matrix1,matrix3,outputProduct);
	printMatrix(2,2,outputProduct);

	return 0;
}
