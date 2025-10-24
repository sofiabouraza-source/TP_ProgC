#include <stdio.h>

void afficherBinaire(int n) {
    unsigned int mask = 1 << (sizeof(int) * 8 - 1); // Masque pour le bit le plus significatif

    for (int i = 0; i < sizeof(int) * 8; i++) {
        // Test du bit courant
        if (n & mask)
            printf("1");
        else
            printf("0");

        mask >>= 1; // Décalage du masque vers la droite
    }
    printf("\n");
}

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++) {
        printf("Nombre : %d en binaire : ", nombres[i]);
        afficherBinaire(nombres[i]);
    }

    return 0;
}
