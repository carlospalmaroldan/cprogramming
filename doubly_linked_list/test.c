#include "test.h"


void testAddToList(){

    struct element value1;
    value1.value = 1;

    struct element value2;
    value2.value = 2;

    struct list listToTest= {NULL};
    struct list* listToTestPtr = &listToTest;

    add(value1, listToTestPtr);
    printList(*listToTestPtr);
    add(value2, listToTestPtr);

}