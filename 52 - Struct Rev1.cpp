#include <stdio.h>
#include <string.h>

typedef struct Student{
	char name[50];
	char ID[30];
	int grades[4];
	float average;
} Student;

void print_student(Student);
void grade_average(Student*);

int main(){
	Student student [3];
	
	strcpy(student[0].name, "Timothy");
	strcpy(student[0].ID, "010101");
	student[0].grades[0] = 99;
	student[0].grades[1] = 98;
	student[0].grades[2] = 97;
	student[0].grades[3] = 96;
	
	strcpy(student[1].name, "Daniel");
	strcpy(student[1].ID, "101010");
	student[1].grades[0] = 98;
	student[1].grades[1] = 97;
	student[1].grades[2] = 96;
	student[1].grades[3] = 95; 
	
	grade_average(&student[0]);
	grade_average(&student[1]);
	
	print_student(student[0]);
	print_student(student[1]);
	
	return 0;
}

void print_student(Student student) {
	printf("Student Name: %s\n", student.name);
	printf("Student ID: %s\n", student.ID);
	printf("Grades: %d, %d, %d, %d\n", student.grades[0], student.grades[1], student.grades[2], student.grades[3]);
	printf("Average: %.2f\n", student.average);	
}

void grade_average(Student* student){
	int sum = 0;
	for (int i = 0; i < 4; i++){
		sum += student->grades[i];
	}
	student->average = sum / 4.0;
}
