#include "matrix.h"
#include <stdio.h>

int* sum(int *p1, int *p2, int n, int* output){ 
   int i;
   for(i = 0; i< n; i++){
    *(output+i) = *(p1+i) + *(p2+i);
   }
   return output;
}

int** sumMatrices(int **p1, int** p2, int m,int n,int** output){
  int i;
  int j;
  for(int i=0; i<m; i++){
      for(int j=0; j<n; j++){
	   *(*(output+i) + j) = *(*(p1+i) + j) + *(*(p2+i) + j) ;
	  }
  }
  return output;

}

void printMatrix(int m, int n, int matrix[m][n]){
  for(int i=0; i< m; i++){
    for(int j=0;j<n;j++){
       printf("%i",*(*(matrix+i)+j));
    }
  }
}
