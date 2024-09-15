#include <stdio.h>
#include <stdlib.h>

// Struct for Node
struct Node {
    int data;
    struct Node* next;
};

// Creates a new Node
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

// Creates singly linked list
struct Node* createLinkedList() {
    struct Node* start = NULL;
    struct Node* newNode;
    char response;

    do {
        int value;
        printf("Enter value for the node: ");
        scanf("%d", &value);

        newNode = createNode(value);

        if (start == NULL) {
            start = newNode;
        } else {
            struct Node* current = start;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
        printf("Add another node? [Y/N]: ");
        scanf(" %c", &response);
    } while (response == 'Y' || response == 'y');

    return start;
}

// Displays linked list
void displayLinkedList(struct Node* start) {
    struct Node* current = start;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* start = createLinkedList();
    displayLinkedList(start);
    return 0;
}



