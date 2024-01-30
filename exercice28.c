#include <stdio.h>
#include <stdlib.h>

int main() {
   unsigned long nombre, copie, bit;
    unsigned long puissance_deux = 1; 

    printf("Entrez un nombre : ");
    scanf("%lu", &nombre);

    
    printf("%lu = (", nombre);

    while (puissance_deux <= nombre / 2) {
        puissance_deux *= 2;
    }

    copie = nombre;
    while (puissance_deux > 0) {
        bit = copie / puissance_deux;
        printf("%d", bit);
        copie -= bit * puissance_deux;
        puissance_deux /= 2;
    }
    printf(")_2\n");

    exit(EXIT_SUCCESS);
}
