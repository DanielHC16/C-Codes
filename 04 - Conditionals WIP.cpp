#include <stdio.h>

int main(){
	
	int birthDay, birthMonth, birthYear;
	
	int currentYear;
	int currentMonth;
	int currentDay;
	
	printf("Input Current Year --> ");
	scanf("%d", &currentYear);
	printf("Input Current Month --> ");
	scanf("%d", &currentMonth);
	printf("Input Current Date --> ");
	scanf("%d", &currentDay);

	printf("@@-----------------@@\n");
	
	printf("Input Birth Year --> ");
	scanf("%d", &birthYear);
	printf("Input Birth Month --> ");
	scanf("%d", &birthMonth);
	printf("Input Birth Date --> ");
	scanf("%d", &birthDay);
	
	printf("@@-----------------@@\n");
	
	int age = currentYear - birthYear;
	
	int yearsToMonths = age * 12;
	
	int monthSpecific = (currentMonth - birthMonth) - ((currentDay < birthDay) ? 1 : 0);	//Use of ternary operator ? to determine if Twhether the birth day has occurred in the current month. 
																							//If the birth day has not occurred yet, it subtracts 1 from the month difference to adjust for the incomplete month.
	
	int monthsOld = yearsToMonths + monthSpecific;
	



	
	printf("Your age is: %d years old\n", age);
	//printf("You are %d days old\n", daysOld);
	printf("You are %d months old\n", monthsOld);
	
	return 0;
	
}
