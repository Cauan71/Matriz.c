#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#define SIZE 3
int main(){
	setlocale(LC_ALL,"");
	
	char nomes[2][200];
	float notas[2][3];
	int i,j;
	int contador=0, soma=0,media=0;
	
	
	for(i=0;i<2;i++){
		printf("Digite o nome do %i aluno: ",i+1);
			scanf("%s",&nomes[i]);
			
			for(j=0;j<3;j++){
				printf("Digiet a %iº nota: ",j+1);
					scanf("%f",&notas[i][j]);
					contador++;
							
			}
			printf("\n");
			
	}	
	soma=soma+notas[i][j];
	media = soma/contador;
	
	

	printf("\n======= R E S U L T A D O ==========");
	for(i=0;i<2;i++){
		printf("\n%iº aluno: %s \n\n",i+1,nomes[i]);
		
		for(j=0;j<3;j++){
			printf("nota %i: %.1f \n",j+1,notas[i][j]);
		
			
		}
	}

	return 0;
	
}

