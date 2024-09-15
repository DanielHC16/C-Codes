#include <stdio.h>
#include <string.h>

struct Person {
    char Name[40];
    char Gender[10];
    int Age;
    int Salary;
};

int main() {
    int numPerson;

    printf("How many people do you want? --> ");
    scanf("%d", &numPerson);
    getchar(); 

    struct Person P1[numPerson];

    printf("\n\nInput Person Information:\n\n");

    for (int i = 0; i < numPerson; i++) {
        printf("Input Person #%d Name\n", i + 1);
        fgets(P1[i].Name, sizeof(P1[i].Name), stdin);

        printf("Input Person #%d Gender\n", i + 1);
        fgets(P1[i].Gender, sizeof(P1[i].Gender), stdin);
        
        printf("Input Person #%d Age\n", i + 1);
        scanf("%d", &P1[i].Age);
        getchar();
        
        printf("Input Person #%d Salary\n", i + 1);
        scanf("%d", &P1[i].Salary);
        getchar();
    }
    
    printf("\nConfirmed Person Information:\n\n");
    for (int i = 0; i < numPerson; i++) {
        struct Person *ptr = &P1[i];
        printf("Person #%d Name: %s", i + 1, ptr->Name);
        printf("Person #%d Age: %d", i + 1, ptr->Age);
        printf("\nPerson #%d Gender: %s", i + 1, ptr->Gender);
        printf("Person #%d Salary: %d", i + 1, ptr->Salary);
        printf("\n");
    }

    return 0;
}


