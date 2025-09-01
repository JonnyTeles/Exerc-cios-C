#include <stdio.h>

int exercicio1() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Voce digitou: %d / 0x%X / 0%o\n", num, num, num);

    return 0;
}
