#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

typedef struct EMPREC {
	char empName[50];
	char empNo[25];
	char empPos[20];
	float Salary;
	struct EMPREC* next;
	struct EMPREC* prev;
} EMPREC;

void MainMenu();
void CreateDLL(EMPREC **HEAD, EMPREC **TAIL);
void TravHead(EMPREC **HEAD);
void TravTail(EMPREC **TAIL);
void AddHead(EMPREC **HEAD, EMPREC **TAIL);
void AddTail(EMPREC **HEAD, EMPREC **TAIL);
void AddBef(EMPREC **HEAD);
void AddAft (EMPREC **HEAD, EMPREC **TAIL);
void DelHead(EMPREC **HEAD, EMPREC **TAIL);
void DelTail(EMPREC **HEAD, EMPREC **TAIL);
void DelVal(EMPREC **HEAD, EMPREC char *value);
void DelBef(EMPREC **HEAD);
void DelAft(EMPREC **HEAD, char *empNo);
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void gotoxy(int x, int y);
void gotoxy(int x, int y){
	printf("%c[%d;%df]", 0x1B, y, x);
}

int main(){
	EMPREC *HEAD, *TAIL;
	int choice;
	char deletevalue[15];
	HEAD=TAIL=NULL;
	
	menu:
		MainMenu();
		printf("Enter your choice --> ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				CreateDLL(&HEAD, &TAIL);
				goto menu;
			case 2:
				TravHead(&HEAD);
				printf("\n---------------------------------------------------------------------------------------------------------\n\n");
				getch();
				goto menu;
			case 3:
				TravTail(&TAIL);
				printf("\n---------------------------------------------------------------------------------------------------------\n\n");
				printf("Press any key to return to main menu...");
				getch();
				goto menu;
			case 4:
				AddHead(&HEAD, &TAIL);
				goto menu;
				break;
			case 5:
				AddTail(&HEAD, &TAIL);
				goto menu;
				break;
			case 6:
				AddBef(&HEAD);
				goto menu;
			case 7:
				AddAft(&HEAD, &TAIL);
				goto menu;
			case 8:
				DelHead(&HEAD, &TAIL);
				goto menu;
			case 9:
				DelTail(&HEAD, &TAIL);
			case 10:
				DelVal(&HEAD, deletevalue);
				goto menu;
			case 11:
				DelBef(&HEAD);
				goto menu;
			case 12:
				if (HEAD == NULL){
					printf("--------------------------------------------------------------\n");
						printf("The Employee Record is EMPTY!!");
					printf("--------------------------------------------------------------\n");
					getch();
					goto menu;
				}
			char empNo[15];
			printf("--------------------------------------------------------------\n");
			printf("Enter Employee Record No. after which you want to delete the node: ");
			scanf("%s", empNo);
			DelAft(&HEAD, empNo);
			goto menu;
			
			case 13:
				return 0;
			default:
				printf("Invalid Choice!!");
				getch();
				goto menu;
		}
		return 0;
			
}

void MainMenu(){
	system("cls");
	printf("\n------------------------  MAIN MENU  -------------------------\n");
	printf("\n [1] Create an Employee Record");
	printf("\n [2] Traverse Employee Record (HEAD - from top to bottom)");
	printf("\n [3] Traverse Employee Record (TAIL - from bottom to top)");
	printf("\n [4] Adding/Insertion of Node in Employee Record (at the head)");
	printf("\n [5] Adding/Insertion of Node in Employee Record (at the tail)");
	printf("\n [6] Adding/Insertion of Node in Employee Record (Before a Value)");
	printf("\n [7] Adding/Insertion of Node in Employee Record (After a Value)");		
	printf("\n [8] Deletion of Node at the Head");
	printf("\n [9] Deletion of Node at the Tail");
	printf("\n [10] Deletion of Node by Value");
	printf("\n [11] Deletion of Node Before a Node");
	printf("\n [12] Deletion of Node After a Node");
	printf("\n [13] Exit");
	printf("\n\n--------------------------------------------------------------\n");
}

void CreateDLL(EMPREC **HEAD, EMPREC **TAIL){
	EMPREC *NewNode, *Prev;
	char Resp;
	int ctr=1;
	system("cls");
	NewNode = (EMPREC*)malloc(sizeof(EMPREC));
	*HEAD=NewNode;
	*TAIL=NewNode;
	(*HEAD)->prev=NULL;
	
	printf("n------------------  CREATING AN EMPLOYEE RECORD  ------------------\n");
	do{
		printf("\nEmployee #%d Number\t\t: ", ctr);
		scanf("%s", NewNode->empNo);
		
		printf("\nEmployee #%d Name\t\t\t:", ctr);
		scanf("%s", NewNode->empName);
		
		printf("\nEmployee Position\t\t\t: ");
		scanf(" %[^\n]", NewNode->empPos);
		
		printf("\nSalary\t\t\t\t: ");
		scanf("%f", &NewNode->Salary);
		printf("\n------------------------------------------------------------------\n\n");
		
		printf("Add Another Record? [Y/N]: ");
		scanf(" %c", &Resp);
		printf("\n------------------------------------------------------------------\n\n");
		
		if(toupper(Resp) == 'Y'){
			ctr++;
				NewNode->next=(EMPREC*)malloc(sizeof(EMPREC));
			NewNode->next->prev=NewNode;
			NewNode=NewNode->next;
			*TAIL=NewNode;
		}
		
	}	while(toupper(Resp) == 'Y');
		(*TAIL)->next=NULL;
		NewNode=NULL;
}

	void TravHead(EMPREC **HEAD){
		EMPREC *TravNode;
		int ctr=1;
		system("cls");
		TravNode=*HEAD;
		printf("\n------------------------------- EMPLOYEE RECORD (HEAD - from top to bottom) ------------------------------\n");
		if(TravNode==NULL){
			peintf("\n%-37s Employee Record is Empty!\n", "");
			return;
		}
		else {
			gotoxy(10, 5);
		printf("Employee No.");
		
			gotoxy(40, 5);
		printf("Employee Name");
		
			gotoxy(70, 5);
		printf("Employee Position");
		
			gotoxy(100, 5);
		printf("Salary\n\n");
		
			do{
				printf("%-9d", ctr);
			printf("%-30s", TravNode->empNo);
			printf("%-30s", TravNode->empName);
			printf("%-30s", TravNode->empPos);
			printf("%.2f\n\n", TravNode->Salary);
				TravNode=TravNode->next;
				ctr++;
			}while(TravNode!=NULL);
		}
	}

void TravTail(EMPREC **TAIL){
	EMPREC *TravNode;
	int ctr=1;
	system("cls");
	TravNode=*TAIL;
	printf("\n------------------------------- EMPLOYEE RECORD (TAIL - from bottom to top) ------------------------------\n");
	if(TravNode==NULL){
		printf("\n%-37s Employee Record is empty!\n", "");
		return;
	}
	else{
		gotoxy(10, 5);
	printf("Employee No.");
	
		gotoxy(40, 5);
	printf("Employee Name");
	
		gotoxy(70, 5);
	printf("Employee Position")
	
		gotoxy(100, 5);
	printf("Salary\n\n");
	do{
		printf("%-9d", ctr);
		printf("%-30s", TravNode->empNo);
		printf("%-30s", TravNode->empName);
		printf("%-30s", TravNode->empPos);
		printf("%.2f\n\n", TravNode->Salary);
			TravNode = TravNode->prev;
			ctr++;
			}while(TravNode!=NULL);
	}
}

	


