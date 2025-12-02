#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

/* Structure pour représenter une couleur RGBA */
struct couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

/* Structure pour une couleur distincte + son nombre d'occurrences */
struct couleur_comptee {
    struct couleur c;
    int compteur;
};

int main(void) {
    struct couleur tab[N];
    struct couleur_comptee distinctes[N];
    int nb_distinctes = 0;
    int i, j;
    int trouve;

    /* Initialisation du générateur de nombres aléatoires */
    srand((unsigned int)time(NULL));

    /* Remplir le tableau avec 100 couleurs (au hasard ici) */
    for (i = 0; i < N; i++) {
        tab[i].r = (unsigned char)(rand() % 256);
        tab[i].g = (unsigned char)(rand() % 256);
        tab[i].b = (unsigned char)(rand() % 256);
        tab[i].a = (unsigned char)(rand() % 256);
    }

    /* Comptage des couleurs distinctes */
    for (i = 0; i < N; i++) {
        trouve = 0;

        /* Chercher si tab[i] existe déjà dans le tableau des distinctes */
        for (j = 0; j < nb_distinctes; j++) {
            if (tab[i].r == distinctes[j].c.r &&
                tab[i].g == distinctes[j].c.g &&
                tab[i].b == distinctes[j].c.b &&
                tab[i].a == distinctes[j].c.a) {

                distinctes[j].compteur++;
                trouve = 1;
                break;
            }
        }

        /* Si pas trouvée, on l'ajoute comme nouvelle couleur distincte */
        if (!trouve) {
            distinctes[nb_distinctes].c = tab[i];
            distinctes[nb_distinctes].compteur = 1;
            nb_distinctes++;
        }
    }

    /* Affichage des couleurs distinctes et de leurs occurrences */
    printf("Couleurs distinctes et nombre d'occurrences :\n\n");
    for (i = 0; i < nb_distinctes; i++) {
        printf("%02x %02x %02x %02x : %d\n",
               distinctes[i].c.r,
               distinctes[i].c.g,
               distinctes[i].c.b,
               distinctes[i].c.a,
               distinctes[i].compteur);
    }

    return 0;
}
