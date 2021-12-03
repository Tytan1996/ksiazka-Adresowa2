#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>

#include "Pliki.h"
#include "MetodyPomocnicze.h"
#include "Adresat.h"

using namespace std;

class PlikZAdresatami:public Pliki
{
    const string NAZWA_TYMCZASIWEGO_PLIKU_Z_ADRESATAMI;
    int idOstatniegoAdresata;

    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    int podajIdWybranegoAdresata();
    void zwrocNumerLiniiSzukanegoAdresata(Adresat adresat);
    void usunWybranaLinieWPliku(int numerUsuwanejLinii);
    int podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata);
    int pobierzZPlikuIdOstatniegoAdresata();


public:
    PlikZAdresatami(string nazwaPlikuZAdresatami, string nazwaTymczasowegoPlikuZAdresatami) :NAZWA_TYMCZASIWEGO_PLIKU_Z_ADRESATAMI(nazwaTymczasowegoPlikuZAdresatami), Pliki(nazwaPlikuZAdresatami){
        idOstatniegoAdresata=0;
    }
    bool dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();
    void zamaniaDanychWPliku(Adresat adresat);
    void usunAdresata(vector <Adresat> &adresaci);
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);

};

#endif // PLIKZADRESATAMI_H
