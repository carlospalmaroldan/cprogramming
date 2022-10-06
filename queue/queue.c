#include "queue.h"

//All elements we want to add are added to the rear of the queue
void enqueue(Queue* queuePtr, Node* nodeToAdd){
    if(queuePtr -> rear !=NULL){
        queuePtr->rear->previous = nodeToAdd;
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

//All elements are removed from the front of the queue
Node* dequeue(Queue* queuePtr){

    if(queuePtr->front != NULL){
        Node* front = queuePtr->front;
        
        queuePtr->front->previous->next = NULL;
        queuePtr->front= queuePtr->front->previous;
        front->next = NULL;
        front-> previous = NULL;
        return front;
    } else {
        return NULL;
    }

}
