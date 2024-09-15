#include <stdio.h>
#include <string.h>

struct Class{
	char className[50];
	char classSkill[50];
	int classHP;
	int classDMG;
};

struct Weapon{
	char weaponName[50];
	char weaponBuff[50];
	int weaponDMG;
};

int main(){
	
	/*
	struct Class player1[2];
		strcpy(player1[0].className, "Warrior");
		strcpy(player1[0].classSkill, "Extra DMG");
		player1[0].classHP = 100;
		player1[0].classDMG = 50;
		
		strcpy(player1[1].className, "Rogue");
		strcpy(player1[1].classSkill, "Bonus Stealth");
		player1[1].classHP = 80;
		player1[1].classDMG = 120;
		
		struct Class *plyrPtr1;
		plyrPtr1 = &player1[0];
		printf("Class: %s\n", plyrPtr1->className);
		printf("Class Skill: %s\n", plyrPtr1->classSkill);
		printf("Health Points: %d\n", plyrPtr1->classHP);
		printf("Attack Damage: %d\n", plyrPtr1->classDMG);

		printf("---------------------\n");
		
		struct Class *plyrPtr2;
		plyrPtr2 = &player1[1];
		printf("Class: %s\n", plyrPtr2->className);
		printf("Class Skill: %s\n", plyrPtr2->classSkill);
		printf("Health Points: %d\n", plyrPtr2->classHP);
		printf("Attack Damage: %d\n", plyrPtr2->classDMG);
		*/
		
		int numClasses; //Prompts how many classes to be made
		printf("Enter Amount of Classes to be Created: ");
		scanf("%d", &numClasses);
		getchar(); //buffer
		
		struct Class player1[numClasses]; //Creates player 1 array from struct Class 
		struct Class *plyrPtr; // Uses pointer to address of player 1 
		int classIndex; // counts how many classes to be made 
		
		
		for (plyrPtr = player1, classIndex = 0; plyrPtr < player1 + numClasses; plyrPtr++, classIndex++){ //Condition ensures the loop iterates through elements of player1 for a total of numClasses times
		
			printf("Input Class Description\n\n");
			
			printf("Enter Class #%d Name:\n", classIndex + 1);
			fgets(plyrPtr->className, sizeof(plyrPtr->className), stdin);
			
			printf("Enter Class Skill:\n");
			fgets(plyrPtr->classSkill, sizeof(plyrPtr->classSkill), stdin);
			
			
			printf("Enter HP Amount:\n");
			scanf("%d", &plyrPtr->classHP);ds4
			getchar(); // buffer
			
			printf("Enter ATK Dmg Amount:\n");
			scanf("%d", &plyrPtr->classDMG);
			getchar(); // buffer
		}
		
		printf("\nList of Classes: \n");
		
		for (plyrPtr = player1, classIndex = 1; plyrPtr < player1 + numClasses; plyrPtr++, classIndex++){
			printf("\nClass #%d: %s", classIndex, plyrPtr->className);
			printf("Ability: %s", plyrPtr->classSkill);
			printf("HP: %d\n", plyrPtr->classHP);
			printf("Atk DMG: %d", plyrPtr->classDMG);
		}
	
	
	
}
