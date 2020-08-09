#include <stdio.h>

#include "functions.h"

int main(int argc, char** argv){
  /*
  int input[20];
  int output[20];
  for(int i=0;i<20;i++){
      input[i] = i;
  }

  
  int* inputptr = input;
  int* outputptr = output;


 

 //through pointers we can fill the output vector with the values in the input vector
  for (int j=0;j<20;j++){
    *outputptr = *inputptr;
    outputptr++;
    inputptr++;
  }

  

 // printVector(output,20);

  int a = 10;
  int b = 12;
  int* p1 = &a;
  int* p2 = &b;
  //printf("%i",addUsingPointers(p1,p2));

 */
  int arrayToSwap2[5];
  int arrayToSwap1[5];


  arrayToSwap2[0] = 6;
  arrayToSwap2[1] = 7;
  arrayToSwap2[2] = 8;
  arrayToSwap2[3] = 9;
  arrayToSwap2[4] = 10;
  
  arrayToSwap1[0] = 1;
  arrayToSwap1[1] = 2;
  arrayToSwap1[2] = 3;
  arrayToSwap1[3] = 4;
  arrayToSwap1[4] = 5;

  

  int* p1 = arrayToSwap1;
  int* p2 = arrayToSwap2;

  //printArray(arrayToSwap2,5);
  
  printVector(p2,5);
 // printVector(arrayToSwap1,4);
  swapTwoArraysUsingPointers(p1,p2,5);
  
  //printArray(arrayToSwap2,5);
 
  printVector(p2,5);
 // printVector(arrayToSwap2);


  return 0;
}


