#include <stdio.h>
#include <stdlib.h> 
#include <ctype.h> // for toupper

// Define the structure of each node in the linked list
typedef struct node {
    int X; // Data of the node
    struct node *next; // Pointer to the next node
} node;

// Declare global variables for the start of the list and a new node
node *Start, *NewNode;

int main() {
    char Resp;
    node *Current;

    // Main loop to add nodes to the linked list
    do {
        // Allocate memory for a new node
        NewNode = (node*)malloc(sizeof(node)); // Memory Allocation
        printf("Input Data -> ");
        scanf("%d", &(NewNode->X)); // Read data for the new node
        NewNode->next = NULL; // Initialize the next pointer of the new node to NULL
        
        // Check if the list is empty
        if (Start == NULL) {
            Start = NewNode; // If the list is empty, make the new node the start of the list
        } else {
            // If the list is not empty, find the last node and add the new node to the end
            Current = Start;
            while (Current->next != NULL) {
                Current = Current->next; // Traverse to the end of the list
            }
            Current->next = NewNode; // Add the new node to the end of the list
        }
        
        // Ask the user if they want to add another node
        printf("Add Another Node?[Y/N] -> ");
        scanf(" %c", &Resp); // Remember the whitespace
    } while (toupper(Resp) == 'Y');
    
    // Traversal of the Singly Linked List
    
    // Start traversal from the beginning of the list
    Current = Start;
    
    // Check if the list is empty
    if (Current == NULL) {
        printf("Singly Linked List is Empty!\n");
    } else {
        // If the list is not empty, traverse and print each node's data
        printf("Singly Linked List: \n");
        while (Current != NULL) {
            printf("%d -> ", Current->X); // Print the data of the current node
            Current = Current->next; // Move to the next node
        }
        printf("NULL\n"); // Print NULL to indicate the end of the list
    }
    
    return 0;
}

	



