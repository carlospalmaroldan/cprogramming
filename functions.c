#include <stdio.h>
#include "functions.h"

void printArray(int array[], int length){
   for(int i=0;i<length; i++){
        printf("%i",array[i]);
   }
}

//we can leverage pointers to print the values they are pointing too
void printVector(int* p,int  length){
    for(int i=0;i<length;i++){
     printf("%i",*p);
     p++;
    }
}

int addUsingPointers(int* p1, int* p2){
    return *p1 +*p2;
}

void swapTwoArraysUsingPointers(int* p1,int* p2,int length){
  int temp = 0;
  for(int i =0;i <length;i++){
      temp = *p1;
      *p1 = *p2;
      *p2 = temp;
      p1++;
      p2++;
  }
}