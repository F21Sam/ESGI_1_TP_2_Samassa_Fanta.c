#include <stdio.h>
#include <stdlib.h>

// Fonction pour lire une valeur dans une base donnée
int lireValeurDansBase(int base) {
    char codage[100];
    scanf("%s", codage);

    int valeur = 0;
    for (int i = 0; codage[i] != '\0'; i++) {
        valeur = valeur * base + (codage[i] - '0');
    }

    return valeur;
}

// Fonction pour écrire une valeur dans une base donnée
void ecrireValeurDansBase(int valeur, int base) {
    int puissance = 1;
    int resultat = 0;

    // Convertir la valeur dans la base spécifiée
    while (valeur > 0) {
        int chiffre = valeur % base;
        resultat += chiffre * puissance;
        valeur /= base;
        puissance *= 10;
    }

    printf("La valeur dans la base %d : %d\n", base, resultat);
}

int main() {
    int baseExpression, baseAttendue;
    int valeur;

    printf("Entrez la base d'expression : ");
    scanf("%d", &baseExpression);
    printf("Entrez la base attendue : ");
    scanf("%d", &baseAttendue);
    printf("Entrez la valeur en base %d : ", baseExpression);

    valeur = lireValeurDansBase(baseExpression);

    ecrireValeurDansBase(valeur, baseAttendue);



    exit(EXIT_SUCCESS);
}

