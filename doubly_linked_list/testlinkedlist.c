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

void testPopEmptyList(){
    struct list listToTest= {NULL};
    struct list* listToTestPtr = &listToTest;
    struct node* output = pop(listToTestPtr);
    printf("The value of the node popped out is: %i\n", output->value.value);
}

void testPopListWithASingleElement(){
    struct element value1;
    value1.value = 1;
    struct list listToTest= {NULL};
    struct list* listToTestPtr = &listToTest;

    add(value1, listToTestPtr);
    struct node* output = pop(listToTestPtr);
    printf("The value of the node popped out is: %i\n", output->value.value);

}

//Implementing the method from Cormen 11-1-4
void testCormen(){

    struct element bigArray[10000];
    bigArray[500].pointer = NULL; 
    bigArray[500].value = 23;


    struct element verifier = { &bigArray[500], 23};
    bigArray[500].pointer = &verifier;

    printf("%p\n", &verifier);
    printf("%p\n", bigArray[500].pointer);
    printf("%p\n", verifier.pointer);
    printf("%p\n", &bigArray[500]);
}