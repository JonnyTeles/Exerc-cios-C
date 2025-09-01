#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int exercicio8(void) {
    int v[100];
    for (int i = 0; i < 100; i++) v[i] = i;

    srand((unsigned)time(NULL));

    for (int i = 99; i > 0; i--) {
        int j = rand() % (i + 1);
        int tmp = v[i];
        v[i] = v[j];
        v[j] = tmp;
    }

    for (int i = 0; i < 100; i++) {
        printf("%02d", v[i]);
        if ((i + 1) % 10 == 0) printf("\n");
        else printf(" ");
    }

    return 0;
}
