#include <stdio.h>
#include "node.h"

void printList(struct list listToPrint){
    printf("%i", listToPrint.head->value.value);
}

void add(struct element elementToAdd, struct list* listToModify){
    if(isEmpty(*listToModify)){
        struct node head;
        head.value = elementToAdd;
        listToModify->head = &head;

    } else {

        struct node* oldHead = listToModify->head;
        struct node head;
        head.value = elementToAdd;
        listToModify->head = &head;
        head.next = oldHead;
    }
}


bool isEmpty(struct list listToInspect){
        if( listToInspect.head == NULL){
            return true;
        } else {
            return false;
        }
}
