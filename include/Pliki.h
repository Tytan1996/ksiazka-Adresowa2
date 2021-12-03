#ifndef PLIKI_H
#define PLIKI_H

#include <iostream>
#include <fstream>

using namespace std;

class Pliki
{
    const string NAZWA_PLIKU;

    public:
        Pliki(string nazwaPliku): NAZWA_PLIKU(nazwaPliku){};
        bool czyPlikJestPusty();
        string pobierzNazwePliku();

    private:




};

#endif // PLIKI_H
