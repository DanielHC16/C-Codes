#include <stdio.h>

int main(){
	
	char grade;
	
	printf("Enter your grade A-F:\n");
	scanf("%c", &grade);
	
	switch(grade){
		case 'A':
			printf("Perfect!");
			break;
		case 'B':
			printf("Great!");
			break;
		case 'C':
			printf("Good!");
			break;
		case 'D':
			printf("Okay!");
			break;
		case 'F':
			printf("Bobo!");
			break;
		default:
			printf("Invalid Grade");			
	}
}
