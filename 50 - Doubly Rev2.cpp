#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Define the structure for a node in the doubly linked list
typedef struct node {
    int data;            // Data stored in the node
    struct node *next;   // Pointer to the next node in the list
    struct node *prev;   // Pointer to the previous node in the list
} node;

node *Start = NULL, *NewNode; // Global pointers to the start of the list and a new node

int main() {
    node *Current; // Pointer used for traversal and operations
    char resp;     // Variable to store user response for adding more nodes

    // Loop to allow user to input data for multiple nodes
    do {
        NewNode = (node*)malloc(sizeof(node)); // Memory Allocation for a new node
        printf("Input Data-> ");
        scanf("%d", &(NewNode->data)); // Read data for the new node
        NewNode->next = NULL; // Initialize next pointer to NULL
        NewNode->prev = NULL; // Initialize prev pointer to NULL

        // Check if the list is empty
        if (Start == NULL) {
            Start = NewNode; // If empty, set the new node as the start of the list
        } else {
            Current = Start; // If not empty, traverse to the end of the list
            while (Current->next != NULL) {
                Current = Current->next;
            }
            Current->next = NewNode; // Add the new node at the end of the list
            NewNode->prev = Current; // Set the previous pointer of the new node
        }
        printf("Add another node? [Y/N]: ");
        scanf(" %c", &resp); // Ask user if they want to add more nodes
    } while (toupper(resp) == 'Y'); // Continue adding nodes if user responds with 'Y'

    Current = Start; // Set the current pointer to the start of the list

    // Display the data in the doubly linked list from head to tail
    if (Current == NULL) {
        printf("Linked List is EMPTY!");
    } else {
        printf("Doubly Linked List: ");
        while (Current != NULL) {
            printf("%d -> ", Current->data); // Print data of the current node
            Current = Current->next; // Move to the next node
        }
        printf("NULL\n");

        // Display the data in the doubly linked list from tail to head
        if (Start != NULL) {
            Current = Start; // Reset current pointer to the start of the list
            while (Current->next != NULL) { // Traverse to the end of the list
                Current = Current->next;
            }
            printf("Reverse traversal: ");
            while (Current != NULL) {
                printf("%d -> ", Current->data); // Print data of the current node
                Current = Current->prev; // Move to the previous node
            }
            printf("NULL\n");
        }
    }

    // Free the allocated memory for the nodes in the list
    Current = Start;
    while (Current != NULL) {
        node *temp = Current; // Temporary pointer to current node
        Current = Current->next; // Move to the next node
        free(temp); // Free memory of the current node
    }

    return 0; // Exit the program
}

