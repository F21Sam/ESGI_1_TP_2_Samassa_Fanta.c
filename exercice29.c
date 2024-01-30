#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d;
    
    printf("Entrez deux entiers : \n");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        c = a / b;
        d = a % b;

        printf("%d = %d * %d + %d\n", a, c, b, d);

        a = b;
        b = d;
    }


    int pgcd = a;

    printf("pgcd(%d, %d) = %d\n", a, b, pgcd);

   exit(EXIT_SUCCESS);
}