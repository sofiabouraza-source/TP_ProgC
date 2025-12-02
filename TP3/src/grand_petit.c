#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main(void) {
    int tab[TAILLE];
    int i;
    int min, max;

    /* Initialisation du générateur de nombres aléatoires */
    srand((unsigned int)time(NULL));

    /* Remplissage du tableau avec des valeurs entre 1 et 1000 */
    for (i = 0; i < TAILLE; i++) {
        tab[i] = (rand() % 1000) + 1; /* valeurs entre 1 et 1000 */
    }

    /* Initialisation de min et max avec la première valeur */
    min = tab[0];
    max = tab[0];

    /* Recherche du plus petit*
