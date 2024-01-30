#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int k = 2015201261;
    unsigned int p = 4285404239;
    
    unsigned long long secret_key;
    for (secret_key = 1; secret_key < p; secret_key++) {
       
        if ((secret_key * k) % p == 1) {
            printf("La clé secrète d'Oscar est : %llu\n", secret_key);
            break; // Sortie de la boucle une fois que la clé est trouvée
        }
    }

   exit(EXIT_SUCCESS);
}
