#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct Node{
	int data;
	struct Node *next;
}Node;

Node *Start, *NewNode;

int main(){
	Node *Current;
	char Resp;
	
	do{
		NewNode = (Node*)malloc(sizeof(Node));
		printf("Input Data -> ");
		scanf("%d", &(NewNode->data));
		NewNode->next = NULL;
		
		if (Start == NULL){
			Start = NewNode;
		} else {
			Current = Start; 
			while (Current->next != NULL){
				Current = Current->next;
			}
			Current->next = NewNode;
		}
		printf("Add another node? [Y | N] -> ");
		scanf(" %c", &Resp);		
	} while (toupper(Resp) == 'Y');
	
	
	
}


