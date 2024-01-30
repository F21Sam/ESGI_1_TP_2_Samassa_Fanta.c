#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    const int max = 1001;
    int nombre_secret = rand() % max;
    int tentative, essais = 0;

    printf("Nous avons choisi un nombre entre 0 et 1000\n");

    do {
        printf("A quel nombre pensez-vous ? ");
        scanf("%d", &tentative);
        essais++;

        if (tentative < nombre_secret) {
            printf("Trop petit.\n");
        } else if (tentative > nombre_secret) {
            printf("Trop grand.\n");
        } else {
            printf("Bien joué, le nombre était en effet %d\n", nombre_secret);
            printf("Nombre d'essais : %d\n", essais);
        }
    } while (tentative != nombre_secret);

    exit(EXIT_SUCCESS);
}
