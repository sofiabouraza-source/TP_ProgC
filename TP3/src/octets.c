#include <stdio.h>

int main(void) {
    short s = 0x0302;
    int i = 0x04030201;
    long int l = 0x0807060504030201L;
    float f = 3.5f;
    double d = 1.0;
    long double ld = 1.0L;

    unsigned char *p;
    int k;

    /* short */
    printf("Octets de short :\n");
    p = (unsigned char *)&s;
    for (k = 0; k < (int)sizeof(s); k++) {
        printf(" %02x", p[k]);
    }
    printf("\n\n");

    /* int */
    printf("Octets de int :\n");
    p = (unsigned char *)&i;
    for (k = 0; k < (int)sizeof(i); k++) {
        printf(" %02x", p[k]);
    }
    printf("\n\n");

    /* long int*
