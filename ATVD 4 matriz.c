#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#define DP 3
#define NT 2
int main(){
	setlocale(LC_ALL,"");
	
	
	char disciplinas[DP][200];
	float notas[DP][NT];
	int i,j;
	float media[DP],soma=0;
	
	
	for(i=0;i<DP;i++){
		printf("Digite o nome da %i� Disciplina: ",i+1);
			scanf("%s",&disciplinas[i]);
			
		for(j=0;j<NT;j++){
			printf("Digite a %i� nota: ",j+1);
				scanf("%f",&notas[i][j]);
				
					soma+=notas[i][j];
	}
	system("cls || clear");
		media[i] = soma/j;
		soma=0;
	}

	for(i=0;i<DP;i++){
		printf("\n%i� Disciplina: %s\n",i+1,disciplinas[i]);
		
	
	for(j=0;j<NT;j++){
		printf("\n%i� Nota: %.1f",j+1,notas[i][j]);
		
	
		
	}
	
	printf("\nM�dia: %.1f",media[i]);
	
	if(media[i]>7)
	{
		printf("\nAprovado\n");

	}else if(media[i]<5){
		printf("\nReprovado\n");
	}else{
		printf("\nRecupera��o!\n");
		
	}

		
	}

	

	
	return 0 ;
	
}
