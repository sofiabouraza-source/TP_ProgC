#include <stdio.h>

int main() {
    int n = 5; // Hauteur de la pyramide
    int i, j;

    for (i = 1; i <= n; i++) {
        // 1. Affichage des espaces pour centrer les nombres
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 2. Affichage des nombres croissants de 1 à i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3. Affichage des nombres décroissants de i-1 à 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Passage à la ligne suivante après chaque niveau
        printf("\n");
    }

    printf("\nGénération de la pyramide terminée.\n");

    return 0;
}

