#include <stdio.h>
#include <stdlib.h>


int main() {
        int age;
    printf("Quel est votre age ? ");
    scanf("%d", &age);
    printf("Vous etes un ");
    if(age <= 14)
     {
    printf("Enfant.\n");
    } else if(age <= 24) {
    printf("Adolescent.\n");
    } else if(age <= 64) {
    printf("Adulte.\n");
    } else {
    printf("Aine.\n");
    }
exit(EXIT_SUCCESS);
}
