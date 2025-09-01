#include <stdio.h>

int exercicio2() {
    char nome[50];
    int idade;
    float altura;
    char gostaCafe;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Voce gosta de cafe? (s/n): ");
    scanf(" %c", &gostaCafe);

    if(gostaCafe == 's' || gostaCafe == 'S')
        printf("%s tem %d ano(s), %.2fm e gosta de cafe.\n", nome, idade, altura);
    else
        printf("%s tem %d ano(s), %.2fm e nao gosta de cafe.\n", nome, idade, altura);

    return 0;
}
