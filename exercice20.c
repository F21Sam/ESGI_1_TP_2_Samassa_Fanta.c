#include <stdio.h>
#include <stdlib.h>

int main() {
    int vitesse;
    int limitation;
    int diff;
    
    printf("Quelle est la vitesse? ");
    scanf("%d", &vitesse);
    printf("Quelle est la limitation? ");
    scanf("%d", &limitation);
    
    diff = vitesse - limitation;

    if (diff <= 0) {
        printf("Vous ne depassez pas la limite de vitesse autorisee.\n");
    } else if (diff < 20) {
        if (limitation > 50) {
            printf("Amende forfaitaire de 68 euros ; Retrait d 1 point sur permis de conduire.\n");
        } else {
            printf("Amende forfaitaire de 135 euros ; Retrait d 1 point sur permis de conduire.\n");
        }
    } else if (diff < 30) {
        printf("Amende forfaitaire de 135 euros ; Retrait de 2 points sur permis de conduire.\n");
    } else if (diff < 40) {
        printf("Amende forfaitaire de 135 euros ; Retrait de 3 points sur permis de conduire.\n");
    } else if (diff < 50) {
        printf("Amende forfaitaire de 135 euros ; Retrait de 4 points sur permis de conduire.\n");
    } else {
        printf("Amende de 1 500 euros ; Retrait de 6 points sur permis de conduire.\n");
    }
    
    exit(EXIT_SUCCESS);
}
