#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
} Node;

void insertnodefirst(Node** head){
    Node * newnode = (Node*)malloc(sizeof(Node));
    newnode->data = 5;
    newnode->next = *head;
    *head = newnode;
    Node* temp = *head;
    while(temp != NULL){
        printf("%d -> ", (*temp).data);
        temp = (*temp).next;
    }
    return;
}



int main(){
    Node* a = (Node*)malloc(sizeof(Node));
    Node* b = (Node*)malloc(sizeof(Node));
    Node* c = (Node*)malloc(sizeof(Node));
    (*a).data = 10;
    (*a).next = b;
    (*b).data = 20;
    (*b).next = c;
    (*c).data = 30;
    (*c).next = NULL;
    Node** head = &a;
    insertnodefirst(head);
    // Node* temp = a;
    // while(temp != NULL){
    //     printf("%d -> ", (*temp).data);
    //     temp = (*temp).next;
    // }
    return 0;
}