#include <stdio.h>
#include <string.h>

/*struct student{
	char name[50];
	int roll;
};

void Display(struct student stu){
	printf("\nName: %s", stu.name);
	printf("\nRoll: %d", stu.roll);
}
**/

struct book{
	char name[50];
	int id;	
};

/*
struct weaponStat{
	char name[50];
	int atkDmg;
	float critChance;
};

void showStat(struct weaponStat wps){
	printf("\nWeapon Name: %s", wps.name);
	printf("\nWeapon Damage: %d", wps.atkDmg);
	printf("\nWeapon Crit Chance: %0.2f ", wps.critChance);
}
**/

int main(){
	

	struct book B1;
	printf("Input Book Name --> ");
	fgets(B1.name, sizeof(B1.name), stdin);
	printf("Input Book ID --> ");
	scanf("%d", &B1.id);
	
	/*
	struct student s1;
	printf("Input Student Name:");
	fgets(s1.name, sizeof(s1.name), stdin);
	printf("Input Roll Number:");
	scanf("%d", &s1.roll);
	getchar();
	
	struct weaponStat Wep1;
	printf("Input Weapon Name: ");
	fgets(Wep1.name, sizeof(Wep1.name), stdin);
	printf("Input Weapon Damage: ");
	scanf("%d", &Wep1.atkDmg);
	printf("Input Crit Chance");
	scanf("%f", &Wep1.critChance);
	
	Display(s1);
	showStat(Wep1);

**/
}
