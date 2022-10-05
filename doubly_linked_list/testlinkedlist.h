#include "node.h"
#include<stdlib.h>
#include <stdio.h>

void testAddToList();
void testPop();
void testPopEmptyList();
void testPopListWithASingleElement();
void testCormen();
void testBigArrayInsertWithValidationLoop();
void insertWithVerifier(struct element *bigArrayPtr, struct list* linkedListVerifier, int value, int position);
struct element* searchWithVerifier(struct element *bigArrayPtr, int position);