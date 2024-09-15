#include <stdio.h>
#include <Windows.h>
#include <conio.h>

void gotoxy(int x, int y) {
    COORD punto;
    punto.X = x;
    punto.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), punto);
}

struct EmpRecord {
    int No;
    char Name[50];
    char Pos[20];
    float Salary;
};

int main() {

    struct EmpRecord EMP[2];
    float DED, nSal;
    int ctr;
    char Temp;

    for (ctr = 0; ctr < 2; ctr++) {
        printf("<@@@ Employee Information @@@>\n\n");

        printf("Record No. %d -> ", ctr + 1);
        scanf("%d", &EMP[ctr].No);
        getchar();

        printf("Enter Employee Name -> ");
        fgets(EMP[ctr].Name, sizeof(EMP[ctr].Name), stdin);

        printf("Enter Employee Position -> ");
        fgets(EMP[ctr].Pos, sizeof(EMP[ctr].Pos), stdin);

        printf("Enter Employee Salary: PHP ");
        scanf("%f", &EMP[ctr].Salary);
        getchar();

        printf("\nPress Any Key to Continue...\n\n");
        getch();
    }

    system("cls"); // Clear the screen before printing the report



	gotoxy(35, 0);
    	printf("\e[1m\033[4m<EMPLOYEE RECORD>\033[0m\e[m");
	gotoxy(0, 1);
    	printf("\e[1mEmployee No.\e[m");
	gotoxy(30, 1);
    	printf("\e[1mEmployee Name:\e[m");
	gotoxy(55, 1);
    	printf("\e[1mPosition:\e[m");
	gotoxy(80, 1);
    	printf("\e[1mG. Salary\e[m");
    

    for (ctr = 0; ctr < 2; ctr++) {
        DED = EMP[ctr].Salary * 0.20;
        nSal = EMP[ctr].Salary - DED;
        int yPos = ctr * 1 + 10; // Calculate the Y-coordinate for each entry

        // Adjusted X-coordinates for column titles to match column entries
        gotoxy(4, yPos);
        printf("%2d.", ctr + 1);

        gotoxy(10, yPos);
        printf("%d", EMP[ctr].No);

        gotoxy(0, ctr + 1); // Adjusted X-coordinate for Employee Name
        printf("%-20s", EMP[ctr].Name);

        gotoxy(30, ctr + 1); // Adjusted X-coordinate for Position
        printf("%-10s", EMP[ctr].Pos);

        gotoxy(55, ctr + 1); // Adjusted X-coordinate for G. Salary
        printf("P%8.2f", EMP[ctr].Salary);

        gotoxy(80, ctr + 1); // Adjusted X-coordinate for Deduction
        printf("P%8.2f", DED);

        //gotoxy(81, yPos); // Adjusted X-coordinate for N. Salary
        //printf("P%8.2f", nSal);
    }
    

    getch(); // Wait for user input before exiting

    return 0;











}

