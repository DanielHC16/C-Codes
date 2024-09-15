#include <stdio.h>


void gotoxy(int x, int y){
	printf("\x1B[%i;%if", x, y);
}


// <ESC> [(ROW);(COLUMN)f
int main(){
	
	gotoxy(1, 1);
	printf("|Row 1 Col 0|");
	gotoxy(1, 15);
	printf("|Row 1 Col 10|");
	gotoxy(1, 30);
	printf("|Row 1 Col 20|");
	gotoxy(1, 45);
	printf("|Row 1 Col 30|");
	gotoxy(1, 60);
	printf("|Row 1 Col 60|");
	gotoxy(1, 70);
	printf("|Row 1 Col 70|");
	gotoxy(1, 80);
	printf("|Row 1 Col 80|");
	gotoxy(1, 90);
	printf("|Row 1 Col 90|");
	gotoxy(1, 100);
	printf("|Row 1 Col 100|");
	

	gotoxy(2, 1);
	printf("|Row 2 Col 0");
	for (int i=10; i<=100; i+=10){
		gotoxy(2, i);
		printf("|Row 2 Col %d|", i);
	}
	
	gotoxy(3, 1);

	
}
