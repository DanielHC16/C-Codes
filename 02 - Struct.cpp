//Struct

#include <stdio.h>
#include <string.h>

struct sRecords
{
	char sNum[13];
	char sName[25];
	char sCrYr[10];
	float sGWA;
};

int main(){
	
	
	struct sRecords Student;
	
	printf("Input Student Number --> ");
	gets(Student.sNum);
	
	printf("Input Student Name --> ");
	gets(Student.sName);
	
	printf("Input Student Course and Year --> ");
	gets(Student.sCrYr);
	
	printf("Input Student GWA --> ");
	scanf("%f", &Student.sGWA);
	
	printf("\n");
	
	printf("<@@ STUDENT RECORD @@>\n\n");
	printf("Student No: %s\n", Student.sNum);
	printf("Student Name: %s\n", Student.sName);
	printf("Course and Year: %s\n", Student.sCrYr);
	printf("GWA: %.2f\n", Student.sGWA);
	
		if (Student.sGWA <= 2.50) {
		printf("Academic Status: Good Standing");
	} else if (Student.sGWA <= 3.00){
		printf("Academic Status: Probation");
	} else if (Student.sGWA > 3.00){
		printf("Academic Status: Dismissed");
	} else printf("Invalid GWA");
		
	
	
	return 0;
}
