#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define MT 2
#define NT 2

int main(){
	setlocale(LC_ALL,"");
	
	char materia[MT][NT][200];
	float notas[MT][NT];
	int i,j;
	float soma=0, media[NT];
	
	for( i = 0 ; i < MT ; i++ ){
		printf("Digite a %iª Matéria : ", i + 1);
			scanf("%s",&materia[i]);
		
		for( j = 0 ; j < NT ; j++){
			printf("Digite a %iª Nota: ", j + 1);
				scanf("%f",&notas[i][j]);
				soma+= notas[i][j];
			
		}
		system("cls || clear");
		media[i] = soma/j;
		soma=0;
	}	
	
	for(i = 0 ; i < MT;i++){
		printf("\n\n%iª Matéria: %s",i+1,materia[i]);
		
		printf("\nNotas:");
		for( j = 0 ; j < NT ; j++){
			printf("\n %iª Nota: %.1f",j+1,notas[i][j]);
			
		}
		printf("\n Média: %.1f",media[i]);


		if(media[i] >=7){
			printf("\nAprovado!! ");
			
		}else if(media[i] <5){
			printf("\nReprovado!!");
		}else{
			printf("\nRecuperação!!");
		}
	}
	
	return 0;
}
