#include <stdio.h>

int main(void) {
    short s = 0x0203;
    int i = 0x01020304;
    long int l = 0x0102030405060708L;
    float f = 3.5f;
    double d = 1.0;
    long double ld = 1.0L;

    unsigned char *p;
    int k;

    printf("Octets de short :\n");
    p = (unsigned char *)&s;
    for (k = 0; k < (int)sizeof(s); k++) {
        printf(" %02x", (unsigned int)p[k]);
    }
    printf("\n\n");

    printf("Octets de int :\n");
    p = (unsigned char *)&i;
    for (k = 0; k < (int)sizeof(i); k++) {
        printf(" %02x", (unsigned int)p[k]);
    }
    printf("\n\n");

    printf("Octets de long int :\n");
    p = (unsigned char *)&l;
    for (k = 0; k < (int)sizeof(l); k++) {
        printf(" %02x", (unsigned int)p[k]);
    }
    printf("\n\n");

    printf("Octets de float :\n");
    p = (unsigned char *)&f;
    for (k = 0; k < (int)sizeof(f); k++) {
        printf(" %02x", (unsigned int)p[k]);
    }
    printf("\n\n");

    printf("Octets de double :\n");
    p = (unsigned char *)&d;
    for (k = 0; k < (int)sizeof(d); k++) {
        printf(" %02x", (unsigned int)p[k]);
    }
    printf("\n\n");

    printf("Octets de long double :\n");
    p = (unsigned char *)&ld;
    for (k = 0; k < (int)sizeof(ld); k++) {
        printf(" %02x", (unsigned int)p[k]);
    }
    printf("\n");

    return 0;
}
