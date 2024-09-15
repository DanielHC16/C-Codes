#include <stdio.h>
#include <string.h>

typedef struct Student {
	char ID[20];
	char name[50];
	char sex[10];
	int age;
	float Grades[5];
}Student;

int main(){
	
	float sum = 0;
	float Average = 0;
	Student Daniel;
	
	strcpy(Daniel.ID, "2023-34033");
	strcpy(Daniel.name, "Daniel Hardy Camacho");
	strcpy(Daniel.sex, "Male");
	Daniel.age = 19;
	Daniel.Grades[0] = 97.54;
	Daniel.Grades[1] = 92.5;
	Daniel.Grades[2] = 96.7;
	Daniel.Grades[3] = 98.2;
	Daniel.Grades[4] = 99.1;
	Daniel.Grades[5] = 97.2;
	
	int i;
	for (i = 0; i < 6; i++){
		Daniel.Grades[i] += i;
		sum += Daniel.Grades[i];
	}
	
	Average = sum / 6;
	
	printf("Student Name: %s\n", Daniel.name);
	printf("Student ID: %s\n", Daniel.ID);
	printf("Student Gender: %s\n", Daniel.sex);
	printf("Student Age: %d\n", Daniel.age);
	printf("Grades Average: %2f\n", Average);
	
	
	
}
