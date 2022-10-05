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

    struct node* newHead = malloc(sizeof(struct node));
    add(&value1, listToTestPtr, newHead);
    add(&value2, listToTestPtr, newHead);
    add(&value3, listToTestPtr, newHead);
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

    struct node* newHead = malloc(sizeof(struct node));
    add(&value1, listToTestPtr, newHead);
    add(&value2, listToTestPtr, newHead);
    add(&value3, listToTestPtr, newHead);
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

    struct node* newHead = malloc(sizeof(struct node));
    add(&value1, listToTestPtr, newHead);
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

    struct list* listPtr = {NULL};

    insertWithVerifier(bigArray, listPtr, 23, 500);
}


void testBigArrayInsertWithValidationLoop(){
      struct element bigArray[10000];
      struct list verifier = {NULL};
      struct list* verifierPtr= &verifier;
      insertWithVerifier(bigArray, verifierPtr, 23, 500);
      struct element* verifiedElement= searchWithVerifier(bigArray, 500);
      printf("%i\n", verifiedElement->value);
}

void testBigArrayInsertInvalidPosition(){
     struct element bigArray[10000];
     struct element* verifiedElement= searchWithVerifier(bigArray, 500);
    if(verifiedElement != NULL){
     printf("%i\n", verifiedElement->value);
    } else {
        printf("search in the big array has returned NULL");
    }
}


void insertWithVerifier(struct element *bigArrayPtr, struct list* linkedListVerifier, int value, int position){
        struct element elementToInsert = {NULL, value};

        //insert element inside the big array
        *(bigArrayPtr+position)= elementToInsert;


        //save the memory position on the stack
        struct element verifier = { &bigArrayPtr[position], value};
        struct node* newHead = malloc(sizeof(struct node));
        struct node* stackAddress = add(&verifier, linkedListVerifier, newHead);



        //the big array must point to the address in the stack where its own address was stored
        (bigArrayPtr+position)->pointer = &(stackAddress->value);

}

struct element* searchWithVerifier(struct element *bigArrayPtr, int position){
    struct element elementToVerify = *(bigArrayPtr+position);
    struct element* stackAddress = (bigArrayPtr+position) -> pointer;
    //According to Cormen 11-1-4 all positions in the big array should be filled with gibberish
    //in reality we found the pointer to be NULL if not initalized in the big Array
    if(stackAddress == NULL){
        return NULL;
    }else  if(stackAddress->pointer == bigArrayPtr+position){
        return bigArrayPtr+position;
    } else {
        //Only pointers can be null, and we want to know when the linked list did not point to the address in the array
        return NULL;
    }

}