#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

#define REP 1
#define TAM 3
 
int main(){
	setlocale(LC_ALL,"");
	
	
	int peso1 = 3, peso2 = 3,peso3 = 4;
	char disciplina[REP][200];
	float notas[REP][TAM];
	int i,j;
	float soma=0, media[TAM], pesoT=0;
	
	float soma_Produto =0, soma_Peso=0;
	
	for(i=0;i<REP;i++){
		printf("Digite a %dª Disciplina: ",i+1);
			scanf("%s",&disciplina[i]);
			
		for(j=0;j<TAM;j++){
			printf("Digite a %dª nota: ",j+1);
			scanf("%f",&notas[i][j]);
			
		
			
		}
		
	}
	for(i=0; i < notas[i][j]; i++){
		soma_Produto += notas[i][j] * pesoT;
		
	}	
		
	
	system("cls || clear");
	
	for(i=0;i<REP;i++){
		printf("\nNome da %iª Disciplina: %s \n",i+1,disciplina[i]);
		for(j = 0; j < TAM; j++){
		printf("- %dª nota: %.1f \n",j+1, notas[i][j]);
		}
		
		printf("Media da unidade: %.1f \n", media[i]);
	}
	//peso 1 = 3, peso 2= 3, peso 3 = 4
	
	return 0 ;
	
}
