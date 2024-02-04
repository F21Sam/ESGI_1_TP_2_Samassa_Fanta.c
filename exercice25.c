#include <stdio.h>
#include <stdlib.h>
int main() {
int first_pass = 0, second_pass = 0;
if(first_pass > second_pass) {
/* Echanger first_pass et second_pass */
        int temp = first_pass;
        first_pass = second_pass;
        second_pass = temp;
}
if(/* Condition : si mot de passe erroné */
!((first_pass == 42 && second_pass == 1337)
    || (first_pass == 1235 && second_pass == 1235))) 
 {
printf("Accès refuse.\n");
exit(EXIT_SUCCESS);
}
printf("Bienvenue !\n");
exit(EXIT_SUCCESS);
}