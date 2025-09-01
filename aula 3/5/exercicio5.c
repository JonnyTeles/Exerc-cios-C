#include <stdio.h>

int exercicio5() {
    int n;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Numero invalido!\n");
    } else {
        for (int i = n; i > 0; i--) {
            printf("%d\n", i);   
        }
    }

    return 0;
}
