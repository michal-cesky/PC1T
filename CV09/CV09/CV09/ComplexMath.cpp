
#include <iostream>
#include "ComplexMath.h"

#define _USE_MATH_DEFINES
#include <math.h> 

//pow(B, 2);	//B^2
//sqrt(B);	//odmocnina B
//M_PI	//konstanta

struct complex z;

struct complex operace(struct complex a, struct complex b, enum typOperace typ)
{
	struct complex vysledek;

	switch (typ)
	{
	case soucet:
		vysledek.real = a.real + b.real;
		vysledek.imag = a.imag + b.imag;
		break;
	case rozdil:
		vysledek.real = a.real - b.real;
		vysledek.imag = a.imag - b.imag;
		break;
	case soucin:
		vysledek.real = a.real * b.real - a.imag * b.imag;
		vysledek.imag = a.real * b.imag + b.real * a.imag;
		break;
	case podil:
		vysledek.real = (a.real * b.real + a.imag * b.imag) / (pow(b.real, 2) + pow(b.imag, 2));
		vysledek.imag = (a.imag * b.real - a.real * b.imag) / (pow(b.real, 2) + pow(b.imag, 2));

		break;
	default:
		printf("není definovaná operace");
		break;
	}
	return vysledek;
}




void tisk(struct complex a, enum formatZobrazeni format)
{
	struct complex vysledek;
	switch (format)
	{
	case algebraicky:
		if (a.imag < 0)
		{
			printf("%.3lf %.3lfj \n", a.real, a.imag);
		}
		else
		{
			printf("%.3lf + %.3lfj \n", a.real, a.imag);
		}
		break;
	case geometricky:
			z.real = sqrt(a.real * a.real + a.imag * a.imag);
			if (a.imag > 0 && a.real > 0)
			{
				z.imag = atan(a.imag / a.real);
			}
			else if (a.imag > 0 && a.real < 0)
			{
				z.imag = M_PI - atan(a.imag / a.real);
			}
			else if (a.imag < 0 && a.real < 0)
			{
				z.imag = -(M_PI - atan(a.imag / a.real));
			}
			else
			{
				z.imag = -atan(a.imag / a.real);
			}
			printf("%.3lf*e^j%.0lfdeg\n", z.real, z.imag * 180 / M_PI);
			break;
		default:
			break;
		}


	}


