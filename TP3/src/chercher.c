#include <stdio.h>

/* Fonction de comparaison de deux chaînes de caractères
   Retourne 0 si elles sont égales, une valeur non nulle sinon */
int compare_chaine(const char *s1, const char *s2) {
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 1; /* différent */
        }
        i++;
    }

    /* Si on est ici, soit les deux se terminent en même temps, soit non */
    if (s1[i] == '\0' && s2[i] == '\0') {
        return 0; /* identiques */
    } else {
        return 1; /* longueurs différentes */
    }
}

int main(void) {
    /* Tableau de 10 phrases (tableau de pointeurs de caractères) */
    const char *phrases[10] = {
        "Bonjour, comment ca va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journee.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent etre deroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est interessante.",
        "Les structures de donnees sont importantes.",
        "Programmer en C, c'est genial."
    };

    char recherche[200];
    int i;
    int trouve = 0;

    printf("Entrez la phrase que vous souhaitez chercher :\n");
    if (fgets(recherche, sizeof(recherche), stdin) == NULL) {
        printf("Erreur de lecture.\n");
        return 1;
    }

    /* Enlever le '\n' final si present */
    i = 0;
    while (recherche[i] != '\0') {
        if (recherche[i] == '\n') {
            recherche[i] = '\0';
            break;
        }
        i++;
    }

    /* Recherche dans le tableau de phrases */
    for (i = 0; i < 10; i++) {
        if (compare_chaine(recherche, phrases[i]) == 0) {
            trouve = 1;
            break;
        }
    }

    if (trouve) {
        printf("Phrase trouvee\n");
    } else {
        printf("Phrase non trouvee\n");
    }

    return 0;
}
