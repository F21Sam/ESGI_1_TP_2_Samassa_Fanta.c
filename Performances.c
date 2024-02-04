#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Fonction à tester
double fonction(double x) {
    return 0.5 * (200 * sin(x / 400) + 100 * sin(x / 117) + 25 * sin(x / 51) + 10 * sin(x / 12) + 10 * sin((x + 10) / 13));
}

// Algo de recherche dichotomique
double rechercheDichotomique(double debut, double fin, double epsilon) {
    double solution = -1;

    if (fonction(debut) * fonction(fin) < 0) {
        while ((fin - debut) > epsilon) {
            solution = (debut + fin) / 2;

            if (fonction(debut) * fonction(solution) < 0) {
                fin = solution;
            } else {
                debut = solution;
            }
        }
        solution = (debut + fin) / 2;
    }

    return solution;
}

// Algo pour trouver les 19 solutions
void rechercheDichotomiqueMultiple(double debut, double fin, double epsilon, int nombreSolutions) {
    double intervalle = (fin - debut) / (nombreSolutions - 1); 
    double solution;

    for (int i = 0; i < nombreSolutions; ++i) {
        solution = rechercheDichotomique(debut + i * intervalle, debut + (i + 1) * intervalle, epsilon);

        if (solution >= 0) {
            printf("Solution %d : %.6f\n", i + 1, solution);
        } else {
            printf("Pas de solution trouvée dans l'intervalle [%.6f, %.6f]\n", debut + i * intervalle, debut + (i + 1) * intervalle);
        }
    }
}

int main() {
    double epsilon = 1e-6; 
    double debut = 0.0, fin = 10000.0; // Bornes de l'intervalle
    int nombreSolutions = 19; // Nombre de solutions à rechercher

    rechercheDichotomiqueMultiple(debut, fin, epsilon, nombreSolutions);

    exit(EXIT_SUCCESS);
}












