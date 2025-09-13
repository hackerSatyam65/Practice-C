#include <stdio.h>
#include <stdlib.h>

// Define Node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int value) {
    Node* newnode = (Node*)malloc(sizeof(Node));
    if (!newnode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

// Insert at beginning
void insertAtBeginning(Node** head, int value) {
    Node* newnode = createNode(value);
    newnode->next = *head;
    *head = newnode;
}

// Display the linked list
void displayList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;
    int n, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Create list dynamically
    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        insertAtBeginning(&head, value); // always insert at beginning
    }

    printf("\nInitial Linked List: ");
    displayList(head);

    // Insert more nodes later
    char choice;
    do {
        printf("\nDo you want to insert another node at beginning? (y/n): ");
        scanf(" %c", &choice);
        if (choice == 'y' || choice == 'Y') {
            printf("Enter value: ");
            scanf("%d", &value);
            insertAtBeginning(&head, value);
            printf("Updated Linked List: ");
            displayList(head);
        }
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
