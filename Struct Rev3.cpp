#include <stdio.h>
#include <string.h>

struct Person{
	char name[50];
	char gender[20];
	int age;
	
}P1;

struct Book{
	char Title[50];
	char Author[50];
	int Book_ID;
};

struct Weapon{
	char name[40];
	int ID;
};

int main(){
	
	
	/*

	printf("Input Personnel Info\n\n");
	
	printf("Input Name:\n");
	fgets(P1.name, sizeof(P1.name), stdin);
	printf("Input Gender:\n");
	fgets(P1.gender, sizeof(P1.name), stdin);
	printf("Input Age:\n");
	scanf("%d", &P1.age);
	
	struct Person *infoPtr;
	infoPtr = &P1;
	
	printf("Confirmed Name: %s\n", infoPtr->name);
	printf("Confirmed Gender: %s\n", infoPtr->gender);
	printf("Confirmed Age: %d\n", infoPtr->age);
	
	*/
	
	/*
	struct Person P2; // Initializes "P2" struct
		strcpy(P2.name, "Daniel"); // Gives value to "name" of Struct Person
		P2.age = 19; // Gives value to "age" of Struct Person
			
	struct Person *personPtr;
	personPtr = &P2;
	
	printf("Person Name: %s\n", personPtr->name);
	printf("Person Age: %d\n", personPtr->age);
	
	printf("\n---------------------\n");
	
	struct Book B1;
		strcpy(B1.Title, "Resonance");
		strcpy(B1.Author, "Kugisaki Nobara");
		B1.Book_ID = 001;
	
	
	struct Book *bookPtr;
	bookPtr = &B1;
	printf("Book Title: %s \n", bookPtr->Title);
	printf("Book Author: %s \n", bookPtr->Author);
	printf("Book ID: %d \n", bookPtr->Book_ID);
	*/
	
	/*
	struct Book B2;
	printf("Input Book Name: \n");
	fgets(B2.Title, sizeof(B2.Title), stdin);
	printf("Input Book Author: \n");
	fgets(B2.Author, sizeof(B2.Author), stdin);
	printf("Input Book ID: \n");
	scanf("%d", &B2.Book_ID);
	getchar();
		
	struct Book *bookPtr;
	bookPtr = &B2;
	
	printf("Confirmed Book Name: %s\n", bookPtr->Title);
	printf("Confirmed Book Author: %s\n", bookPtr->Author);
	printf("Confirmed Book ID %d\n", bookPtr->Book_ID);
	**/
	
	struct Weapon W1;
	printf("Enter Weapon Name: ");
	fgets(W1.name, sizeof(W1.name), stdin);
	
	printf("Enter Weapon ID: ");
	scanf("%d", &W1.ID);
	getchar();
	
	struct Weapon *w1Ptr;
	w1Ptr = &W1;
	printf("\nConfirmed Weapon Name:%s", w1Ptr->name);
	printf("Confirmed Weapon ID:%d", w1Ptr->ID);
	
	
		
			
	
	return 0;
	
	
}
