#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define DP 2
#define NT 2

int main(){
	setlocale(LC_ALL,"");
	
	int i,j;
	char disciplinas[DP][NT][200];
	float notas[DP][NT];
	float media[NT], soma=0;
	
	for(i=0;i<DP;i++){
		printf("Digite o nome da %i� Disciplina: ",i+1);
			scanf("%s",&disciplinas[i]);
			
		for(j=0;j<NT;j++){
			printf("Digite a %i� Nota: ",j+1);
				scanf("%f",&notas[i][j]);
				soma+= notas[i][j];
		}
		system("cls || clear");
		media[i]= soma/j;
		soma=0;
		
	}
	
	for(i=0;i<DP;i++){
		printf("\n\nNome da %i� Disciplina : %s",i+1,disciplinas[i]);
		
		printf("\nNotas: ");
		for(j=0;j<NT;j++){
			printf("\n %i� Nota: %.1f",j+1,notas[i][j]);	
		}
		printf("\nM�dia : %.1f",media[i]);
		
	}
	
	return 0;
}
