
#include <stdio.h>

/* Prototypes des fonctions d'entree des exercices */
void exo_4_1(void);
void exo_4_2(void);
void exo_4_7(void);

/* === fonction main commune aux exos 4.1, 4.2, 4.7 === */
int main(void) {
    int choix;
    int continuer = 1;

    while (continuer) {
        printf("=== Menu des exercices ===\n");
        printf("1 - Exercice 4.1\n");
        printf("2 - Exercice 4.2\n");
        printf("3 - Exercice 4.7\n");
        printf("0 - Quitter\n");
        printf("Votre choix : ");
        if (scanf("%d", &choix) != 1) {
            /* Lecture invalide, on vide l'entrée standard grossièrement */
            int c;
            while ((c = getchar()) != '\n' && c != EOF) { }
            printf("Entree invalide.\n");
            continue;
        }

        switch (choix) {
        case 1:
            exo_4_1();
            break;
        case 2:
            exo_4_2();
            break;
        case 3:
            exo_4_7();
            break;
        case 0:
            continuer = 0;
            break;
        default:
            printf("Choix inconnu.\n");
            break;
        }

        printf("\n");
    }

    printf("Fin du programme.\n");
    return 0;
}

/* ============================= */
/*   FONCTIONS DES EXERCICES     */
/*   (stubs à remplacer)         */
/* ============================= */

void exo_4_1(void) {
    printf("[Exercice 4.1] Fonction exo_4_1 appelee.\n");
    /* TODO : mettre ici le code de l'exercice 4.1 */
}

void exo_4_2(void) {
    printf("[Exercice 4.2] Fonction exo_4_2 appelee.\n");
    /* TODO : mettre ici le code de l'exercice 4.2 */
}

void exo_4_7(void) {
    printf("[Exercice 4.7] Fonction exo_4_7 appelee.\n");
    /* TODO : mettre ici le code de l'exercice 4.7 */
}
