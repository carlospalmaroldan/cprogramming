#include "testqueue.h"

void testEnqueue(){

    Queue* queue = malloc(sizeof(Queue));
    Node* mobyDickNode = malloc(sizeof(Node));
    Node* runawayHorsesNode = malloc(sizeof(Node));
    Book mobyDick = {"Moby Dick", "Herman Melville", "A man obsessed with vengeance", 23678};
    Book runawayHorses = {"Runaway Horses", "Yukio Mishima", "A man obsessed with honor", 16476};
    mobyDickNode->book = &mobyDick;
    runawayHorsesNode -> book = &runawayHorses;
    enqueue(queue,mobyDickNode);
    enqueue(queue, runawayHorsesNode);
    printQueueFromTheRear(queue);



}

void testDequeue(){
    Queue* queue = malloc(sizeof(Queue));
    Node* mobyDickNode = malloc(sizeof(Node));
    Node* runawayHorsesNode = malloc(sizeof(Node));

    Book mobyDick = {"Moby Dick", "Herman Melville", "A man obsessed with vengeance", 23678};
    Book runawayHorses = {"Runaway Horses", "Yukio Mishima", "A man obsessed with honor", 16476};
    mobyDickNode->book = &mobyDick;
    runawayHorsesNode -> book = &runawayHorses;
    enqueue(queue,mobyDickNode);
    enqueue(queue, runawayHorsesNode);
    printQueueFromTheRear(queue);
    Node* output = dequeue(queue);
    printf("%s\n", output->book->author);
    printf("printing what's left inside the queue\n");
    printQueueFromTheRear(queue);
}