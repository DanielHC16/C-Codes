#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

typedef struct Node {
    char StudNo[13];
    char StudName[25];
    char CrsYr[10];
    float gwa;
    int pos;
    struct Node *next;
} Node;

void createQueue(Node **Front, Node **Rear);
void displayQueue(Node **Front, Node **Rear);
void addAtEnd(Node **Front, Node **Rear);

int main() {
    Node *Front = NULL;
    Node *Rear = NULL;

    createQueue(&Front, &Rear);
    displayQueue(&Front, &Rear);

    char Resp;
    printf("\nDo you want to add another record at the end? [Y/N]: ");
    scanf(" %c", &Resp);
    while (toupper(Resp) == 'Y') {
        addAtEnd(&Front, &Rear);
        displayQueue(&Front, &Rear);
        printf("\nDo you want to add another record at the end? [Y/N]: ");
        scanf(" %c", &Resp);
    }

    return 0;
}

void createQueue(Node **Front, Node **Rear) {
    Node *NewNode = (Node*)malloc(sizeof(Node));
    if (NewNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    int Ctr = 1;
    char Resp, Temp;
    NewNode->next = NULL;
    *Front = *Rear = NewNode;

    do {
        system("cls");
        printf("Record No. %d", Ctr);
        printf("\n\tStudent No. [20XX-XXXXX]: ");
        fgets(NewNode->StudNo, sizeof(NewNode->StudNo), stdin);

        printf("\tStudent Full Name: ");
        fgets(NewNode->StudName, sizeof(NewNode->StudName), stdin);

        printf("\tCourse and Year [BSCS 1-3]: ");
        fgets(NewNode->CrsYr, sizeof(NewNode->CrsYr), stdin);

        printf("\tGeneral Weighted Average: ");
        scanf("%f", &NewNode->gwa);
        scanf("%c", &Temp);

        NewNode->pos = Ctr;

        printf("Add another NODE [Y/N]? ");
        scanf(" %c", &Resp); 
        scanf("%c", &Temp); 

        if (toupper(Resp) == 'Y') {
            NewNode->next = (Node*)malloc(sizeof(Node));
            *Rear = NewNode->next;
            NewNode = NewNode->next;
            Ctr++;
        }
    } while (toupper(Resp) == 'Y');

    (*Rear)->next = NULL;
    NewNode = NULL;
}

void displayQueue(Node **Front, Node **Rear) {
    Node *TravNode = *Front;

    int Ctr = 1, Flag;

    system("cls");
    gotoxy(35, 0);
    printf("\e[1m\033[4m<STUDENT RECORDS>\033[0m\e[m");
    gotoxy(0, 1);
    printf("\e[1mStudent Name\e[m");
    gotoxy(30, 1);
    printf("\e[1mStudent Number\e[m");
    gotoxy(55, 1);
    printf("\e[1mCourse and Year\e[m");
    gotoxy(80, 1);
    printf("\e[1mGWA\e[m");

    if (TravNode == NULL) {
        printf("The Queue is Empty.");
    } else {
        Flag = (*Front)->pos;
        do {
            gotoxy(0, Ctr + 1);
            printf(TravNode->StudName);
            gotoxy(30, Ctr + 1);
            printf(TravNode->StudNo);
            gotoxy(55, Ctr + 1);
            printf(TravNode->CrsYr);
            gotoxy(80, Ctr + 1);
            printf("%.2f", TravNode->gwa);

            *Front = TravNode->next;
            TravNode->next = NULL;
            (*Rear)->next = TravNode;
            *Rear = (*Rear)->next;
            TravNode = *Front;
            Ctr++;
        } while (Flag != (*Front)->pos);
        TravNode = NULL;
    }
}

void addAtEnd(Node **Front, Node **Rear) {
    Node *NewNode = (Node*)malloc(sizeof(Node));
    if (NewNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    getchar(); 

    printf("\n\tStudent No. [20XX-XXXXX]: ");
    fgets(NewNode->StudNo, sizeof(NewNode->StudNo), stdin);

    printf("\tStudent Full Name: ");
    fgets(NewNode->StudName, sizeof(NewNode->StudName), stdin);

    printf("\tCourse and Year [BSCS 1-3]: ");
    fgets(NewNode->CrsYr, sizeof(NewNode->CrsYr), stdin);

    printf("\tGeneral Weighted Average: ");
    scanf("%f", &NewNode->gwa);
    getchar(); 

    NewNode->next = NULL;

    if (*Front == NULL) {
        *Front = *Rear = NewNode;
    } else {
        // Create a temporary queue to preserve the original order
        Node *tempFront = *Front;
        Node *tempRear = *Rear;

        // Add the new node at the end of the temporary queue
        tempRear->next = NewNode;
        tempRear = NewNode;

        // Restore the original queue structure
        *Front = tempFront;
        *Rear = tempRear;
    }
}


