#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

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
    struct Node *next;
} Node;

void createStack(Node **Top);
void displayStack(Node **Top);
void addAtEnd(Node **Top);

int main() {
    Node *Top;
    createStack(&Top);
    char Resp;
    do {
        printf("\nDo you want to add a new entry at the end [Y/N]? ");
        scanf(" %c", &Resp);
        if (toupper(Resp) == 'Y') {
            addAtEnd(&Top);
        } else {
            printf("\nDo you want to view the stack list [Y/N]? ");
            scanf(" %c", &Resp);
            if (toupper(Resp) == 'Y') {
                displayStack(&Top);
            } else {
                printf("\nExiting...\n");
                break;
            }
        }
    } while (1);
    return 0;
}

void createStack(Node **Top) {
    *Top = NULL;
    int Ctr = 1;
    char Resp, Temp;

    system("cls");

    do {
        Node *PushNode = (Node *)malloc(sizeof(Node));
        PushNode->next = NULL;

        printf("Record No. %d", Ctr);
        printf("\n\tStudent No. [20XX-XXXXX]: ");
        fgets(PushNode->StudNo, sizeof(PushNode->StudNo), stdin);

        printf("\tStudent Full Name: ");
        fgets(PushNode->StudName, sizeof(PushNode->StudName), stdin);

        printf("\tCourse and Year [BSCS 1-3]: ");
        fgets(PushNode->CrsYr, sizeof(PushNode->CrsYr), stdin);

        printf("\tGeneral Weighted Average: ");
        scanf("%f", &PushNode->gwa);
        scanf("%c", &Temp);

        if (*Top == NULL)
            *Top = PushNode;
        else {
            PushNode->next = *Top;
            *Top = PushNode;
        }

        printf("Add another NODE [Y/N]? ");
        scanf(" %c", &Resp);
        scanf("%c", &Temp);

        if (toupper(Resp) == 'Y') {
            Ctr++;
        } else {
            break;
        }
    } while (1);
}

void displayStack(Node **Top) {
    Node *Temp = *Top;
    int Ctr = 1;
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

    if (Temp == NULL)
        printf("\nThe LIST is EMPTY");
    else {
        do {
            gotoxy(0, Ctr + 1);
            printf(Temp->StudName);
            gotoxy(30, Ctr + 1);
            printf(Temp->StudNo);
            gotoxy(55, Ctr + 1);
            printf(Temp->CrsYr);
            gotoxy(80, Ctr + 1);
            printf("%.2f", Temp->gwa);
            Temp = Temp->next;
            Ctr++;
        } while (Temp != NULL);
        getch();
    }
}

void addAtEnd(Node **Top) {
    char Resp;
    Node *NewNode = NULL;

    if (*Top == NULL) {
        printf("List is already empty!\n");
    } else {
        printf("\nAdding Student at the End\n");
        printf("Confirm this action [Y/N]: ");
        scanf(" %c", &Resp);
        
        if (toupper(Resp) == 'Y') {
            NewNode = (Node *)malloc(sizeof(Node));
            if (NewNode == NULL) {
                printf("Memory allocation failed.\n");
                exit(EXIT_FAILURE);
            }

            printf("\n\tStudent No. [20XX-XXXXX]: ");
            fflush(stdin); 
            fgets(NewNode->StudNo, sizeof(NewNode->StudNo), stdin);
            NewNode->StudNo[strcspn(NewNode->StudNo, "\n")] = '\0'; // Remove trailing newline

            printf("\tStudent Full Name: ");
            fflush(stdin); 
            fgets(NewNode->StudName, sizeof(NewNode->StudName), stdin);
            NewNode->StudName[strcspn(NewNode->StudName, "\n")] = '\0'; 

            printf("\tCourse and Year [BSCS 1-3]: ");
            fflush(stdin); 
            fgets(NewNode->CrsYr, sizeof(NewNode->CrsYr), stdin);
            NewNode->CrsYr[strcspn(NewNode->CrsYr, "\n")] = '\0'; 

            printf("\tGeneral Weighted Average: ");
            scanf("%f", &NewNode->gwa);
            fflush(stdin); 

            // Create a temporary stack to preserve original order
            Node *tempStack = NULL;
            Node *tempTop = NULL;

            // Pop all nodes from the original stack and push them onto the temporary stack
            while (*Top != NULL) {
                Node *tempNode = *Top;
                *Top = (*Top)->next;
                tempNode->next = tempStack;
                tempStack = tempNode;
            }

            // Push the new node onto the temporary stack
            NewNode->next = tempStack;
            tempStack = NewNode;

            // Pop all nodes from the temporary stack and push them back onto the original stack
            while (tempStack != NULL) {
                Node *tempNode = tempStack;
                tempStack = tempStack->next;
                tempNode->next = *Top;
                *Top = tempNode;
            }

            printf("Student added successfully!\n");
        } else {
            printf("Canceling addition...\n");
        }
    }

    printf("Press any key to continue...");
    getch();
}


