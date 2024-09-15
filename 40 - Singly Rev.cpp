#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// STEP 1: SELF REFERENTIAL NODE
typedef struct node {
    int data;
    struct node *next;
} node;

node *Start, *NewNode;

// STEP 2: INT MAIN
int main() {
    char Resp;
    node *Current;

    // STEP 3: MEMORY ALLOCATION
    do {
        NewNode = (node*)malloc(sizeof(node));
        printf("Input Data -> ");
        scanf("%d", &(NewNode->data));
        NewNode->next = NULL;

        // STEP 4: ADDING TO THE LIST
        if (Start == NULL) { // If the list is empty
            Start = NewNode; // Make the new node the start of the list
        } else { // if the list is not empty
            Current = Start; // set a pointer to the start of the list
            while (Current->next != NULL) { // traverse to the end of the list
                Current = Current->next; // move the pointer to the next node
            }
            Current->next = NewNode; // add the new node at the end of the list
        }
        printf("Add Another Node? [Y/N]\n"); //adds another node if the user wants 
        scanf(" %c", &Resp); 
    } while (toupper(Resp) == 'Y'); // response must be Y or y

    // STEP 5: TRAVERSAL / DISPLAYING
    Current = Start;
    if (Current == NULL) {
        printf("Singly Linked List is Empty!\n");
    } else {
        // If the list is not empty, traverse and print each node's data
        printf("Singly Linked List: \n");
        while (Current != NULL) {
            printf("%d -> ", Current->data); // Print the data of the current node
            Current = Current->next; // Move to the next node
        }
        printf("NULL\n"); // Print NULL to indicate the end of the list
    }

    return 0;
}

