#include "matrix.h"

int* sum(int *p1, int *p2, int n, int* output){ 
   int i;
   for(i = 0; i< n; i++){
    *(output+i) = *(p1+i) + *(p2+i);
   }
   return output;
}