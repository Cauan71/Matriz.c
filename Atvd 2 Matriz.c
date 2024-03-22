#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#define ALN 4
#define PTS 3

int main(){
	setlocale(LC_ALL,"");
	
	char nomes[4][200]; //[4] quantidade de pessoas para serem cadastradas
	float notas[4][3]; //[4] "" , [3] quantidade de notas
	int i,j;
	float media[4],soma=0;
	
	
	for(i=0;i<ALN;i++){
		printf("Digite o nome do %i aluno: ",i+1);
			scanf("%s",&nomes[i]);
			
			for(j=0;j<PTS;j++){
				printf("Digiet a %iº nota: ",j+1);
					scanf("%f",&notas[i][j]);
					
				soma += notas[i][j];					
			}
			
			media[i] = soma/j;
			soma = 0; // tem que ter essa variavel pois, após terminar o ciclo para não acumular a soma de todas as notas
			
			printf("\n");
	}	

	printf("\n======= R E S U L T A D O ==========");
	for(i=0;i<ALN;i++){
		printf("\n%iº aluno: %s \n\n",i+1,nomes[i]);
		
		for(j=0;j<PTS;j++){
			printf("nota %i: %.1f \n",j+1,notas[i][j]);
		}
		printf("Média : %.1f",media[i]);
	}
		
	return 0;
	
}

