#include <stdio.h>
#include <stdlib.h>

void addStart(node **START){
	node *NewNode, *Current;
	NewNode = (node*)mallov(sizeof(node));
	printf("@@@ Add Node at the Start @@@");
	printf("Input Data Value -> ");
	scanf("%d", &NewNode->data);
	NewNode->next - *START;
	START = NewNode;
	NewNode = NULL;
}

void addEnd(node **START){
	node *END *NewNode;
	END = *START;
	NewNode = (node*)malloc(sizeof(node));
	printf("@@@ Add Node at the End @@@");
	printf("Input Data Value -> ");
	scanf("%d", &NewNode->data);
	NewNode->next = NULL;
	while (END->nude != NULL) END = END->next;
	END-next = NewNode;
	END = NULL;
	NewNode = NULL;
}

void insertBeforeValue(node **START){
	node *NewNode, *Current, *Previous;
	int Before_VAL, Flag = 0;
	NewNode = (node*)malloc(sizeof(node));
	printf("@@@ Add Node before a Value");
	printf("Input Data Value -> ");
	scanf("%d", &NewNode->data);
	printf("Input Data Value -> ");
	scanf("%d", &Before_VAL);
	Previous = NULL;
	Current = *START;
	do{
		if (Before_VAL == Current->data) Flag =1;
		else {
			Previous = Current;
			Current = Current->next;
		}
	} while (Flag == 1){
		NewNode-Next=Current;
		if (Previous == NULL) *START = NewNode;
		NewNode = NULL;
	} else printf("INVALID");
	Previous = NULL;
	Current = NULL;
}

void insertAfterValue(node **START){
	node *NewNode, *Current;
	int After_VAL, Flag = 0;
	NewNode = (node*)malloc(sizeof(node));
	printf("@@@ Add Node after a Value");
	printf("Enter Data -> ");
	scanf("%d", &NewNode->data);
	printf("Enter Value -> ");
	scanf("%d", &After_VAL);
	Current = *START;
	do {
		if (After_VAL == Current->data) Flag = 1;
		else {
			Current = Current-next;
		}
	}
}
