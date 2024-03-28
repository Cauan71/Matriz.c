#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define DP 1
#define NT 3

int main() {
    setlocale(LC_ALL, "");

    char materia[DP][200];
    float notas[DP][NT];
    float media[DP];
    int i, j;
    int peso1 = 3, peso2 = 3, peso3 = 4;

    for (i = 0; i < DP; i++) {
        printf("Digite o nome da %dª disciplina: ", i + 1);
        scanf("%s", materia[i]);

        float soma = 0;
        for (j = 0; j < NT; j++) {
            printf("Digite a %dª Nota: ", j + 1);
            scanf("%f", &notas[i][j]);

            // Calcula a soma ponderada das notas
            if (j == 0)
                soma += notas[i][j] * peso1;
            else if (j == 1)
                soma += notas[i][j] * peso2;
            else if (j == 2)
                soma += notas[i][j] * peso3;
        }

        // Calcula a média ponderada
        media[i] = soma / (peso1 + peso2 + peso3);
        system("cls || clear");
    }

    // Exibe os resultados
    for (i = 0; i < DP; i++) {
        printf("\n%dª Disciplina: %s", i + 1, materia[i]);

        printf("\nNotas:");
        for (j = 0; j < NT; j++) {
            printf("\n  %dª Nota: %.1f", j + 1, notas[i][j]);
        }

        printf("\nMédia Ponderada: %.1f", media[i]);
    }

    return 0;
}

