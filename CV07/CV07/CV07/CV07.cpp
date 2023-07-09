#include <iostream>
#include <stdio.h>
#include <math.h>
#include "Body2d.h"
#define POCET_BODU 10


int main()
{
	int body[POCET_BODU][2] = { 5, 10,
  -14, 2,
  45, 4,
  -9, 8,
  58, -3,
  47, 5,
  -18, -86,
  75, 7,
  -25, 51,
  17, 98 };

	int nejblizsiIndex, X, Y;

	printf("zadejte souradnice referencniho bodu ve tbbaru X Y: ");
	scanf_s("%d %d", &X, &Y);

	double maxvzdal = 40;
	nejblizsiIndex = indexNejblizsi(POCET_BODU, body, X, Y);
	double vzdalenost = prumernaVzdalenost(POCET_BODU, body, X, Y);

};


