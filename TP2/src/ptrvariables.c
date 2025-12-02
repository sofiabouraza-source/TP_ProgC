#include <stdio.h>

int main(void) {
    /* Déclaration des variables de base */
    char c = 0x41;                 /* 'A' */
    short s = 0x1234;
    int i = 0xa47865ff;
    long int l = 0x12345678;
    long long int ll = 0x1122334455667788LL;
    float f = 2.0f;
    double d = 3.5;
    long double ld = 4.25L;

    /* Pointeurs vers ces variables */
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pl = &l;
    long long int *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    /* Pointeurs pour lire les bits des flottants en hexadécimal */
    unsigned int *pf_hex = (unsigned int *)&f;
    unsigned long long *pd_hex = (unsigned long long *)&d;

    /* Pour le long double, on va afficher les octets un par un */
    unsigned char *pld_bytes = (unsigned char *)&ld;
    int k;

    printf("===== AVANT MANIPULATION =====\n\n");

    printf("Adresse de c : %p, Valeur de c : %02x\n", (void *)pc, (unsigned char)c);
    printf("Adresse de s : %p, Valeur de s : %04hx\n", (void *)ps, s);
    printf("Adresse de i : %p, Valeur de i : %08x\n", (void *)pi, (unsigned int)i);
    printf("Adresse de l : %p, Valeur de l : %08lx\n", (void *)pl, l);
    printf("Adresse de ll: %p, Valeur de ll: %016llx\n", (void *)pll, ll);

    printf("Adresse de f : %p, Valeur de f : %08x (bits IEEE754)\n",
           (void *)pf, *pf_hex);
    printf("Adresse de d : %p, Valeur de d : %016llx (bits IEEE754)\n",
           (void *)pd, *pd_hex);

    printf("Adresse de ld: %p, Valeur de ld (octets, hex) : ", (void *)pld);
    for (k = 0; k < (int)sizeof(long double); k++) {
        printf("%02x", pld_bytes[k]);
    }
    printf("\n\n");

    /* ===== Manipulation via les pointeurs ===== */

    *pc = 0x42;           /* 'B' */
    *ps = *ps + 1;
    *pi = *pi - 1;
    *pl = *pl + 0x10;
    *pll = *pll - 1;

    *pf = 1.0f;           /* 3f800000 en hex pour un float */
    *pd = 1.5;            /* valeur arbitraire */
    *pld = 8.5L;          /* nouvelle valeur */

    printf("===== APRES MANIPULATION =====\n\n");

    printf("Adresse de c : %p, Valeur de c : %02x\n", (void *)pc, (unsigned char)c);
    printf("Adresse de s : %p, Valeur de s : %04hx\n", (void *)ps, s);
    printf("Adresse de i : %p, Valeur de i : %08x\n", (void *)pi, (unsigned int)i);
    printf("Adresse de l : %p, Valeur de l : %08lx\n", (void *)pl, l);
    printf("Adresse de ll: %p, Valeur de ll: %016llx\n", (void *)pll, ll);

    printf("Adresse de f : %p, Valeur de f : %08x (bits IEEE754)\n",
           (void *)pf, *pf_hex);
    printf("Adresse de d : %p, Valeur de d : %016llx (bits IEEE754)\n",
           (void *)pd, *pd_hex);

    printf("Adresse de ld: %p, Valeur de ld (octets, hex) : ", (void *)pld);
    for (k = 0; k < (int)sizeof(long double); k++) {
        printf("%02x", pld_bytes[k]);
    }
    printf("\n");

    return 0;
}
