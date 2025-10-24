#include <stdio.h>

int main() {
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    short s = -12345;
    unsigned short us = 54321;

    int i = -123456;
    unsigned int ui = 123456;

    long li = -1234567890;
    unsigned long uli = 1234567890;

    long long lli = -9876543210;
    unsigned long long ulli = 9876543210;

    float f = 3.14;
    double d = 2.71828;
    long double ld = 1.41421;

    printf("Affichage des variables de base :\n\n");

    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n", uc);

    printf("\nshort : %d\n", s);
    printf("unsigned short : %u\n", us);

    printf("\nint : %d\n", i);
    printf("unsigned int : %u\n", ui);

    printf("\nlong : %ld\n", li);
    printf("unsigned long : %lu\n", uli);

    printf("\nlong long : %lld\n", lli);
    printf("unsigned long long : %llu\n", ulli);

    printf("\nfloat : %f\n", f);
    printf("double : %f\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}
