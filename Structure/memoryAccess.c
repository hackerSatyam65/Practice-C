#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main() {
    Node* newNode = (Node*)malloc(sizeof(Node));
    Node* secondNode = (Node*)malloc(sizeof(Node));
    (*newNode).data = 10;
    (*newNode).next = NULL;

    secondNode->data = 20;
    secondNode->next = NULL;

    newNode->next = secondNode;

    printf("First Node Data: %d\n", newNode->data);
    printf("Second Node Data: %d\n", newNode->next->data);

    return 0;
}
