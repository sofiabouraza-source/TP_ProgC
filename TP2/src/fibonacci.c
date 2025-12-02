#include <stdio.h>

int main() {
    int n;
    int U0 = 0, U1 = 1, Un;

    // Demande du nombre de termes
    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    // Gestion des cas particuliers
    if (n < 0) {
        printf("Veuillez entrer un nombre positif.\n");
        return 0;
    }

    // Affichage du premier terme
    if (n >= 0) printf("%d", U0);
    // Affichage du deuxième terme
    if (n >= 1) printf(", %d", U1);

    // Calcul et affichage des termes suivants
    for (int i = 2; i <= n; i++) {
        Un = U0 + U1;    // formule :
