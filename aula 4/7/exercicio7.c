#include <stdio.h>

int exercicio7() {
    int numeros[10];
    int soma = 0;
    int valido = 1;

    printf("Digite 10 numeros unicos:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
        
        for (int j = 0; j < i; j++) {
            if (numeros[i] == numeros[j]) {
                printf("Numero repetido! Programa encerrado.\n");
                valido = 0;
                break;
            }
        }

        if (!valido) break;
        soma += numeros[i];
    }

    if (valido) {
        printf("Soma dos numeros = %d\n", soma);
    }

    return 0;
}
