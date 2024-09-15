#include <stdio.h>
#include <stdlib.h>

struct Node {
    char StudentNo[13];
    char StudentName[25];
    char CourseYear[10];
    float GWA;
    struct Node* prev;
    struct Node* next;
};

void displayList(struct Node *head) {
    struct Node *current = head;

    if (current == NULL) {
        printf("Double/Doubly Linked List is Empty!\n");
    } else {
        printf("\n\n\nList of Student Records: \n\n");
        while (current != NULL) {
            printf("Student No: %s\nName: %s\nCourse and Year: %s\nGWA: %.2f\n\n", current->StudentNo, current->StudentName, current->CourseYear, current->GWA);
            current = current->next;
        }
        printf("\n\n");
    }
}

void createList(struct Node **head, struct Node **tail) {
    struct Node *NewNode = NULL;
    char Resp;
    
    printf("<@@ Creation of Student Records @@>\n");
   

    do {
        NewNode = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter Student No.: ");
        scanf(" %[^\n]s", NewNode->StudentNo);

        printf("Enter Student Name: ");
        scanf(" %[^\n]s", NewNode->StudentName);

        printf("Enter Course and Year: ");
        scanf(" %[^\n]s", NewNode->CourseYear);

        printf("Enter GWA: ");
        scanf("%f", &NewNode->GWA);

        NewNode->prev = NULL;
        NewNode->next = NULL;

        if (*head == NULL) {
            *head = NewNode;
            *tail = NewNode;
        } else {
            NewNode->next = *head;
            (*head)->prev = NewNode;
            *head = NewNode;
        }

        printf("Do you want to add another node? (Y/N): ");
        scanf(" %c", &Resp);

    } while (Resp == 'Y' || Resp == 'y');

    displayList(*head);
}

int main() {
    struct Node *head = NULL;
    struct Node *tail = NULL;
    char addMore;

    do {
        createList(&head, &tail);

        printf("Do you want to add a new node at the start? (Y/N): ");
        scanf(" %c", &addMore);

    } while (addMore == 'Y' || addMore == 'y');

    return 0;
}

