#include "twosumtarget.h"
#include <stdio.h>
#include <string.h>

/*Write a C program to get the indices of the two numbers of a given array of integers, 
such that the sum of the two numbers equal to a specific target. */

struct indices getIndices(int array[], int len, int target){
    
    struct indices output;
    output.index1 = 1;
    output.index2 = 2;

    for(int i=0; i< len; i++){
        int temp = i;
        for(int j=i+1; j< len; j++){
            if(array[i] + array[j] == target){
                output.index1 = temp;
                output.index2 = j;
            }
        
        }
    }

    return output;
}