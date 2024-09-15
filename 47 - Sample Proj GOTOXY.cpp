#include <stdio.h>
#include <conio.h>
#include <iostream>



void gotoxy(int x, int y) {
    printf("\x1B[%d;%dH", y, x); 
}

void setTextColor(int color) {
    printf("\x1B[%dm", color); // ANSI escape code for text color
}

// Function to set background color using ANSI escape codes
void setBackgroundColor(int color) {
    printf("\x1B[%dm", color); // ANSI escape code for background color
}

// Function to reset text attributes to default
void resetTextAttributes() {
    printf("\x1B[0m"); // ANSI escape code to reset text attributes
}

int main() {
	
	int    NoItem,ItemNo,Qty,ctr,Row=5;
 	float  UPrice,TAmt,ATendered,Change,APaid=0;
	char   ItemDesc[15],TempChar;

	
    setBackgroundColor(44);
    setTextColor(37);
	system("cls");
	
	gotoxy(45, 1);
	printf("DENLEN's SUPERMARKET");
	gotoxy(45, 2);
	printf("Sta. Mesa, Manila");
	
	gotoxy(6, 4);
	printf("Item No. 		Description		Qty. 		Unit Price		Total Amount");
	gotoxy(5, 22);
	printf("No. of Items Bought ->   [ 	]");
	gotoxy(37, 22);
	printf("Total Amount to be Paid -> ");
	gotoxy(37, 23);
	printf("Amount of Customer Tedered -> ");
	gotoxy(37, 24);
	printf("Amount of Change -> ");
	gotoxy(31, 22);
	scanf("%d", &NoItem);


	for (ctr=1; ctr<=NoItem; ctr++){
		gotoxy( 6, Row+ctr);	 // 
		printf("[ #%d ]", ctr); 
		gotoxy(23, Row+ctr); // Description
		printf("[			]"); 
		gotoxy(48, Row+ctr); // Quantity
		printf("[	]"); 
		gotoxy(63, Row+ctr); // Price
		printf("[			]");
		gotoxy(7, Row+ctr); // Amount Input
		scanf("%c", &TempChar);
		gotoxy(24, Row+ctr); // Description Input 
		gets(ItemDesc);
		gotoxy(49, Row+ctr); // Quantity Input
		scanf("%d", &Qty);
		gotoxy(64, Row+ctr); // Price Input
		scanf("%f", &UPrice);
		TAmt = Qty * UPrice;
		gotoxy(84, Row+ctr); 	// TOTAL
		printf("%10.2f", TAmt);
		APaid += TAmt;
	}
	
	gotoxy(70, 22); // TOTAL PRICE
	printf("%8.2f", APaid); 
	gotoxy(70, 23);
	printf("_____.00 PHP");
	gotoxy(70, 23);		// TENDERED 	INPUT
	scanf("%f", &ATendered);
	Change = ATendered - APaid;
	gotoxy(70, 24); 	// CHANGE
	printf("%8.2f", Change);
	getch();

}
