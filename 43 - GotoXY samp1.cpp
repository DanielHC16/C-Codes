#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void gotoxy(int x, int y){
printf("%c[%d;%df", 0x1B, y,x);
}

int main(){
	
	gotoxy(5,10);
	printf("Hello World");
	
	getch();
}
