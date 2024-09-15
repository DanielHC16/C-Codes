#include <stdio.h>
#include <string.h>


struct Books{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
} book;

struct studentRec{
	char name[40];
	int age;
	char college[40];
	float allowance;
};


struct studentRanking{
	char name[50];
	int age;
	char speciality[100];
	float GWA;
};

int main(){

struct studentRec std[3];

	strcpy(std[0].name, "Daniel");
	std[0].age = 19;
	strcpy(std[0].college, "CISTM");
	std[0].allowance = 250;
	
	strcpy(std[1].name, "Tim");
	std[1].age = 19;
	strcpy(std[1].college, "CISTM");
	std[1].allowance = 250;
	
	strcpy(std[2].name, "Clarisse");
	std[2].age = 18;
	strcpy(std[2].college, "CHASS");
	std[2].allowance = 300;

for (int i=0; i<3; i++){
	printf("Student Record #%d  \n", i+1);
	printf(" Name: %s\n", std[i].name);
	printf(" Age: %d\n", std[i].age);
	printf(" College: %s\n", std[i].college);
	printf(" Allowance: %2.f\n", std[i].allowance);
	printf(" \n ");
}


struct Books book[3];

	strcpy(book[0].author, "Jonathan Foe");
	strcpy(book[0].subject, "Philippine History");
	strcpy(book[0].title, "Rizalito Balagbagin");
	book[0].book_id = 001;
	
	strcpy(book[1].author, "Vivien Augustin");
	strcpy(book[1].subject, "Java Programming");
	strcpy(book[1].title, "Java for Babies 101");
	book[1].book_id = 002;
	
	strcpy(book[2].author, "Ronaldo Regala");
	strcpy(book[2].subject, "Data Structures and Algorithms");
	strcpy(book[2].title, "How to Torture CS Students");
	book[2].book_id = 003;

for (int i=0; i<3; i++){
	printf("PLM Authors #%d\n", i+1);
	printf("Author: %s\n", book[i].author);
	printf("Subject: %s\n", book[i].subject);
	printf("Title: %s\n", book[i].title);
	printf("Book ID: %d\n\n", book[i].book_id);
}

struct studentRanking stdR[5];

	strcpy(stdR[0].name, "Boss Iwag");
	strcpy(stdR[0].speciality, "Maximum Perfection");
	stdR[0].age = 20;
	stdR[0].GWA = 99.99;
	
	strcpy(stdR[1].name, "Tim One Man Team");
	strcpy(stdR[1].speciality, "One Man Competition");
	stdR[1].age = 19;
	stdR[1].GWA = 99.98;
	
	strcpy(stdR[2].name, "Trisha Buff");
	strcpy(stdR[2].speciality, "Chinese Kid Specialty");
	stdR[2].age = 19;
	stdR[2].GWA = 99.98;
	
	strcpy(stdR[3].name, "Janineskies");
	strcpy(stdR[3].speciality, "Power Female Buff");
	stdR[3].age = 19;
	stdR[3].GWA = 99.97;
	
	strcpy(stdR[4].name, "Daniel Rising Star");
	strcpy(stdR[4].speciality, "Depression");
	stdR[4].age = 19;
	stdR[4].GWA = 99.95;
	
for (int i = 0; i<5; i++){
	printf("Student Rank #%d\n", i+1);
	printf("Name: %s\n", stdR[i].name);
	printf("Speciality: %s\n", stdR[i].speciality);
	printf("Age: %d\n", stdR[i].age);
	printf("GWA: %0.2f\n\n", stdR[i].GWA);
}	

return 0;

}
