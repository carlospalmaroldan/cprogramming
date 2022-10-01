#include "matrix.h"
#include <stdio.h>



void sumMatrices(int m, int n, int a[m][n], int b[m][n], int output[m][n]){
  int i;
  int j;
  for(int i=0; i<m; i++){
      for(int j=0; j<n; j++){
	   *(*(output+i) + j) = *(*(a+i) + j) + *(*(b+i) + j) ;
	  }
  }


}

void printMatrix(int m, int n, int matrix[m][n]){
  for(int i=0; i< m; i++){
    for(int j=0;j<n;j++){
       printf("%i",*(*(matrix+i)+j));
       printf(" ");
    }
    printf("\n");
  }
}


void multiplyMatrices(int m, int r, int n,int matrix1[m][r],int matrix2[r][n], int output[m][n]){
  for(int i=0;i< m;i++){
    for(int j=0;j<n;j++){
        int product = 0;
        for(int k = 0; k< r; k++){
          product += (*(*(matrix1+i)+k))*(*(*(matrix2+k)+j));
        }
        *(*(output+i) + j) = product;
    }
  }
}


