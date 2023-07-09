
#include <iostream>
#include "ComplexMath.h"

int main()
{
    struct complex A, B, C;
    enum typOperace znamenko;


    printf("zadejte 1 komplexni cislo:");
    scanf_s("%lf %lf", &A.real, &A.imag);

    printf("zadejte 2 komplexni cislo:");
    scanf_s("%lf %lf", &B.real, &B.imag);

    while (1)
    {
        printf("Zadejte operaci: 1-soucet, 2-rozdil, 3-soucin, 4-podil:");
        scanf_s("%d", &znamenko);

        C = operace(A, B, znamenko);
        tisk(C, algebraicky);
        tisk(C, geometricky);
    }
}

