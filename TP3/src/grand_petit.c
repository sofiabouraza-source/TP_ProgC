#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int tab[100];
    int i;
    int min, max;

    /* Initialisation du générateur aléatoire */
    srand(time(NULL));

    /* Remplir le tableau */
    for (i = 0; i < 100; i++) {
        tab[i] = rand() % 1000 + 1; /* valeurs 1 à 1000 */
    }

    /* Initialiser min et max avec la première valeur */
    min = tab[0];
    max = tab[0];

    /* Rechercher min et max */
    for (i = 1; i < 100; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
        if (tab[i] > max) {
            max = tab[i];
        }
    }

    /* Afficher les valeurs */
    printf("Le numero le plus petit est : %d\n", min);
    printf("Le numero le plus grand est : %d\n", max);

    return 0;
}
