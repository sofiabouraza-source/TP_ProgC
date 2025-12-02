#include <stdio.h>
#include <string.h>   // nécessaire pour strcpy

// Définition de la structure Étudiant.e
struct etudiant {
    char nom[30];
    char prenom[30];
    char adresse[100];
    float note1;  // Programmation en C
    float note2;  // Système d'exploitation
};

int main(void) {
    struct etudiant etudiants[5];

    // Initialisation des données avec strcpy
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20 Boulevard Niels Bohr, Lyon");
    etudiants[0].note1 = 16.5;
    etudiants[0].note2 = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22 Boulevard Niels Bohr, Lyon");
    etudiants[1].note1 = 14.0;
    etudiants[1].note2 = 14.1;

    strcpy(etudiants[2].nom, "Durand");
    strcpy(etudiants[2].prenom, "Lucie");
    strcpy(etudiants[2].adresse, "5 Rue des Lilas, Paris");
    etudiants[2].note1 = 12.75;
    etudiants[2].note2 = 13.5;

    strcpy(etudiants[3].nom, "Bernard");
    strcpy(etudiants[3].prenom, "Louis");
    strcpy(etudiants[3].adresse, "10 Avenue de la République, Nantes");
    etudiants[3].note1 = 18.0;
    etudiants[3].note2 = 17.25;

    strcpy(etudiants[4].nom, "Moreau");
    strcpy(etudiants[4].prenom, "Emma");
    strcpy(etudiants[4].adresse, "3 Impasse du Moulin, Bordeaux");
    etudiants[4].note1 = 15.25;
    etudiants[4].note2 = 16.0;

    // Affichage des données
    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom      : %s\n", etudiants[i].nom);
        printf("Prénom   : %s\n", etudiants[i].prenom);
        printf("Adresse  : %s\n", etudiants[i].adresse);
        printf("
