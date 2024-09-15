#include <stdio.h>
#include <conio.h>
#include <dos.h>
#define p printf
#define s scanf

void testScoreAverage();
void billingStatement();
void populationOfPUPStudents();
void loading();
void maze();
void threeDigitToWord();
void ticTacToeGame();
int checkWin(char square[]);
void clockTime();
void display_digit(int digit, int x, int y);
void setScreenColors();
void clearScreen();
void gotoxy(int x, int y);
void _up();
void _down();
void _left();
void _right();
void _erase_up();
void _erase_down();
void _erase_left();
void _erase_right();

int x, y; // Declare at the top
char uname[50], pwd[50]; // Declare at the top

int main() {
    int choice;

    do {
        clearScreen();
        setScreenColors();

        gotoxy(10, 1); printf("=======================================");
        gotoxy(25, 2); printf("Welcome to the Utility Program");
        gotoxy(20, 3); printf("=======================================");
        gotoxy(10, 5); printf("1. Test Score Average Generator");
        gotoxy(10, 6); printf("2. Billing Statement");
        gotoxy(10, 7); printf("3. Population of PUP Students");
        gotoxy(10, 8); printf("4. Loading");
        gotoxy(10, 9); printf("5. Maze");
        gotoxy(10, 10); printf("6. 3 Digit to Word Form");
        gotoxy(10, 11); printf("7. Tic Tac Toe Game");
        gotoxy(10, 12); printf("8. Clock");
        gotoxy(10, 13); printf("9. Exit");
        gotoxy(10, 15); printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: testScoreAverage(); break;
            case 2: billingStatement(); break;
            case 3: populationOfPUPStudents(); break;
            case 4: loading(); break;
            case 5: maze(); break;
            case 6: threeDigitToWord(); break;
            case 7: ticTacToeGame(); break;
            case 8: clockTime(); break;
            case 9: break;
            default:
                gotoxy(10, 17); printf("Invalid choice. Please try again.");
                getch();
        }
    } while (choice != 9);

    return 0;
}

// Placeholder for other utility functions
void testScoreAverage() {
    int t1, t2, t3, t4, total;
    float average;

    clearScreen(); // Clear the screen
    setScreenColors(); // Set the colors

    gotoxy(20, 1); printf("=======================================");
    gotoxy(25, 2); printf("TEST SCORE AVERAGE GENERATOR");
    gotoxy(20, 3); printf("=======================================");

    gotoxy(10, 5); printf("Enter four test scores:");
    gotoxy(10, 6); scanf("%d", &t1);
    gotoxy(10, 7); scanf("%d", &t2);
    gotoxy(10, 8); scanf("%d", &t3);
    gotoxy(10, 9); scanf("%d", &t4);

    total = t1 + t2 + t3 + t4;
    average = total / 4.0;

    clearScreen(); // Clear the screen again for the results

    gotoxy(20, 1); printf("=======================================");
    gotoxy(25, 2); printf("TEST SCORE AVERAGE GENERATOR");
    gotoxy(20, 3); printf("=======================================");

    gotoxy(10, 5); printf("Test 1: %d", t1);
    gotoxy(10, 6); printf("Test 2: %d", t2);
    gotoxy(10, 7); printf("Test 3: %d", t3);
    gotoxy(10, 8); printf("Test 4: %d", t4);

    gotoxy(10, 12); printf("The average is %.2f", average);
    gotoxy(10, 15); printf("Press any key to go back to the main menu.");

    getch(); // Wait for a key press

}

void billingStatement() {
    int qty1, qty2, qty3;
    float uprice1, uprice2, uprice3, amount1, amount2, amount3, totalamount = 0;
    char desc1[50], desc2[50], desc3[50];

    clearScreen(); // Clear the screen
    setScreenColors(); // Set the colors

    gotoxy(9, 1); printf("================================================================");
    gotoxy(35, 2); printf("PUP STORE");
    gotoxy(31, 3); printf("Billing Statement");
    gotoxy(10, 5); printf("Qty");
    gotoxy(20, 5); printf("Item Description");
    gotoxy(45, 5); printf("Unit Price");
    gotoxy(60, 5); printf("Amount");
    gotoxy(40, 10); printf("Total Amount");
    gotoxy(9, 11); printf("================================================================");

    // Input first item
    gotoxy(10, 6); scanf("%d", &qty1);
    gotoxy(20, 6); fflush(stdin); fgets(desc1, sizeof(desc1), stdin);
    gotoxy(45, 6); scanf("%f", &uprice1);
    amount1 = qty1 * uprice1;
    gotoxy(60, 6); printf("%.2f", amount1);
    totalamount += amount1;

    // Input second item
    gotoxy(10, 7); scanf("%d", &qty2);
    gotoxy(20, 7); fflush(stdin); fgets(desc2, sizeof(desc2), stdin);
    gotoxy(45, 7); scanf("%f", &uprice2);
    amount2 = qty2 * uprice2;
    gotoxy(60, 7); printf("%.2f", amount2);
    totalamount += amount2;

    // Input third item
    gotoxy(10, 8); scanf("%d", &qty3);
    gotoxy(20, 8); fflush(stdin); fgets(desc3, sizeof(desc3), stdin);
    gotoxy(45, 8); scanf("%f", &uprice3);
    amount3 = qty3 * uprice3;
    gotoxy(60, 8); printf("%.2f", amount3);
    totalamount += amount3;

    gotoxy(60, 12); printf("%.2f", totalamount); // Display total amount

    gotoxy(10, 14); printf("Press any key to go back to the main menu.");
    getch(); // Wait for a key press
}


void populationOfPUPStudents() {
     int ce1, ce2, ce3;
    int ece1, ece2, ece3;
    int cpe1, cpe2, cpe3;
    int ee1, ee2, ee3;
    int me1, me2, me3;
    int rem1, rem2, rem3;
    int ie1, ie2, ie3;
    int x;

    clrscr(); // Clear the screen
    textbackground(WHITE);
    textcolor(BLUE);
    clrscr(); // Clear the screen again to apply background color

    gotoxy(12, 3); p("PUP-ENGINEERING");
    gotoxy(14, 4); p("SY 2022-2023");
    gotoxy(5, 6); p("Departments");
    gotoxy(25, 6); p("Semester");
    gotoxy(22, 7); p("1     2     3");
    gotoxy(7, 8); p("CE");
    gotoxy(7, 9); p("ECE");
    gotoxy(7, 10); p("CPE");
    gotoxy(7, 11); p("EE");
    gotoxy(7, 12); p("ME");
    gotoxy(7, 13); p("REM");
    gotoxy(7, 14); p("IE");

    gotoxy(21, 8); s("%d", &ce1);
    gotoxy(28, 8); s("%d", &ce2);
    gotoxy(33, 8); s("%d", &ce3);
    gotoxy(21, 9); s("%d", &ece1);
    gotoxy(28, 9); s("%d", &ece2);
    gotoxy(33, 9); s("%d", &ece3);
    gotoxy(21, 10); s("%d", &cpe1);
    gotoxy(28, 10); s("%d", &cpe2);
    gotoxy(33, 10); s("%d", &cpe3);
    gotoxy(21, 11); s("%d", &ee1);
    gotoxy(28, 11); s("%d", &ee2);
    gotoxy(33, 11); s("%d", &ee3);
    gotoxy(21, 12); s("%d", &me1);
    gotoxy(28, 12); s("%d", &me2);
    gotoxy(33, 12); s("%d", &me3);
    gotoxy(21, 13); s("%d", &rem1);
    gotoxy(28, 13); s("%d", &rem2);
    gotoxy(33, 13); s("%d", &rem3);
    gotoxy(21, 14); s("%d", &ie1);
    gotoxy(28, 14); s("%d", &ie2);
    gotoxy(33, 14); s("%d", &ie3);

    // CE
    for (x = 1; x <= ce1; x++) {
        gotoxy(x + 42, 8); delay(10); p("Ü");
    }
    for (x = 1; x <= ce2; x++) {
        gotoxy(x + 42 + 5, 8); delay(10); p("Ü");
    }
    for (x = 1; x <= ce3; x++) {
        gotoxy(x + 42 + 10, 8); delay(10); p("Ü");
    }

    // ECE
    for (x = 1; x <= ece1; x++) {
        gotoxy(x + 42, 9); delay(10); p("Ü");
    }
    for (x = 1; x <= ece2; x++) {
        gotoxy(x + 42 + 5, 9); delay(10); p("Ü");
    }
    for (x = 1; x <= ece3; x++) {
        gotoxy(x + 42 + 10, 9); delay(10); p("Ü");
    }

    // CPE
    for (x = 1; x <= cpe1; x++) {
        gotoxy(x + 42, 10); delay(10); p("Ü");
    }
    for (x = 1; x <= cpe2; x++) {
        gotoxy(x + 42 + 5, 10); delay(10); p("Ü");
    }
    for (x = 1; x <= cpe3; x++) {
        gotoxy(x + 42 + 10, 10); delay(10); p("Ü");
    }

    // EE
    for (x = 1; x <= ee1; x++) {
        gotoxy(x + 42, 11); delay(10); p("Ü");
    }
    for (x = 1; x <= ee2; x++) {
        gotoxy(x + 42 + 5, 11); delay(10); p("Ü");
    }
    for (x = 1; x <= ee3; x++) {
        gotoxy(x + 42 + 10, 11); delay(10); p("Ü");
    }

    // ME
    for (x = 1; x <= me1; x++) {
        gotoxy(x + 42, 12); delay(10); p("Ü");
    }
    for (x = 1; x <= me2; x++) {
        gotoxy(x + 42 + 5, 12); delay(10); p("Ü");
    }
    for (x = 1; x <= me3; x++) {
        gotoxy(x + 42 + 10, 12); delay(10); p("Ü");
    }

    // REM
    for (x = 1; x <= rem1; x++) {
        gotoxy(x + 42, 13); delay(10); p("Ü");
    }
    for (x = 1; x <= rem2; x++) {
        gotoxy(x + 42 + 5, 13); delay(10); p("Ü");
    }
    for (x = 1; x <= rem3; x++) {
        gotoxy(x + 42 + 10, 13); delay(10); p("Ü");
    }

    // IE
    for (x = 1; x <= ie1; x++) {
        gotoxy(x + 42, 14); delay(10); p("Ü");
    }
    for (x = 1; x <= ie2; x++) {
        gotoxy(x + 42 + 5, 14); delay(10); p("Ü");
    }
    for (x = 1; x <= ie3; x++) {
        gotoxy(x + 42 + 10, 14); delay(10); p("Ü");
    }

    gotoxy(10, 16); p("Press any key to go back to the main menu.");
    getch(); // Wait for a key press
}

void loading() {
    textcolor(YELLOW);
    clrscr();

    
    

    // Draw the border
    for (x = 1; x <= 79; x++) {
        gotoxy(x, 1); printf("%c", 205);
        gotoxy(x, 24); printf("%c", 205);
    }
    for (y = 1; y <= 24; y++) {
        gotoxy(1, y); printf("%c", 186);
        gotoxy(79, y); printf("%c", 186);
    }
    gotoxy(1, 1); printf("%c", 201);
    gotoxy(79, 1); printf("%c", 187);
    gotoxy(1, 24); printf("%c", 200);
    gotoxy(79, 24); printf("%c", 189);

    // User input
    gotoxy(20, 10); printf("USERNAME: ");
    gotoxy(20, 12); printf("PASSWORD: ");
    gotoxy(30, 10); scanf("%s", uname);
    gotoxy(30, 12); scanf("%s", pwd);

    // Loading simulation
    for (x = 2; x <= 78; x++) {
        gotoxy(x, 23); delay(50);
        printf("%c", 219);
        gotoxy(2, 22); printf("LOADING...");
        gotoxy(75, 22); delay(50);
        printf("%d", x + 22);
    }

    // Prompt to return to main menu
    gotoxy(20, 20); printf("Press any key to return to the main menu...");
    getch();
}

void maze() {
    clearScreen(); // Use clearScreen instead of clrscr

    // Draw the maze walls
    _right(1, 79, 1);
    _down(1, 24, 79);
    _left(79, 1, 24);
    _up(24, 3, 1);

    _right(2, 77, 3);
    _down(3, 22, 77);
    _left(77, 3, 22);
    _up(22, 5, 3);

    _right(4, 75, 5);
    _down(5, 20, 75);
    _left(75, 5, 20);
    _up(20, 7, 5);

    _right(6, 73, 7);
    _down(7, 18, 73);
    _left(73, 7, 18);
    _up(18, 9, 7);

    _right(8, 71, 9);
    _down(9, 16, 71);
    _left(71, 9, 16);
    _up(16, 11, 9);

    _right(10, 69, 11);
    _down(11, 14, 69);
    _left(69, 11, 14);
    _up(14, 13, 11);

    getch();

    // Erase maze
    _erase_up(14, 13, 11);
    _erase_left(69, 11, 14);
    _erase_down(11, 14, 69);
    _erase_right(10, 69, 11);
    
    _erase_up(16, 11, 9);
    _erase_left(71, 9, 16);
    _erase_down(9, 16, 71);
    _erase_right(8, 71, 9);
    
    _erase_up(18, 9, 7);
    _erase_left(73, 7, 18);
    _erase_down(7, 18, 73);
    _erase_right(6, 73, 7);
    
    _erase_up(20, 7, 5);
    _erase_left(75, 5, 20);
    _erase_down(5, 20, 75);
    _erase_right(4, 75, 5);
    
    _erase_up(22, 5, 3);
    _erase_left(77, 3, 22);
    _erase_down(3, 22, 77);
    _erase_right(2, 77, 3);
    
    _erase_up(24, 3, 1);
    _erase_left(79, 1, 24);
    _erase_down(1, 24, 79);
    _erase_right(1, 79, 1);

    getch();
}

void threeDigitToWord() {
    int number, hundred, ten, unit;
    clearScreen();
    setScreenColors();

    gotoxy(10, 5); printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    if (number < 100 || number > 999) {
        gotoxy(10, 7); printf("Invalid input! Please enter a 3-digit number.");
        getch();
        return;
    }

    hundred = number / 100;
    ten = (number / 10) % 10;
    unit = number % 10;

    gotoxy(10, 7); printf("The number in words is: ");

    switch (hundred) {
        case 1: printf("One Hundred "); break;
        case 2: printf("Two Hundred "); break;
        case 3: printf("Three Hundred "); break;
        case 4: printf("Four Hundred "); break;
        case 5: printf("Five Hundred "); break;
        case 6: printf("Six Hundred "); break;
        case 7: printf("Seven Hundred "); break;
        case 8: printf("Eight Hundred "); break;
        case 9: printf("Nine Hundred "); break;
    }

    switch (ten) {
        case 1:
            switch (unit) {
                case 0: printf("Ten"); break;
                case 1: printf("Eleven"); break;
                case 2: printf("Twelve"); break;
                case 3: printf("Thirteen"); break;
                case 4: printf("Fourteen"); break;
                case 5: printf("Fifteen"); break;
                case 6: printf("Sixteen"); break;
                case 7: printf("Seventeen"); break;
                case 8: printf("Eighteen"); break;
                case 9: printf("Nineteen"); break;
            }
            break;
        case 2: printf("Twenty "); break;
        case 3: printf("Thirty "); break;
        case 4: printf("Forty "); break;
        case 5: printf("Fifty "); break;
        case 6: printf("Sixty "); break;
        case 7: printf("Seventy "); break;
        case 8: printf("Eighty "); break;
        case 9: printf("Ninety "); break;
    }

    if (ten != 1) {
        switch (unit) {
            case 1: printf("One"); break;
            case 2: printf("Two"); break;
            case 3: printf("Three"); break;
            case 4: printf("Four"); break;
            case 5: printf("Five"); break;
            case 6: printf("Six"); break;
            case 7: printf("Seven"); break;
            case 8: printf("Eight"); break;
            case 9: printf("Nine"); break;
        }
    }

    gotoxy(10, 15); printf("Press any key to go back to the main menu");
    getch();
}

void ticTacToeGame() {
    char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    int player = 1, i, choice;
    char mark;

    do {
        clearScreen();
        setScreenColors();

        gotoxy(10, 5); printf("Player 1 (X)  -  Player 2 (O)\n\n");

        gotoxy(10, 6); printf("     |     |     ");
        gotoxy(10, 7); printf("  %c  |  %c  |  %c  ", square[1], square[2], square[3]);
        gotoxy(10, 8); printf("____|_____|____");
        gotoxy(10, 9); printf("     |     |     ");
        gotoxy(10, 10); printf("  %c  |  %c  |  %c  ", square[4], square[5], square[6]);
        gotoxy(10, 11); printf("____|_____|____");
        gotoxy(10, 12); printf("     |     |     ");
        gotoxy(10, 13); printf("  %c  |  %c  |  %c  ", square[7], square[8], square[9]);
        gotoxy(10, 14); printf("     |     |     ");

        player = (player % 2) ? 1 : 2;

        gotoxy(10, 16); printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')
            square[1] = mark;
        else if (choice == 2 && square[2] == '2')
            square[2] = mark;
        else if (choice == 3 && square[3] == '3')
            square[3] = mark;
        else if (choice == 4 && square[4] == '4')
            square[4] = mark;
        else if (choice == 5 && square[5] == '5')
            square[5] = mark;
        else if (choice == 6 && square[6] == '6')
            square[6] = mark;
        else if (choice == 7 && square[7] == '7')
            square[7] = mark;
        else if (choice == 8 && square[8] == '8')
            square[8] = mark;
        else if (choice == 9 && square[9] == '9')
            square[9] = mark;
        else {
            gotoxy(10, 18); printf("Invalid move ");
            player--;
            getch();
        }
        i = checkWin(square);

        player++;
    } while (i == -1);

    clearScreen();
    setScreenColors();

    if (i == 1) {
    gotoxy(10, 5);
    printf("==> Player %d win ", --player);
} else {
    gotoxy(10, 5);
    printf("==> Game draw");
}


    gotoxy(10, 15); printf("Press any key to go back to the main menu");
    getch();
}

int checkWin(char square[]) {
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
             square[4] != '4' && square[5] != '5' && square[6] != '6' &&
             square[7] != '7' && square[8] != '8' && square[9] != '9')
        return 0;
    else
        return -1;
}

void clockTime() {
    int minutes = 0, seconds = 0;
    clearScreen();
    textcolor(BLUE);
    textbackground(WHITE);

    while (minutes < 60) {
        while (seconds < 60) {
            clrscr();
            gotoxy(25, 1); printf("=========================================");
            gotoxy(25, 3); printf("=========================================");
            gotoxy(42, 2); printf("CLOCK");
            gotoxy(25, 4); printf("This clock shows the minutes and seconds.");

            // Display current time
            display_digit(minutes / 10, 25, 5);
            display_digit(minutes % 10, 34, 5);
            gotoxy(43, 8); printf(":"); // Display the colon
            display_digit(seconds / 10, 46, 5);
            display_digit(seconds % 10, 58, 5);
            textcolor(BLUE); // Reset text color to blue

            // Delay for 1.5 seconds
            delay(1500);

            // Increment seconds
            seconds++;
        }
        // Increment minutes and reset seconds
        minutes++;
        seconds = 0;
    }

    // Clear screen before exiting
    clrscr();
}

void display_digit(int digit, int x, int y) {
    switch (digit) {
        case 0:
            gotoxy(x, y); printf(" ²²²²²²² ");
            gotoxy(x, y + 1); printf("²²     ²²");
            gotoxy(x, y + 2); printf("²²     ²²");
            gotoxy(x, y + 3); printf("²²     ²²");
            gotoxy(x, y + 4); printf("²²     ²²");
            gotoxy(x, y + 5); printf("²²     ²²");
            gotoxy(x, y + 6); printf(" ²²²²²²² ");
            break;
        case 1:
            gotoxy(x, y); printf("     ²²²");
            gotoxy(x, y + 1); printf("      ²²");
            gotoxy(x, y + 2); printf("      ²²");
            gotoxy(x, y + 3); printf("      ²²");
            gotoxy(x, y + 4); printf("      ²²");
            gotoxy(x, y + 5); printf("      ²²");
            gotoxy(x, y + 6); printf("    ²²²²²");
            break;
        case 2:
            gotoxy(x, y); printf("²²²²²²²²²");
            gotoxy(x, y + 1); printf("        ²");
            gotoxy(x, y + 2); printf("        ²");
            gotoxy(x, y + 3); printf("²²²²²²²²²");
            gotoxy(x, y + 4); printf("²        ");
            gotoxy(x, y + 5); printf("²        ");
            gotoxy(x, y + 6); printf("²²²²²²²²²");
            break;
        case 3:
            gotoxy(x, y); printf("²²²²²²²²²");
            gotoxy(x, y + 1); printf("        ²");
            gotoxy(x, y + 2); printf("        ²");
            gotoxy(x, y + 3); printf("²²²²²²²²²");
            gotoxy(x, y + 4); printf("        ²");
            gotoxy(x, y + 5); printf("        ²");
            gotoxy(x, y + 6); printf("²²²²²²²²²");
            break;
        case 4:
            gotoxy(x, y); printf("      ²²");
            gotoxy(x, y + 1); printf("    ²²²²²");
            gotoxy(x, y + 2); printf("  ²²   ²²");
            gotoxy(x, y + 3); printf("²²     ²²");
            gotoxy(x, y + 4); printf("²²²²²²²²²");
            gotoxy(x, y + 5); printf("      ²²");
            gotoxy(x, y + 6); printf("      ²²");
            break;
        case 5:
            gotoxy(x, y); printf("²²²²²²²²²");
            gotoxy(x, y + 1); printf("²        ");
            gotoxy(x, y + 2); printf("²        ");
            gotoxy(x, y + 3); printf("²²²²²²²²²");
            gotoxy(x, y + 4); printf("        ²");
            gotoxy(x, y + 5); printf("        ²");
            gotoxy(x, y + 6); printf("²²²²²²²²²");
            break;
        case 6:
            gotoxy(x, y); printf(" ²²²²²²² ");
            gotoxy(x, y + 1); printf("²        ");
            gotoxy(x, y + 2); printf("²        ");
            gotoxy(x, y + 3); printf("²²²²²²²²²");
            gotoxy(x, y + 4); printf("²      ²²");
            gotoxy(x, y + 5); printf("²      ²²");
            gotoxy(x, y + 6); printf(" ²²²²²²² ");
            break;
        case 7:
            gotoxy(x, y); printf("²²²²²²²²²");
            gotoxy(x, y + 1); printf("        ²");
            gotoxy(x, y + 2); printf("        ²");
            gotoxy(x, y + 3); printf("        ²");
            gotoxy(x, y + 4); printf("        ²");
            gotoxy(x, y + 5); printf("        ²");
            gotoxy(x, y + 6); printf("        ²");
            break;
        case 8:
            gotoxy(x, y); printf(" ²²²²²²² ");
            gotoxy(x, y + 1); printf("²      ²²");
            gotoxy(x, y + 2); printf("²      ²²");
            gotoxy(x, y + 3); printf(" ²²²²²²² ");
            gotoxy(x, y + 4); printf("²      ²²");
            gotoxy(x, y + 5); printf("²      ²²");
            gotoxy(x, y + 6); printf(" ²²²²²²² ");
            break;
        case 9:
            gotoxy(x, y); printf(" ²²²²²²² ");
            gotoxy(x, y + 1); printf("²      ²²");
            gotoxy(x, y + 2); printf("²      ²²");
            gotoxy(x, y + 3); printf(" ²²²²²²²²");
            gotoxy(x, y + 4); printf("        ²");
            gotoxy(x, y + 5); printf("        ²");
            gotoxy(x, y + 6); printf(" ²²²²²²² ");
            break;
    }
}

void setScreenColors() {
    textcolor(WHITE);
    textbackground(BLUE);
    clrscr();
}

void clearScreen() {
    textcolor(WHITE);
    textbackground(BLACK);
    clrscr();
}

void gotoxy(int x, int y) {
    printf("%c[%d;%df", 0x1B, y, x);
}

// Movement functions
void _up() {
    // Code to move up
}

void _down() {
    // Code to move down
}

void _left() {
    // Code to move left
}

void _right() {
    // Code to move right
}

// Erase functions
void _erase_up() {
    // Code to erase up movement
}

void _erase_down() {
    // Code to erase down movement
}

void _erase_left() {
    // Code to erase left movement
}

void _erase_right() {
    // Code to erase right movement
}

