#include <stdio.h>
#include <stdlib.h>

// Struct for Node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory Allocation Failed\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to add a new node at the start of the linked list
struct Node* addToStart(struct Node* start) {
    struct Node* newNode;
    int value;
    
    printf("Enter value for the new node: ");
    scanf("%d", &value);
    
    newNode = createNode(value);
    
    newNode->next = start;
    start = newNode;
    
    return start;
}

// Function to traverse and display the linked list
void traverseLinkedList(struct Node* start) {
    struct Node* current = start;
    printf("Traversal of Singly Linked List:\n");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* start = NULL;
    char response;
    
    do {
        start = addToStart(start);
        printf("Add another node at the start? [Y/N]: ");
        scanf(" %c", &response);
    } while (response == 'Y' || response == 'y');

    traverseLinkedList(start);

    return 0;
}
