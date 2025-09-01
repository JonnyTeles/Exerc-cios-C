#include <stdio.h>
#include <ctype.h>

int exercicio4() {
    char c;

    printf("Digite um caractere: ");
    scanf(" %c", &c);

    if(isdigit(c)) {
        printf("Numero\n");
    } else if(isalpha(c)) {
        char lower = tolower(c);
        if(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
            printf("Vogal\n");
        else
            printf("Consoante\n");
    } else {
        printf("Outro caractere\n");
    }

    return 0;
}
