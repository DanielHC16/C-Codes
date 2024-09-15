#include <stdio.h>

int main(){
	
	char temp[50];
	
	printf("Write a phrase that will be displayed 5 times\n");
	scanf("%s", &temp); //gets can also be used
	printf("The phrase repeated 5 times is:\n");
	
	
	for (int i = 0; i < 5; i++){
		printf(temp);
	}
	
	return 0;
}
