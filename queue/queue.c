#include "queue.h"

void enqueue(Queue* queuePtr, Node* nodeToAdd){
    if(queuePtr -> rear !=NULL){
    nodeToAdd->next = queuePtr->rear;
    queuePtr -> rear = nodeToAdd;
    } else {
        queuePtr -> rear = nodeToAdd;
        queuePtr -> front = nodeToAdd;
    }

}

void printQueueFromTheRear(Queue* queuePtr){
    Node* newNode = queuePtr->rear;
    
    while(newNode != NULL){
        char *author = &(newNode->book->author[0]);
        printf("%s\n",author);
        newNode = newNode->next;
    }
}
