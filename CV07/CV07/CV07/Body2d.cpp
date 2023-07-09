#include <limits.h>
#include <math.h>
#include <stdio.h>


int indexNejblizsi(int velikost, int(*poleBodu)[2], int referencniX, int referencniY)
{
	int index;
	double vz = 9999999999;

	for (int i = 0; i < velikost; i++)
	{
		int x = poleBodu[i][0] - referencniX;
		int y = poleBodu[i][1] - referencniY;
		if ((x * x) + (y * y) < vz)
		{
			vz = (x * x) + (y * y);
			index = i;
		}
	}

	return index;
}

double prumernaVzdalenost(int velikost, int(*poleBodu)[2], int referencniX, int referencniY)
{
	double vz = 0;
	for (int i = 0; i < velikost; i++)
	{
		int x = poleBodu[i][0] - referencniX;
		int y = poleBodu[i][1] - referencniY;
		vz = vz + sqrt((x * x) + (y * y));
	}

	return (vz / velikost);
}



void bodyvokruhu(int velikost, int(*poleBodu)[2], int referencniX, int referencniY, double maxvzdal)
{
	double m;
	printf("\nBody blizko bodu { %d ; %d } =", referencniX, referencniY);

	for (int i = 0; i < velikost; i++)
	{
		int x1 = poleBodu[i][0] - referencniX;
		int y1 = poleBodu[i][1] - referencniY;
		m = sqrt((x1 * x1) + (y1 * y1));

		if (m <= maxvzdal)
		{
			printf(" { %d ; %d } ", poleBodu[i][0], poleBodu[i][1]);
		}
	}
	printf("\n");
}





