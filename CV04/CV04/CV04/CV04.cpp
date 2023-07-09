

#include <iostream>

int jePrestupny(int rok) {
    if ((rok % 4 == 0) && (rok % 100 != 0) || (rok % 400 == 0)) {
        return 1;
    }
    else if (rok % 400 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    printf("1000\t %d\n", jePrestupny(1000));
    printf("2000\t %d\n", jePrestupny(2000));
    printf("2004\t %d\n", jePrestupny(2002));
    printf("2004\t %d\n", jePrestupny(2004));
    printf("2014\t %d\n", jePrestupny(2014));
}


/*
int jeSudy(int rok) {
    if  (rok % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    printf("1000\t %d\n", jeSudy(1000));
    printf("2000\t %d\n", jeSudy(2000));
    printf("2002\t %d\n", jeSudy(2002));
    printf("2004\t %d\n", jeSudy(2004));
    printf("2013\t %d\n", jeSudy(2013));
}

*/









/*int jePrestupny(int rok)
{
    int rok1[5] = { 1000, 2000, 2002, 2004, 2014 };

    printf("%d", rok1[0]);

    if ((rok1[0] % 4 == 0) && (rok1[0] % 100 != 0) || (rok1[0] % 400 == 0))
    {
        printf("\t1");
    }
    else {
        printf("\t0\n");
    }

    return rok;
}

int main()
{
    int y;
    y = jePrestupny(1);
    printf("%d", y);
    return 0;
}*/


