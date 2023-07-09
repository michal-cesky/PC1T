#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "hudbaDB.h"

void add(char* interpret, char* nazevAlba, int rok, struct t_umelec** uk_prvni) // pridani auta
{
	struct t_umelec* novyUmelec; // ukazatel pro nove vkladane auto
	struct t_umelec* aktUmelec; // ukazatel na aktualni auto

	// alokace dynamicke promenne
	novyUmelec = (struct t_umelec*)malloc(sizeof(struct t_umelec));

	strcpy_s(novyUmelec->interpret, CHARS_SIZE, interpret); // naplneni struktury
	strcpy_s(novyUmelec->nazevAlba, CHARS_SIZE, nazevAlba); // naplneni struktury
	novyUmelec->rok = rok;
	novyUmelec->dalsi = NULL;

	if (*uk_prvni == NULL) // linearni seznam je prazdny
	{
		*uk_prvni = novyUmelec;
		return;
	}
	else if (strcmp(novyUmelec->interpret, (*uk_prvni)->interpret) < 0) // vlozime na zacatek
	{
		novyUmelec->dalsi = *uk_prvni;
		*uk_prvni = novyUmelec;
		return;
	}

	aktUmelec = *uk_prvni;
	while (aktUmelec) // prochazeni seznamu
	{
		if (aktUmelec->dalsi == NULL) // jsme na poslednim aute
		{
			aktUmelec->dalsi = novyUmelec; // pridavame na konec
			return;
		}
		else if (strcmp(novyUmelec->interpret, aktUmelec->dalsi->interpret) < 0)
		{
			novyUmelec->dalsi = aktUmelec->dalsi; // vlozime za aktAuto
			aktUmelec->dalsi = novyUmelec;
			return;
		}
		aktUmelec = aktUmelec->dalsi; // posun na dalsi auto
	}
}

void del(char* interpret, struct t_umelec** uk_prvni)
{
	struct t_umelec* aktAuto;

	while (*uk_prvni && strcmp((*uk_prvni)->interpret, interpret) == 0)
	{
		struct t_umelec* newPrvni = (*uk_prvni)->dalsi;
		free(*uk_prvni);  // uvolneni auta z pameti
		*uk_prvni = newPrvni;
	}

	aktAuto = *uk_prvni;
	while (aktAuto &&  aktAuto->dalsi) // prochazeni seznamu
	{
		if (strcmp(aktAuto->dalsi->interpret, interpret) == 0)  // auto je ke smazani
		{
			struct t_umelec* newDalsi = aktAuto->dalsi->dalsi;
			free(aktAuto->dalsi);  // uvolneni auta z pameti
			aktAuto->dalsi = newDalsi;
		}
		aktAuto = aktAuto->dalsi; // posun na dalsi auto
	}
}