
#pragma once

enum typOperace { soucet = 1, rozdil, soucin, podil };
enum formatZobrazeni { algebraicky, geometricky };

struct complex
{
	double real;
	double imag;
};

struct complex operace(struct complex a, struct complex b, enum typOperace typ);
void tisk(struct complex a, enum formatZobrazeni format);
