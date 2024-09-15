#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct StudentInfo {
    char studentNo[13];
    char studentName[25];
    char crsYr[10];
    float gwa;
    struct StudentInfo *next;
} node;

char Resp, Temp, After_Val[25];

void addNewNode(node **Start);
void addAfterNode(node *Start);
void displayList(node *Start);
void addAtStart(node **Start);

int main() {
    node *Start = NULL;
    addNewNode(&Start);
    addAfterNode(Start);
    addAtStart(&Start);
    displayList(Start);
    return 0;
}

void addNewNode(node **Start) {
    node *NewNode = (node *)malloc(sizeof(node));
    if (NewNode == NULL) {
        printf("Memory allocation failed.");
        exit(1); // Exit the program if memory allocation fails
    }

    printf("<@@ Enter a value for the new node @@>\n\n");
    printf("New Student Information: \n");
    printf("\nEnter Student Name: ");
    scanf(" %[^\n]s", NewNode->studentName);
    scanf("%c", &Temp); // Consume newline character
    printf("Enter Student Number: ");
    scanf("%s", NewNode->studentNo);
    scanf("%c", &Temp); // Consume newline character
    printf("Enter Course & Year: ");
    scanf(" %[^\n]s", NewNode->crsYr);
    scanf("%c", &Temp); // Consume newline character
    printf("Enter GWA: ");
    scanf("%f", &NewNode->gwa);
    scanf("%c", &Temp); // Consume newline character

    NewNode->next = *Start;
    *Start = NewNode;
}

void addAfterNode(node *Start) {
    // Implementation of addAfterNode function
}

void displayList(node *Start) {
    printf("\n\nStudent List:\n");
    node *Current = Start;
    while (Current != NULL) {
        printf("\nStudent Name: %s", Current->studentName);
        printf("\nStudent Number: %s", Current->studentNo);
        printf("\nCourse & Year: %s", Current->crsYr);
        printf("\nGWA: %.2f\n", Current->gwa);
        Current = Current->next;
    }
}

void addAtStart(node **Start) {
    node *NewNode;
    do {
        NewNode = (node *)malloc(sizeof(node));
        if (NewNode == NULL) {
            printf("Memory allocation failed.");
            exit(1); // Exit the program if memory allocation fails
        }

        printf("<@@ Enter a value to be inserted at the start @@>\n\n");
        printf("New Student Information: \n");
        printf("\nEnter Student Name: ");
        scanf(" %[^\n]s", NewNode->studentName);
        scanf("%c", &Temp); // Consume newline character
        printf("Enter Student Number: ");
        scanf("%s", NewNode->studentNo);
        scanf("%c", &Temp); // Consume newline character
        printf("Enter Course & Year: ");
        scanf(" %[^\n]s", NewNode->crsYr);
        scanf("%c", &Temp); // Consume newline character
        printf("Enter GWA: ");
        scanf("%f", &NewNode->gwa);
        scanf("%c", &Temp); // Consume newline character

        NewNode->next = *Start;
        *Start = NewNode;

        printf("\n\nWould you like to insert another node at the start? [Y/N]: ");
        scanf(" %c", &Resp); // Note: added space before %c to consume newline character
        scanf("%c", &Temp); // Consume newline character

    } while (toupper(Resp) == 'Y');
}

