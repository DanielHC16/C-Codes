#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node{
	int data;
	struct node *prev, *next;
}node;

node *Start = NULL, *NewNode;

int main(){
	
	char Resp;
	node Current;
	
	do{
		NewNode = (node*)malloc(sizeof(node));
		printf("Input data -> ");
		scanf("%d", &(NewNode->data));
		NewNode->next = NULL;
		NewNode->prev = NULL;
		
		
	// Check if the list is empty
        if (Start == NULL) {
            Start = NewNode; // If empty, set the new node as the start of the list
        } else {
            Current = Start; // If not empty, traverse to the end of the list
            while (Current->next != NULL) {
                Current = Current->next;
            }
            Current->next = NewNode; 
            NewNode->prev = Current; 
        }
		
	}
	
}
