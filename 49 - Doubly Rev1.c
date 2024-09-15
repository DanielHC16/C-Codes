#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node {
    int data;
    struct node *next, *prev;
    
} node;

node *Start = NULL, *NewNode;

int main() {
    node *Current;
    char resp;

    do {
        NewNode = (node*)malloc(sizeof(node)); // Memory Allocation
        printf("Input Data-> ");
        scanf("%d", &(NewNode->data));
        NewNode->next = NULL;
        NewNode->prev = NULL;

        if (Start == NULL) { // Input Data
            Start = NewNode;
        } else {
            Current = Start;
            while (Current->next != NULL) {
                Current = Current->next;
            }
            Current->next = NewNode;
            NewNode->prev = Current;
        }
        printf("Add another node? [Y/N]: ");
        scanf(" %c", &resp);
    } while (toupper(resp) == 'Y');

    Current = Start; // Display Data (Head - Tail)
    if (Current == NULL) {
        printf("Linked List is EMPTY!");
    } else {
        printf("Doubly Linked List: ");
        while (Current != NULL) {
            printf("%d -> ", Current->data);
            Current = Current->next;
        }
        printf("NULL\n");

        
        if (Start != NULL) { // Display Data (Tail - Head)
            Current = Start;
            while (Current->next != NULL) {
                Current = Current->next;
            }
            printf("Reverse traversal: ");
            while (Current != NULL) {
                printf("%d -> ", Current->data);
                Current = Current->prev;
            }
            printf("NULL\n");
        }
    }

    // Free the allocated memory (optional but good practice)
    Current = Start;
    while (Current != NULL) {
        node *temp = Current;
        Current = Current->next;
        free(temp);
    }

    return 0;
}

