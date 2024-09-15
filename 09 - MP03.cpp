//Write a program to read in a collection of 5 exam scores ranging from 1 to 100.
//Your program should count and print the number of outstanding scores. 90-100.
//The number of satisfactory scores 60-89, and the number of unsatisfactory scores. 1-59.
//The program should compute the average of the exam scores, display it, and determine
//and display the rating if  "PASSED" or "FAILED" based on 60% passing score.

#include <stdio.h>



int main()
 {
    int ExamScore[5], OutScore = 0, SatScore = 0, UnsatScore = 0;
    float totalScore;

    printf("Enter 5 exam scores\n");

    for (int i = 0; i < 5; i++) {
        printf("Exam Score # %d => ", i + 1);
        scanf("%d", &ExamScore[i]);
    }

   
    for (int i = 0; i < 5; i++) {
        if (ExamScore[i] >= 90 && ExamScore[i] <= 100) {
            OutScore++;
        } else if (ExamScore[i] >= 60 && ExamScore[i] <= 89){
        	SatScore++;
		} else if (ExamScore[i] >= 1 && ExamScore[i] <= 59){
			UnsatScore++;
		}
        	
    }

    printf("The Number of Outstanding Exam Scores: %d\n", OutScore);
	printf("The Number of Satisfactory Exam Scores: %d\n", SatScore);
	printf("The Number of Unsatisfcatory Exam Scores: %d\n", UnsatScore);
	
	totalScore = (ExamScore[0] + ExamScore[1] + ExamScore[2] + ExamScore[3] + ExamScore[4])/5;
	
	printf("The Average of the grades is: %.2f\n", totalScore);
	
	if (totalScore >= 60){
		printf("Results: \"PASSED\"");
	}else if (totalScore < 60){
	printf("Results: \"FAILED\"");
	}
   
	return (0);
}
