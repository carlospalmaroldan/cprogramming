#include<stdlib.h>
#include<stdio.h>

typedef struct Book {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} Book;


typedef struct Node{
    struct Book* book;
    struct Node* next;
    struct Node* previous;
} Node;


typedef struct Queue{
    struct Node* front;
    struct Node* rear;
} Queue;


void printQueueFromTheRear(struct Queue* queuePtr);
void enqueue(struct Queue* queuePtr, struct Node* nodeToAdd);
Node* dequeue(Queue* queuePtr);