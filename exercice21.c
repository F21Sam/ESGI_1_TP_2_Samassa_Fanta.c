#include <stdio.h>
#include <stdlib.h>

int main() {
    float argent;
    float prix;
    float remise;

    printf("Quel est votre argent? ");
    scanf("%f", &argent);
    
    printf("Quel est le prix de l'article? ");
    scanf("%f", &prix);
    
    printf("Quel est la remise en pourcentage? ");
    scanf("%f", &remise);
    
    float prix_en_solde;
    prix_en_solde = prix - (prix * remise / 100);
    
    printf("L'article en solde vaut : %.2f\n", prix_en_solde);
    
    if(prix_en_solde <= argent) {
        printf("J'achete !\n");
    } else {
        printf("Tu es trop pauvre!\n");
    }
    
    exit(EXIT_SUCCESS);
}
