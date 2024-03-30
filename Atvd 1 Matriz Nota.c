#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define NT 3
#define AL 2

int main(){
	setlocale(LC_ALL,"");
	
	char alunos[AL][NT][200];
	float notas[AL][NT];
	int i,j;		
	
	for(i=0;i<AL;i++){
		printf("Digite o nome do %iª Aluno: ",i+1);
			scanf("%s",&alunos[i]);
			
	for(j=0;j<NT;j++){
		printf("Digite a %iª Nota do %iª Aluno: ",j+1,i+1);
			scanf("%f",&notas[i][j]);
			
	}
	system("cls || clear");
	}
	
	
	for(i=0;i<AL;i++){
		printf("\n\nNome do %iª Aluno: %s",i+1,alunos[i]);
		
		printf("\nNotas: ");
		
		for(j=0;j<NT;j++){
			printf("\n %iª Nota: %.1f",j+1,notas[i][j]);
			
		}
	}
	return 0;
}
