#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include <algorithm>



using namespace std;

class MetodyPomocnicze
{
    public:
        static string konwerjsaIntNaString(int liczba);
        static string wczytajLinie();
        static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
        static char wczytajZnak();
        static int konwersjaStringNaInt(string liczba);
        static string pobierzLiczbe(string tekst, int pozycjaZnaku);



};

#endif // METODYPOMOCNICZE_H
