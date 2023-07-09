
#include <iostream>
#include <math.h>

void soucet(double a[2], double b[2], double c[2])
{   
    c[0] = a[0] + b[0];
    c[1] = a[1] + b[1];
}


void rozdil(double a[2], double b[2], double c[2])
{
	c[0] = a[0] - b[0];
	c[1] = a[1] - b[1];
}

void soucin(double a[2], double b[2], double c[2])
{
	c[0] = (a[0] * b[0] - a[1] * b[1]);
	c[1] = (a[0] * b[1] + a[1] * b[0]);
}

void tisk(double c[2])
{
	if (c[1] < 0)	printf("\n %.1lf - %.1lfj", c[0], -c[1]);
	else			printf("\n %.1lf + %.1lfj", c[0], c[1]);
	printf("\n %.2lf ", sqrt(c[0] * c[0] + c[1] * c[1]));
}


int main()
{
	double a[2], b[2], c[2];
	char znamenko;


	printf("Zadej realnou cast 1. cisla:\n");
	scanf_s("%lf", &a[0]);
	printf("Zadej imaginarni cast 1. cisla:\n");
	scanf_s("%lf", &a[1]);


	printf("Zadejte znamenko: (+/-/*)\n");
	while (getchar() != '\n');	
	scanf_s("%c", &znamenko, 1); 


	printf("Zadej realnou cast 2. cisla:\n");
	scanf_s("%lf", &b[0]);
	printf("Zadej imaginarni cast 2. cisla:\n");
	scanf_s("%lf", &b[1]);

	if (znamenko == '+')
		soucet(a, b, c);
	else if (znamenko == '-')
		rozdil(a, b, c);
	else if (znamenko == '*')
		soucin(a, b, c);


	tisk(c);

	return 0;
}

