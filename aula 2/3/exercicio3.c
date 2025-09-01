#include <stdio.h>

int exercicio3() {
    float num1, num2, resultado;
    char op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite a operacao (+ - * /): ");
    scanf(" %c", &op);

    switch(op) {
        case '+': 
            resultado = num1 + num2; 
            printf("Resultado: %.2f\n", resultado); 
            break;
        case '-': 
            resultado = num1 - num2; 
            printf("Resultado: %.2f\n", resultado); 
            break;
        case 'x': 
            resultado = num1 * num2; 
            printf("Resultado: %.2f\n", resultado); 
            break;
        case '/': 
            if(num2 == 0) 
                printf("Erro: divisao por zero!\n");
            else {
                resultado = num1 / num2; 
                printf("Resultado: %.2f\n", resultado); 
            }
            break;
        default: 
            printf("Operacao invalida!\n");
    }

    return 0;
}
