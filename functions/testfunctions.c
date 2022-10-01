#include "testfunctions.h"

void testfunctions(){
    int arrayToSwap2[5] = {5,6,7,8,9};
	int arrayToSwap1[5] = {1,2,3,4,5};

  	int* p1 = arrayToSwap1;
 	int* p2 = arrayToSwap2;
  
 	 printVector(p2,5);
 
 	 swapTwoArraysUsingPointers(p1,p2,5);
  
 
 	 printVector(p2,5);

}