#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define BND 2
#define IT 2

int main() {
    setlocale(LC_ALL, "");

    int i, j;
    char bandas[BND][200];
    char integrantes[BND][IT][200]; // Matriz de integrantes

    for (i = 0; i < BND; i++) {
        printf("Digite o nome da %dª Banda: ", i + 1);
        scanf("%s", bandas[i]);

        for (j = 0; j < IT; j++) {
            printf("Digite o nome do %dº integrante da %dª banda: ", j + 1, i + 1);
            scanf("%s", integrantes[i][j]);
        }
        system("cls || clear");
    }

    for (i = 0; i < BND; i++) {
        printf("\n%dª Banda: %s", i + 1, bandas[i]);

        printf("\nIntegrantes:");
        for (j = 0; j < IT; j++) {
            printf("\n  %dº Integrante: %s", j + 1, integrantes[i][j]);
        }
        printf("\n");
    }

    return 0;
}

