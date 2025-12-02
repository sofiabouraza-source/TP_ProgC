#include <stdio.h>

/* Définition de la structure couleur au format RGBA */
struct couleur {
    unsigned char r;  /* rouge  */
    unsigned char g;  /* vert   */
    unsigned char b;  /* bleu   */
    unsigned char a;  /* alpha  */
};

int main(void) {
    struct couleur couleurs[10];
    int i;

    /* Initialisation des couleurs en hexadécimal */
    couleurs[0].r = 0xef; couleurs[0].g = 0x78; couleurs[0].b = 0x12; couleurs[0].a = 0xff;
    couleurs[1].r = 0x2c; couleurs[1].g = 0xc8; couleurs[1].b = 0x64; couleurs[1].a = 0xff;
    couleurs[2].r = 0x10; couleurs[2].g = 0x80; couleurs[2].b = 0xf0; couleurs[2].a = 0xaa;
    couleurs[3].r = 0x99; couleurs[3].g = 0x33; couleurs[3].b = 0xcc; couleurs[3].a = 0x80;
    couleurs[4].r = 0x45; couleurs[4].g = 0x78; couleurs[4].b = 0x90; couleurs[4].a = 0xff;
    couleurs[5].r = 0xff; couleurs[5].g = 0x00; couleurs[5].b = 0x00; couleurs[5].a = 0xff;
    couleurs[6].r = 0x00; couleurs[6].g = 0xff; couleurs[6].b = 0x00; couleurs[6].a = 0xff;
    couleurs[7].r = 0x00; couleurs[7].g = 0x00; couleurs[7].b = 0xff; couleurs[7].a = 0xff;
    couleurs[8].r = 0xf5; couleurs[8].g = 0xde; couleurs[8].b = 0xb3; couleurs[8].a = 0xff;
    couleurs[9].r = 0x30; couleurs[9].g = 0x20; couleurs[9].b = 0x10; couleurs[9].a = 0xff;

    /* Affichage des couleurs */
    for (i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %u\n", couleurs[i].r);
        printf("Vert  : %u\n", couleurs[i].g);
        printf("Bleu  : %u\n", couleurs[i].b);
        printf("Alpha : %u\n", couleurs[i].a);
        printf("-------------------------\n");
    }

    return 0;
}
