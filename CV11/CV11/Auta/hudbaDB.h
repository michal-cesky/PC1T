#pragma once

#define CHARS_SIZE 21

struct t_umelec
{
    char  interpret[CHARS_SIZE];
    char  nazevAlba[CHARS_SIZE];
    int   rok;
    struct t_umelec* dalsi;
};

void add(char* interpret, char* nazevAlba, int rok, struct t_umelec** uk_prvni);
void del(char* interpret, struct t_umelec** uk_prvni);
