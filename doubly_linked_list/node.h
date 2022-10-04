//IMPORTANT: IF YOU'RE GONNA USE A STRUCT YOU MUST PROVIDE ITS DEFINITION BEFORE DEFINING
// ANY FUNCTION USING IT
#include<stdbool.h>  
#include<stdlib.h>


struct element
{
    int* pointer;
    int value;
};


struct node{
    struct element value;
    struct node* next;
    struct node* previous;
  
};


struct list{
    struct node* head;
};


bool isEmpty(struct list listToInspect);
void add(struct element elementToAdd, struct list* listToModify);
void printList(struct list listToPrint);
struct node* pop(struct list* listToModify);