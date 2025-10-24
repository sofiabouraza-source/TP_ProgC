#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérateurs arithmétiques
    printf("a = %d, b = %d\n\n", a, b);
    printf("Addition (a + b) = %d\n", a + b);
    printf("Soustraction (a - b) = %d\n", a - b);
    printf("Multiplication (a * b) = %d\n", a * b);
    printf("Division entière (a / b) = %d\n", a / b);
    printf("Reste de la division (a %% b) = %d\n", a % b);

    // Opérateurs logiques (comparaisons)
    printf("\n--- Comparaisons logiques ---\n");
    printf("a == b : %d\n", a == b); // égalité
    printf("a > b : %d\n", a > b);   // supérieur
    printf("a < b : %d\n", a < b);   // inférieur
    printf("a != b : %d\n", a != b); // différent
    printf("a >= b : %d\n", a >= b); // supérieur ou égal
    printf("a <= b : %d\n", a <= b); // inférieur ou égal

    return 0;
}
