#include "twosumtarget.h"
#include <stdio.h>
#include <string.h>

struct indices getIndices(int array[], int len, int target){
    
    struct indices output;
    output.index1 = 1;
    output.index2 = 2;

    for(int i=0; i< len; i++){
    output.index1 = array[i];
        for(int j=i+1; j< len; j++){
            //if(output.index1 + array[j])
        
            printf("%i",j);
        }
    }

    return output;
}