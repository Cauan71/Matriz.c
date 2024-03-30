#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define NT 3
#define AL 4
int main(){
	setlocale(LC_ALL,"");
	
	char alunos[AL][NT][200];
	float notas[AL][NT];
	float media[NT], soma=0;
	int i,j;
	
	
	for(i=0;i<AL;i++){
		printf("Digite o nome do %iª Aluno: ",i+1);
			scanf("%s",&alunos[i]);
			
	for(j=0;j<NT;j++){
		printf("Digite a %iª Nota: ",j+1);
			scanf("%f",&notas[i][j]);
			
			soma+= notas[i][j];
		
	}
	system("clear || cls ");
	media[i]= soma/j;
	soma=0;
	}

	
	for(i=0;i<AL;i++){
		printf("\n\nNome do %iª Aluno: %s",i+1,alunos[i]);
		
		printf("\nNotas: ");
		for(j=0;j<NT;j++){
			printf("\n %iª Nota: %.1f",j+1,notas[i][j]);
			
		}
		printf("\nMédia : %.1f",media[i]);
		
	}
	
	return 0 ;
}
