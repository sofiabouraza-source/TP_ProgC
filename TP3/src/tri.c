#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main(void) {
    int tab[TAILLE];
    int i, j, temp;

    /* Initialisation du générateur de nombres aléatoires */
    srand(time(NULL));

    /* Remplissage du tableau avec des valeurs aléatoires entre -50 et 50 */
    for (i = 0; i < TAILLE; i++) {
        tab[i] = (rand() % 101) - 50; /* valeurs de -50 à 50 */
    }

    /* Affichage du tableau non trié */
    printf("Tableau non trie :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    /* TRI A BULLES : tri croissant */
    for (i = 0; i < TAILLE - 1; i++) {
        for (j = 0; j < TAILLE - 1 - i; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    /* Affichage du tableau trie */
    printf("Tableau trie par ordre croissant :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
