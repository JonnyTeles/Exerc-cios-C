// https://github.com/JonnyTeles/Exercicios-C

#include <stdio.h>
#include <stdlib.h>

#include "aula 1/1/exercicio1.c"
#include "aula 1/2/exercicio2.c"
#include "aula 2/3/exercicio3.c"
#include "aula 2/4/exercicio4.c"
#include "aula 3/5/exercicio5.c"
#include "aula 3/6/exercicio6.c"
#include "aula 4/7/exercicio7.c"
#include "aula 4/8/exercicio8.c"
#include "aula 5/9/exercicio9.c"
#include "aula 5/10/exercicio10.c"

int main()
{
    int opcao;

    while (1)
    {
        printf("\n===== MENU DE EXERCICIOS =====\n");
        printf("1 - Exercicio 1\n");
        printf("2 - Exercicio 2\n");
        printf("3 - Exercicio 3\n");
        printf("4 - Exercicio 4\n");
        printf("5 - Exercicio 5\n");
        printf("6 - Exercicio 6\n");
        printf("7 - Exercicio 7\n");
        printf("8 - Exercicio 8\n");
        printf("9 - Exercicio 9\n");
        printf("10 - Exercicio 10\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao)
        {
        case 1:
            exercicio1();
            break;
        case 2:
            exercicio2();
            break;
        case 3:
            exercicio3();
            break;
        case 4:
            exercicio4();
            break;
        case 5:
            exercicio5();
            break;
        case 6:
            exercicio6();
            break;
        case 7:
            exercicio7();
            break;
        case 8:
            exercicio8();
            break;
        case 9:
            exercicio9();
            break;
        case 10:
            exercicio10();
            break;
        case 0:
            printf("Saindo...\n");
            return 0;
        default:
            printf("Opcao invalida!\n");
        }
    }
    return 0;
}