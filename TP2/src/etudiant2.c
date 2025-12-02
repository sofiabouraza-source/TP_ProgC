#include <stdio.h>
#include <string.h>   /* nécessaire pour strcpy */

/* Définition de la structure Étudiant.e */
struct etudiant {
    char nom[30];
    char prenom[30];
    char adresse[100];
    float note1;  /* Programmation en C */
    float note2;  /* Système d'exploitation */
};

int main(void) {
    struct etudiant etudiants[5];
    int i;

    /* Initialisation des données avec strcpy */
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note1 = 16.5f;
    etudiants[0].note2 = 12.1f;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note1 = 14.0f;
    etudiants[1].note2 = 14.1f;

    strcpy(etudiants[2].nom, "Durand");
    strcpy(etudiants[2].prenom, "Lucie");
    strcpy(etudiants[2].adresse, "5, Rue des Lilas, Paris");
    etudiants[2].note1 = 12.75f;
    etudiants[2].note2 = 13.5f;

    strcpy(etudiants[3].nom, "Bernard");
    strcpy(etudiants[3].prenom, "Louis");
    strcpy(etudiants[3].adresse, "10, Avenue de la Republique, Nantes");
    etudiants[3].note1 = 18.0f;
    etudiants[3].note2 = 17.25f;

    strcpy(etudiants[4].nom, "Moreau");
    strcpy(etudiants[4].prenom, "Emma");
    strcpy(etudiants[4].adresse, "3, Impasse du Moulin, Bordeaux");
    etudiants[4].note1 = 15.25f;
    etudiants[4].note2 = 16.0f;

    /* Affichage des données */
    for (i = 0; i < 5; i++) {
        printf("Etudiant.e %d :\n", i + 1);
        printf("Nom      : %s\n", etudiants[i].nom);
        printf("Prenom   : %s\n", etudiants[i].prenom);
        printf("Adresse  : %s\n", etudiants[i].adresse);
        printf("Note 1   : %.2f\n", etudiants[i].note1);
        printf("Note 2   : %.2f\n", etudiants[i].note2);
        printf("--------------------------------------\n");
    }

    return 0;
}
