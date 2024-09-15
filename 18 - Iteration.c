#include <stdio.h>


int main(){
	int Score[5], i;


	for(i=0 ; i<5; i++){
		printf("Score Number %d=> ", i+1);
		scanf("%d",&Score[i]);
	}
	
printf("The entered scores are\n");
for(i=0; i<5; i++){

printf("%d \n", Score[i]);

if (Score[i] <= 50){
 printf("Bagsak ka!\n");
} else {
	printf("Pasado ka!\n");
}

}


return(0);
	
	
	
	
	
}
