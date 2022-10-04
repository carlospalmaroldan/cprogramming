#include <stdio.h>
#include "node.h"

void printList(struct list listToPrint){
    struct node* currentNode;
    currentNode = listToPrint.head;
    int counter = 0;
    while(  currentNode != NULL){
        
        int value = currentNode->value.value;
        printf("%i\n", value);
        currentNode = currentNode->next;
        counter ++;
    }
}

/*This list will be used as a stack, meaning that all new elements added to it will be added to the head*/
void add(struct element elementToAdd, struct list* listToModify){
    if(isEmpty(*listToModify)){
        struct node head = {elementToAdd, NULL, NULL};
   
        listToModify->head = &head;

    } else {
        
        struct node* oldHeadPtr = malloc(sizeof(struct node));
        oldHeadPtr->value = listToModify->head->value;
        oldHeadPtr->next = listToModify -> head->next;
        oldHeadPtr->previous =  listToModify -> head->previous;
        

        struct node newHead={elementToAdd, oldHeadPtr, NULL};
      
        listToModify->head = &newHead;
  
    }
}


bool isEmpty(struct list listToInspect){
        if( listToInspect.head == NULL){
            return true;
        } else {
            return false;
        }
}
