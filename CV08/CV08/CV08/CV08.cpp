#include <iostream>
#include "xcesky00.h"

int main()
{
	int vysledek;
	double zacatek1, konec1, zacatek2, konec2, vysl_zacatek, vysl_konec;

	while (1)
	{
		printf("Zadej zacatek a konec prvniho intervalu: (z k)");
		scanf_s("%lf %lf", &zacatek1, &konec1);

		printf("Zadej zacatek a konec druheho intervalu: (z k)");
		scanf_s("%lf %lf", &zacatek2, &konec2);

		vysledek = prunik(zacatek1, konec1, zacatek2, konec2, &vysl_zacatek, &vysl_konec);

		if (vysledek == 1)
		{
			printf("prunik je: %.1lf %.1lf\n", vysl_zacatek, vysl_konec);
			rozdil(zacatek1, konec1, zacatek2, konec2);
			return 100;
		}
		else
		{
			printf("nema prunik");
			rozdil(zacatek1, konec1, zacatek2, konec2);
			return 100;
		}
	}
	return 1;
}

