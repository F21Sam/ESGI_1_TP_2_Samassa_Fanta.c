#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;

    printf("Entrez deux nombres : ");
    scanf("%d %d", &a, &b);

    // Vérifier si les nombres sont égaux
    if (a == b) {
        printf("%d et %d sont égaux\n", a, b);
    } else {
        // Trouver le plus petit nombre et l'afficher
       if (a < b) {
            printf("Entre %d et %d, le plus petit est %d\n", a, b, a);
        } else {
            printf("Entre %d et %d, le plus petit est %d\n", a, b, b);
        }
    }
    exit(EXIT_SUCCESS);
}