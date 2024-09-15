#include <stdio.h>
#include <stdlib.h>

struct Node {
    char StudentNo[13];
    char StudentName[25];
    char CourseYear[10];
    float GWA;
    struct Node* Previous;
    struct Node* Next;
};

void displayList(struct Node *Start) {
    struct Node *Current = Start;
    int count = 1;

    if (Current == NULL) {
        printf("Double/Doubly Linked List is Empty!\n");
    } else {
        printf("\n\n\nList of Student Records: \n\n");
        while (Current != NULL) {
            printf("Student %d:\n", count);
            printf("    Student No: %s\n", Current->StudentNo);
            printf("    Name: %s\n", Current->StudentName);
            printf("    Course and Year: %s\n", Current->CourseYear);
            printf("    GWA: %.2f\n\n", Current->GWA);
            Current = Current->Next;
            count++;
        }
        printf("\n\n");
    }
}

void addAtStart(struct Node **Start, struct Node **After) {
    char Resp;

    do {
        struct Node *NewNode = (struct Node*)malloc(sizeof(struct Node));

        printf("\n\n<@@ Add a New Student Record at the Start @@>\n");

        printf("Enter Student No.: ");
        fgets(NewNode->StudentNo, sizeof(NewNode->StudentNo), stdin);

        printf("Enter Student Name: ");
        fgets(NewNode->StudentName, sizeof(NewNode->StudentName), stdin);

        printf("Enter Course and Year: ");
        fgets(NewNode->CourseYear, sizeof(NewNode->CourseYear), stdin);

        printf("Enter GWA: ");
        scanf("%f", &NewNode->GWA);
        getchar(); 
        
        NewNode->Previous = NULL;
        NewNode->Next = *Start;

        if (*Start != NULL) {
            (*Start)->Previous = NewNode;
        } else {
            *After = NewNode; // If list was empty, After should point to this new node
        }

        *Start = NewNode; // Update Start to point to the new node

        displayList(*Start); // Display the updated list

        printf("Do you want to add another node at the start? (Y/N): ");
        scanf(" %c", &Resp);
        getchar(); 

    } while (Resp == 'Y' || Resp == 'y');
}

void createList(struct Node **Start, struct Node **After) {
    struct Node *NewNode = NULL;
    char Resp;
    int count = 1;

    printf("<@@ Creation of Student Records @@>\n");

    do {
        NewNode = (struct Node*)malloc(sizeof(struct Node));

        printf("\n\nStudent %d:\n", count);
        printf("    Enter Student No.: ");
        fgets(NewNode->StudentNo, sizeof(NewNode->StudentNo), stdin);

        printf("    Enter Student Name: ");
        fgets(NewNode->StudentName, sizeof(NewNode->StudentName), stdin);

        printf("    Enter Course and Year: ");
        fgets(NewNode->CourseYear, sizeof(NewNode->CourseYear), stdin);

        printf("    Enter GWA: ");
        scanf("%f", &NewNode->GWA);
        getchar(); 

        NewNode->Previous = NULL;
        NewNode->Next = NULL;

        if (*Start == NULL) {
            *Start = NewNode;
            *After = NewNode;
        } else {
            (*After)->Next = NewNode;
            NewNode->Previous = *After;
            *After = NewNode;
        }

        printf("Do you want to add another node? (Y/N): ");
        scanf(" %c", &Resp);
        getchar(); 
        count++;

    } while (Resp == 'Y' || Resp == 'y');

    displayList(*Start);

    char addMore;
    printf("Do you want to add a new node at the start? (Y/N): ");
    scanf(" %c", &addMore);
    getchar(); 
    
    if (addMore == 'Y' || addMore == 'y') {
        addAtStart(Start, After);
    }
}

int main() {
    struct Node *Start = NULL;
    struct Node *After = NULL;
    
    createList(&Start, &After);

    return 0;
}


