#include <stdio.h>
#include <stdlib.h>

int main() {
    int choix;
    int nombre1, nombre2;
    char operateur;
    
        printf("1 - Calculer\n");
        printf("2 - Quitter\n");
        printf("---\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf(">>> ");
                scanf("%d %c %d", &nombre1, &operateur, &nombre2);
                switch (operateur) {
                    case '+':
                        printf("%d + %d = %d\n", nombre1, nombre2, nombre1 + nombre2);
                        break;
                    case '-':
                        printf("%d - %d = %d\n", nombre1, nombre2, nombre1 - nombre2);
                        break;
                    case '*':
                        printf("%d * %d = %d\n", nombre1, nombre2, nombre1 * nombre2);
                        break;
                    case '/':
                        if (nombre2 != 0) {
                            printf("%d / %d = %.2f\n", nombre1, nombre2, (float)nombre1 / nombre2);
                        } else {
                            printf("Erreur: Division par zéro\n");
                        }
                        break;
                    case '%':
                        if (nombre2 != 0) {
                            printf("%d %% %d = %d\n", nombre1, nombre2, nombre1 % nombre2);
                        } else {
                            printf("Erreur: Modulo avec 0\n");
                        }
                        break;
                    default:
                        printf("Opérateur non reconnu\n");
                }
                break;
            case 2:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide\n");
        }

    exit(EXIT_SUCCESS);
}
