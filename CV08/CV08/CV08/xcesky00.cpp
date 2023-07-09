#include <stdio.h>


int prunik(double zacatek1, double konec1, double zacatek2, double konec2, double* vysl_zacatek, double* vysl_konec)
{

	if (zacatek1 <= zacatek2 && konec2 <= konec1)
	{
		*vysl_zacatek = zacatek2;
		*vysl_konec = konec2;
		return 1;
	}
	else if (zacatek1 <= zacatek2 && konec1 <= konec2 && konec1 > zacatek2)
	{
		*vysl_zacatek = zacatek2;
		*vysl_konec = konec1;
		return 1;
	}
	else
	{
		return 100;
	}
	
}


void rozdil(double zacatek1, double konec1, double zacatek2, double konec2)
{

	if (zacatek2 >= konec1)
	{
		printf("%.1lf %.1lf - %.1lf %.1lf", zacatek1, konec1, zacatek2, konec2);
	}
	else if (konec2 < konec1)
	{
		printf("%.1lf %.1lf - %.1lf %.1lf", zacatek1, zacatek2, konec2, konec1);
	}

	else
	{
		printf("%.1lf %.1lf - %.1lf %.1lf", zacatek1, zacatek2, konec1, konec2);
	}
}
