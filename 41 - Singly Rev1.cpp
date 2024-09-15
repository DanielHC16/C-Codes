#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node *Start, *NewNode;

int main(){
	node *Current;
	char resp;
	
	do{
	NewNode = (node*)malloc(sizeof(node));
	printf("Input Data-> ");
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
	printf("Add another node? [Y/N]: ");
	scanf(" %c", &resp);
 }	while (toupper(resp) == 'Y');
 
 Current = Start;
 	if (Current == NULL){
 		printf("Linked List is EMPTY!");
	 } else {
	 	printf("Singly Linked List: ");
		while (Current != NULL){
			printf("%d -> ", Current->data);
			Current = Current->next;
		}
		printf("NULL");
	 }
	
}
