#include <stdio.h>

int main() {
    unsigned int d = 0x00F00010;  // valeur de test
    int bit4, bit20, resultat;

    /* 
       ATTENTION : Les bits sont comptés depuis la gauche (bit le plus significatif).
       Sur un entier 32 bits :
       -> Le bit 4 de gauche = bit d'indice 28 (car 32 - 4 = 28)
       -> Le bit 20 de gauche = bit d'indice 12 (car 32 - 20 = 12)
    */

    bit4 = (d >> 28) & 1;   // extraction du 4ème bit de gauche
    bit20 = (d >> 12) & 1;  // extraction du 20ème bit de gauche

    // Vérification
    if (bit4 == 1 && bit20 == 1)
        resultat = 1;
    else
        resultat = 0;

    printf("%d\n", resultat);

    return 0;
}
