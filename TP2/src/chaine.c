#include <stdio.h>

int main(void) {
    char chaine1[50] = "Hello";
    char chaine2[50] = " World!";
    char copie[50];
    char concat[100];

    int i;
    int j;
    int longueur;

    /* 1) Calcul de la longueur de chaine1 */
    longueur = 0;
    i = 0;
    while (chaine1[i] != '\0') {
        longueur++;
        i++;
    }

    printf("Longueur de \"%s\" = %d\n", chaine1, longueur);

    /* 2) Copie de chaine1 dans copie */
    i = 0;
    while (chaine1[i] != '\0') {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0';

    printf("Copie de chaine1 : %s\n", copie);

    /* 3) Concaténation de chaine1 et chaine2 dans concat */

    /* On commence par copier chaine1 dans concat */
    i = 0;
    while (chaine1[i] != '\0') {
        concat[i] = chaine1[i];
        i++;
    }

    /* Puis on ajoute chaine2 à la suite */
    j = 0;
    while (chaine2[j] != '\0') {
        concat[i] = chaine2[j];
        i++;
        j++;
    }
    concat[i] = '\0';

    printf("Concaténation : %s\n", concat);

    return 0;
}


