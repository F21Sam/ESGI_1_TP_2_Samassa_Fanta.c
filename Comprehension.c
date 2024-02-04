/*1- Expliquer ce que fait son code : 
Elle déclare trois variables entières i, j, et k.
Elle demande à l'utilisateur de saisir une valeur.
Elle utilise l'instruction goto pour sauter à l'étiquette i.
L'étiquette i est suivie de l'instruction scanf qui permet à l'utilisateur de saisir un entier et de l'assigner à la variable k.
Le programme saute ensuite à l'étiquette f1s.
L'étiquette f1s initialise i à zéro.
Ensuite, il y a une boucle marquée par f1c, où i est incrémenté jusqu'à ce qu'il soit supérieur ou égal à k.
À l'intérieur de cette boucle, il y a une autre boucle marquée par f2s où j est initialisé à zéro.
Il y a une autre boucle marquée par f2c, où j est incrémenté jusqu'à ce qu'il soit supérieur ou égal à i.
À chaque itération de la boucle interne, une étoile est imprimée.
Une fois que la boucle interne est terminée, une nouvelle ligne est imprimée.
Le programme retourne ensuite à la boucle externe, où i est incrémenté.
Une fois que i est supérieur ou égal à k, le programme termine son exécution.*/


//2-Produire une version lisible et sans goto de son code.

#include <stdio.h>
#include <stdlib.h>


int main() {
    int i, j, k;

    printf("Entrez une valeur : ");
    scanf("%d", &k);

    for (i = 0; i < k; ++i) {
        for (j = 0; j < i; ++j) {
            printf("*");
        }
        printf("\n");
    }

    exit(EXIT_SUCCESS);
}


/*3-Expliquer ce qui fait en général du goto une mauvaise pratique si non
utilisé avec parcimonie :
le goto est souvent considéré comme une mauvaise pratique en programmation en raison de ses
effets néfastes sur la lisibilité, la maintenabilité et la compréhension du code. 
Son utilisation peut compliquer la structure du code, augmenter le risque d'erreurs et rendre
le code difficile à comprendre pour les autres développeurs.

4- Proposer des cas d’usage où le goto pourrait être utilisé intelligemment:
il existe des cas spécifiques où son utilisation peut être justifiée pour simplifier
le code et améliorer l'efficacité. Ces cas incluent la sortie propre d'une fonction en 
cas d'erreur, l'optimisation dans une boucle ou l'émulation de structures de contrôle manquantes.
*/