#include <stdio.h>
#include <string.h>
#include <ctype.h> // for toupper

struct Employee{
	char empName[50];
	char empPosition[50];
	int salary;
};

int otResp, overTime, otBonus;
int numEmp; // Number of Employees to be made 
int empCountIndex;

int main(){
	
	/*
	struct Employee E1;
	printf("Input Employee Name -> ");
	fgets(E1.empName, sizeof(E1.empName), stdin);
	printf("Input Employee Position -> ");
	fgets(E1.empPosition, sizeof(E1.empPosition), stdin);
	printf("Input Salary -> ");
	scanf("%d", &E1.salary);
	
	struct Employee *ePtr1;
	ePtr1 = &E1;
	
	printf("\n@-----------------------------@\n");
	
	printf(" \n Confirmed Employee Name: %s ", ePtr1->empName);
	printf("Confirmed Employee Position: %s ", ePtr1->empPosition);
	printf("Confirmed Employee Salary: %d ", ePtr1->salary);
	
	
	
	printf("\n Input Overtime? [Y|N] -> ");
	scanf(" %c", &otResp); // Remember %c for single char, remember the space
	
	otResp = toupper(otResp);
	
	if (otResp == 'Y'){
		printf(" Input Overtime [HRS]: ");
		scanf("%d", &overTime);
	} else {
		printf("Thank you, good day!");
	}
	
	
	otBonus = overTime * (ePtr1->salary / 10);
	
	printf(" Bonus Salary: %d", otBonus);
	printf("\n Total Salary: %d", otBonus + ePtr1->salary);
	*/
	
	
	printf("Input Employee Count: ");
	scanf("%d", &numEmp);
	getchar();
	
	struct Employee emp[numEmp];
	struct Employee *empPtr;
	
	for(empPtr = emp, empCountIndex = 0; empPtr < emp + numEmp; empPtr++, empCountIndex++){
		printf("\nEmployee Salary Information: #%d \n", empCountIndex + 1);
		
		printf("\nEnter Employee Name -> ");
		fgets(empPtr->empName, sizeof(empPtr->empName), stdin);
		printf("Enter Employee Position -> ");
		fgets(empPtr->empPosition, sizeof(empPtr->empPosition), stdin);
		printf("Enter Employee Salary -> ");
		scanf("%d", &empPtr->salary);
		getchar();
	}
	
	
	for(empPtr = emp, empCountIndex = 0; empPtr < emp + numEmp; empPtr++, empCountIndex++){
		printf("\nEmployee ID: 2023-%d\n", empCountIndex + 1);
		printf("Confirmed Employee Name: %s", empPtr->empName);
		printf("Confirmed Employee Posotion: %s", empPtr->empPosition);
		printf("Confirmed Employee Salary: %d\n", empPtr->salary);
		
	}
	
}
