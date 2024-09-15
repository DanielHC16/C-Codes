#include <stdio.h>
#include <string.h>

struct playerClass{
	char Class[30];
	char Race[30];
	char Ability[60];
	int attackDMG;
	int health;
	int stamina;
};

struct Weapon{
	char weaponName[50];
	char Ability[50];
	char elementalEffect[50];
	int DMG;
	int critChance;
	int speed;
};

int main(){
	
	
	struct playerClass newGame[3];
	
		strcpy(newGame[0].Class, "Warrior");
		strcpy(newGame[0].Race, "Eldian");
		strcpy(newGame[0].Ability, "Attack Titan");
		newGame[0].attackDMG = 90;
		newGame[0].health = 100;
		newGame[0].stamina = 70;
		
		strcpy(newGame[1].Class, "Assassin");
		strcpy(newGame[1].Race, "Human");
		strcpy(newGame[1].Ability, "Unseen Blade");
		newGame[1].attackDMG = 120;
		newGame[1].health = 70;
		newGame[1].stamina = 75;
		
		strcpy(newGame[2].Class, "Bruiser");
		strcpy(newGame[2].Race, "Saiyan");
		strcpy(newGame[2].Ability, "Legendary Super Saiyan");
		newGame[2].attackDMG = 100;
		newGame[2].health = 90;
		newGame[2].stamina = 80;
		
		printf("Select Your Character: \n\n");
		
		for (int i = 0; i<3; i++){
			printf("Character #%d \n\n", i+1);
			printf("Class: %s\n", newGame[i].Class);
			printf("Race: %s\n", newGame[i].Race);
			printf("Ability: %s\n", newGame[i].Ability);
			printf("AtkDMG: %d\n", newGame[i].attackDMG);
			printf("Health: %d\n", newGame[i].health);
			printf("Stamina: %d\n\n", newGame[i].stamina);
			
		}
		
	struct Weapon wp[3];
		
		strcpy(wp[0].weaponName, "Balrog's Demise");
		strcpy(wp[0].Ability, "+20 AOE DMG, +10 Crit Chance, -2 Speed");
		strcpy(wp[0].elementalEffect, "+20 Heat");
		wp[0].DMG = 100;
		wp[0].speed = 40;
		wp[0].critChance = 20;
		
		strcpy(wp[1].weaponName, "Kalrogg's Daggers");
		strcpy(wp[1].Ability, "+20 Speed, +10 Lethality, +3 Stealth");
		strcpy(wp[1].elementalEffect, "+20 Poison");
		wp[1].DMG = 80;
		wp[1].speed = 70;
		wp[1].critChance = 40;
		
		strcpy(wp[2].weaponName, "Fists of Steel");
		strcpy(wp[2].Ability, "+20 Crit Chance, +20 Puncture DMG, -2 Intellect");
		strcpy(wp[2].elementalEffect, "+10 Corrosion");
		wp[2].DMG = 110;
		wp[2].speed = 90;
		wp[2].critChance = 10;
		
		printf("Select your weapon: ");
		
		for (int j = 0; j<3; j++){
			printf("Weapon #%d\n\n", j+1);
			printf("Weapon Name: %s\n", wp[j].weaponName);
			printf("Weapon Ability: %s\n", wp[j].Ability);
			printf("Weapon Element: %s\n", wp[j].elementalEffect);
			printf("Damage: %d\n", wp[j].DMG);
			printf("Speed: %d\n", wp[j].speed);
			printf("Crit Chance: %d\n\n", wp[j].critChance);
		}	
		
		int selectChar;
		printf("Press A Number to Select Your Class (1-3)\n");
		scanf("%d", &selectChar);
		
		switch (selectChar) {
		case 1:
			printf("Chosen Class: %s", newGame[0].Class);
			break;
		case 2:
			printf("Chosen Class: %s", newGame[1].Class);
			break;
		case 3:
			printf("Chosen Class: %s", newGame[2].Class);
			break;
		default:
			printf("Invalid Choice");
			break;
		}
		
	
	return 0;
	

}
