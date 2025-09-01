#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int exercicio6() {
    int n;

    printf("Digite um numero (maior ou igual a 2): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Numero invalido!\n");
    } else {
        printf("Primos de 1 ate %d: ", n);
        for (int i = 2; i <= n; i++) {
            if (ehPrimo(i)) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}
