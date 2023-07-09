// Auta.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <ctype.h>              // tolower
#include <stdlib.h>				// system

#include "hudbaDB.h"

struct t_umelec* prvni = NULL; // globalni ukazatel na prvni auto

void OnAdd()
{
	char jmenoInterpreta[CHARS_SIZE];
	char nazevAlba[CHARS_SIZE];
	int my_year;

	printf("\nJmeno interpreta : ");         // dotazeme se na polozky
	scanf_s("%s", jmenoInterpreta, CHARS_SIZE);
	while (getchar() != '\n');

	printf("\nNazev alba : ");         // dotazeme se na polozky
	scanf_s("%s", nazevAlba, CHARS_SIZE);
	while (getchar() != '\n');

	printf("\nRok : ");
 	scanf_s("%d", &my_year);
	while (getchar() != '\n');
	add(jmenoInterpreta, nazevAlba, my_year, &prvni);         // volame pridavaci funkci
}

void OnDel() 
{
	char my_interpret[CHARS_SIZE];

	printf("\nInterpret: ");
	scanf_s("%s", my_interpret, CHARS_SIZE);
	while (getchar() != '\n');
	del(my_interpret, &prvni);
}

void ShowArtists()
{
	struct t_umelec* aktAuto = prvni; // ukazatel na aktualni auto
	printf("\n\n");
	while (aktAuto) // prochazeni seznamu
	{
		printf("%d: %s: %s\n", aktAuto->rok, aktAuto->interpret, aktAuto->nazevAlba); // tisk radku
		aktAuto = aktAuto->dalsi; // posun na dalsi auto
	}
	getchar();
}


int main()
{
	char  cmd;

	do
	{
		system("cls");		// smaze obrazovku
		printf("A: Pridat     ");
		printf("D: Smazat     ");
		printf("P: Tisk     ");
		printf("Q: Konec\n\n");

		cmd = tolower(getchar());
		while (getchar() != '\n');

		switch (cmd)
		{
		case 'a':
			OnAdd();					// volame pridani
			break;
		case 'd':
			OnDel();					// volame mazani
			break;
		case 'p':
			ShowArtists();
			break;
		}
	} while (cmd != 'q');     // koncime az pri Q
	return 0;
}
