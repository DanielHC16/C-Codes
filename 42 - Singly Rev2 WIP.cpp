#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

typedef struct node{
	int data;
	struct node *next;
}node;

void CreateList(node **Start);
void addToStart(node **Start);
void addToEnd(node **Start);
void deleteAtStart(node **Start);
void deleteAtEnd (node **Start);

node *Start, *NewNode;

int main() {
	node *Start = NULL;
	int choice;
	
	createList(&Start);
	
	printf("\nInitial List: \n");
	node *Current = Start;
	while (Current != NULL){
		print("%d -> " Current->data);
		Current = Current->next;
	}
	printf("NULL /n/n");
	
	do{
		printf("Choose an action: \n");
		printf("1. Add a node at the start \n");
		printf("2. Add a node at the end \n");
		printf("3. Delete a node at the start \n");
		printf("4. Delete a node at the end \n");
		printf("0. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		
		switch (choice){
			case 1:
				addToStart(&Start);
				break;
			case 2:
				addAtEnd(&Start);
				break;
			case 3:
				deleteAtStart(&Start);
				break;
			case 4:
				deleteAtEnd(&Start);
				break;
			case 0:
				printf("Exiting...");
				break;
			default:
				printf("INVALID CHOICE");
				break;
		}
}

