#include "node.h"
#include <stdio.h>

void printNode(struct Node* node){
    printf("%i",node->value);
}

//struct members are not null when initializing
void printTree(struct Node* node){
 
  if(node->left){
    printTree(node->left);
  }
    printf("%i",node->value);
  if(node->right){
      printTree(node->right);
  }
}

