#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    float a, b, c;
    float delta, x0, x1, x2;

    printf("Entrez les coefficients du polynome (a, b, c) : ");
    scanf("%f %f %f", &a, &b, &c);
    delta = b * b - 4 * a * c;
    
    if (delta < 0) {
        printf("Pas de solution reelle.\n");
    } else if (delta == 0) {
        
        x0 = -b / (2 * a);
        printf("Une solution reelle : x = %.2f\n", x0);
    } else {
        
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("Deux solutions reelles : x1 = %.2f et x2 = %.2f\n", x1, x2);
    }

    
    if (b != 0) {
        x0 = -c / b;
        printf("Solution speciale : x0 = %.2f\n", x0);
    } else {
        printf("Pas de solution speciale.\n");
    }

   exit(EXIT_SUCCESS);
}

