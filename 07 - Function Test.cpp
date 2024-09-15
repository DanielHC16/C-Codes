#include <stdio.h>

void function (char name[20], int age)
{
	printf("Hello, ikaw nga pala si-- %s\n", name);
	printf("Ikaw ay %d years old\n", age);
}


int main(){
	
		
		char name[20];
		int age;
		
		
		printf("What is your name?");
		gets(name);
		
		printf("What is your age?");
		scanf("%d", &age);
		
		function(name, age);
		


return(0);

}
