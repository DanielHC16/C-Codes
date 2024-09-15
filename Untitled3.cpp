#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y){
	printf("/x1B[%i%%if", x, y);
}


