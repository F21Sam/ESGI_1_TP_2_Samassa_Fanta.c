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
/*1- Expliquer ce que fait son code : 


2-Expliquer ce qui fait en général du goto une mauvaise pratique si non
utilisé avec parcimonie :


3- Proposer des cas d’usage où le goto pourrait être utilisé intelligemment:
