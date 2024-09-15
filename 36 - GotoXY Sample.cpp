#include <windows.h>
#include <stdio.h>

void gotoxy(int x, int y){
	// <ESC> [(ROW);(COLUMN)f
	printf("\x1B[%i;%if",y,x);
}

int main() {
    // Move cursor to position (10, 5)
    gotoxy(10, 5);
    printf("Hello, World!");
    
    return 0;
}


