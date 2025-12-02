#include <stdio.h>

int main() {
    char chaine1[50] = "Hello";
    char chaine2[50] = " World!";
    char copie[50];
    char concat[100];
    int i, j, longueur = 0;

    /* --- 1) Calcul du nombre de caractères dans chaine1 --- */
    i = 0;
    while (chaine1[i] != '\0') {
        longueur++;
        i++;
    }
    printf("Longueur de \"%s\" = %d\n", chaine1, longueur);

    /* --- 2) Copie de chaine1 dans copie --- */
    i = 0;
    while (chaine1[i] != '\0') {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0'; // ajout du caractère de fin
    printf("Copie de chaine1 :
