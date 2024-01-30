#include <stdio.h>
#include <stdlib.h>


int main() {
    int age;
    printf("Quel est votre age? : ");
    scanf("%d",&age);
    
    if ((age>=18) && (age<=25)){
        printf("oui ! vous etes jeune\n");
    }else{
    printf("Vous n'etes pas un jeune entre 18 et 25 ans .\n");
    }

exit(EXIT_SUCCESS);

}
    
    
