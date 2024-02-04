#include <stdio.h>
#include <stdlib.h>

int main() {
    int nombre, i;

    printf("Entrez un entier : ");
    scanf("%d", &nombre);

    printf("Liste des diviseurs de %d :\n", nombre);
    for (i = 1; i <= nombre; i++) {
        if (nombre % i == 0) {
            printf("%d", i);
            if (i != nombre) {
                printf(", "); 
            }
        }
    }
    printf("\n");
exit(EXIT_SUCCESS);
}
