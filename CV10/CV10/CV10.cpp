#include <iostream>
#include <ctype.h>

int main()
{
	int pocetZnaku = 0;
	char aktualniZnak = NULL;
	char predchoziZnak = NULL;
	int pocetCisel = 0;
	int pocetPismen = 0;

	FILE* f;
	fopen_s(&f, "vstup.txt", "r");

	while (!feof(f))
	{
		aktualniZnak = getc(f);
		printf("%c", aktualniZnak);
		//kod pro vypocty

		if (isdigit(aktualniZnak))
		{
			pocetCisel++;
		}
		
		if (isdigit(aktualniZnak))
		{
			pocetPismen++;
		}


		predchoziZnak = aktualniZnak;
		pocetZnaku++;
	}

	fclose(f);

	fopen_s(&f, "vystup.txt", "w");
	fprintf(f, "Pocet znaku: %d\n", pocetZnaku);
	fprintf(f, "Pocet cislic: %d\n", pocetCisel);
	fclose(f);

	printf("Pocet znaku: %d \n", pocetZnaku);
	printf("Pocet Cisel: %d \n", pocetCisel);

	return 0;
}