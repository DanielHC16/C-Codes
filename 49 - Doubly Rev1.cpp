#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node* prev;
	struct node* next;
	int data;
};

int main(){
	
	struct node *head = malloc(sizeof(struct node)); // memory allocation
	head->prev = NULL;
	head->data = 10;
	head->next = NULL;
	
}
