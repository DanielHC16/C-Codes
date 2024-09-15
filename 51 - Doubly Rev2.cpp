#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node{
	int data;
	struct *prev, *next;
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
	}
	
}
