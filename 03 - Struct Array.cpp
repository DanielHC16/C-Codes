#include <stdio.h>
#include <string.h>

struct sRecords
{
    char sNum[13];
    char sName[25];
    char sCrYr[10];
    float sGWA[5];
};

float computeGWA(float array[], int size)
{
    float sum = 0.0;

    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }

    return sum / size;
}

int main()
{
    struct sRecords Student;

    printf("Input Student Number --> ");
    fgets(Student.sNum, sizeof(Student.sNum), stdin);

    printf("Input Student Name --> ");
    fgets(Student.sName, sizeof(Student.sName), stdin);

    printf("Input Student Course and Year --> ");
    fgets(Student.sCrYr, sizeof(Student.sCrYr), stdin);

    printf("Input 5 Subject Grades: \n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Input Grade #%d: ", i + 1);	
        scanf("%f", &Student.sGWA[i]);
    }

    float overAllGWA = computeGWA(Student.sGWA, 5);

    printf("\n");
    printf("<@@ STUDENT RECORD @@>\n\n");
    printf("Student No: %s", Student.sNum);
    printf("Student Name: %s", Student.sName);
    printf("Course and Year: %s", Student.sCrYr);
    printf("GWA: %.2f\n", overAllGWA);
    
    		if (overAllGWA <= 2.50) {
		printf("Academic Status: Good Standing");
	} else if (overAllGWA <= 3.00){
		printf("Academic Status: Probation");
	} else if (overAllGWA > 3.00){
		printf("Academic Status: Dismissed");
	} else printf("Invalid GWA");

    return 0;
}

