// CV03.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

/*int main() //VÝPOČET BLESKU
{
    int sekundy;
    int vysledek;
    printf("Vlozte cas (v sekundach) ze ktery se ozve hrom po blesku: \n");
    scanf_s("%d", &sekundy);
    vysledek = sekundy * 330;
    printf("vzdalenost je: %d metru.\n", vysledek);

}*/

int main() {

    int a1, b1, A1, B1;


    printf("Vlozdte 1. komplexni cisla: (vložit s mezerou a bez i) \n"); 
    scanf_s("%d%di", &a1, &b1);
    printf("Vlozdte 2. komplexni cisla: (vložit s mezerou a bez i) \n");
    scanf_s("%d%di", &A1, &B1);

    if ((a1 == A1) && (b1 == B1)) {
        printf("cisla jsou si rovna \n");
    }
    else {
        printf("cisla nejsou rovan \n");
    }
}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
