#include <stdio.h>

int main(void) {
    // Tableaux pour données étudiantes
    char noms[5][30] = {
        "Durand",
        "Martin",
        "Dupont",
        "Lambert",
        "Moreau"
    };

    char prenoms[5][30] = {
        "Alice",
        "Bob",
        "Claire",
        "David",
        "Emma"
    };

    char adresses[5][50] = {
        "12 Rue des Fleurs",
        "8 Avenue Victor Hugo",
        "5 Rue de la Paix",
        "21 Boulevard Jean Jaures",
        "3 Impasse du Moulin"
    };

    float note_prog[5] = {14.5, 16.0, 12.75, 18.0, 15.25};
    float note_sys[5] = {13.0, 14.5, 11.0, 17.5, 16.0};

    int i;

    // Affichage des informations
    for (i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Nom        : %s\n", noms[i]);
        printf("Prénom     : %s\n", prenoms[i]);
        printf("Adresse    : %s\n", adresses[i]);
        printf("Note Prog C       : %.2f\n", note_prog[i]);
        printf("Note Système Expl.: %.2f\n", note_sys[i]);
        printf("----------------------------------\n");
    }

    return 0;
}
