#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main(void) {
    int tab[TAILLE];
    int i, val;
    int trouve = 0; /* 0 = absent, 1 = présent */

    /* Initialiser le générateur aléatoire */
    srand(time(NULL));

    /* Remplir le tableau avec des valeurs entre -50 et 50 */
    for (i = 0; i < TAILLE; i++) {
        tab[i] = (rand() % 101) - 50;
    }

    /* Afficher le tableau */
    printf("Tableau :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    /* Demander un entier à l'utilisateur */
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &val);

    /* Recherche dans le tableau */
    for (i = 0; i < TAILLE; i++) {
        if (tab[i] == val) {
            trouve = 1;
            break; /* On peut arrêter la recherche */
        }
    }

    /* Résultat */
    if (trouve == 1) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
