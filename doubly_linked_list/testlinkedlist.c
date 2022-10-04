#include "testlinkedlist.h"


void testAddToList(){

    struct element value1;
    value1.value = 1;

    struct element value2;
    value2.value = 2;

    struct element value3;
    value3.value = 3;

    struct list listToTest= {NULL};
    struct list* listToTestPtr = &listToTest;

    add(value1, listToTestPtr);
    add(value2, listToTestPtr);
    add(value3, listToTestPtr);
    printList(*listToTestPtr);

}


void testPop(){
    struct element value1;
    value1.value = 1;

    struct element value2;
    value2.value = 2;

    struct element value3;
    value3.value = 3;

    struct list listToTest= {NULL};
    struct list* listToTestPtr = &listToTest;

    add(value1, listToTestPtr);
    add(value2, listToTestPtr);
    add(value3, listToTestPtr);
    struct node* output = pop(listToTestPtr);
    
    printf("The value of the node popped out is: %i\n", output->value.value);
    printList(*listToTestPtr);
}