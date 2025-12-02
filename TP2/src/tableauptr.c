#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 11  /* taille des tableaux */

int main(void) {
    int   ti[N];      /* tableau d'entiers */
    float tf[N];      /* tableau de flottants */

    int i;
    int   *pi;
    float *pf;

    /* Initialisation du générateur de nombres aléatoires */
    srand((unsigned int)time(NULL));

    /* Remplir les tableaux avec des valeurs aléatoires */
    pi = ti;
    pf = tf;
    for (i = 0; i < N; i++) {
        *(pi + i) = rand() % 200;                 /* entiers entre 0 et 199 */
        *(pf + i) = (float)(rand() % 1000) / 100; /* flottants entre 0.00 et 9.99 */
    }

    /* Affichage AVANT la multiplication par 3 */
    printf("Tableau d'entiers (avant  x3) :\n");
    for (i = 0; i < N; i++) {
        printf("%d", *(ti + i));
        if (i < N - 1) {
            printf(", ");
        }
    }
    printf("\n");

    printf("Tableau de floats (avant x3) :\n");
    for (i = 0; i < N; i++) {
        printf("%.2f", *(tf + i));
        if (i < N - 1) {
            printf(", ");
        }
    }
    printf("\n\n");

    /* Multiplication par 3 des éléments d'indice divisible par 2,
       en utilisant UNIQUEMENT des pointeurs */
    pi = ti;
    pf = tf;
    for (i = 0; i < N; i++) {
        if (i % 2 == 0) {           /* indice divisible par 2 */
            *(pi + i) = *(pi + i) * 3;
            *(pf + i) = *(pf + i) * 3.0f;
        }
    }

    /* Affichage APRES la multiplication */
    printf("Tableau d'entiers (apres  x3) :\n");
    for (i = 0; i < N; i++) {
        printf("%d", *(ti + i));
        if (i < N - 1) {
            printf(", ");
        }
    }
    printf("\n");

    printf("Tableau de floats (apres x3) :\n");
    for (i = 0; i < N; i++) {
        printf("%.2f", *(tf + i));
        if (i < N - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
