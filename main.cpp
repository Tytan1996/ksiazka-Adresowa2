#include <iostream>
#include "KsiazkaAdresowa.h"


using namespace std;


int main()
{
    int idZalogowanegoUzytkownika = 0;
    int idOstatniegoAdresata = 0;

    char wybor;
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");

    while (true)
    {
        if (idZalogowanegoUzytkownika == 0)
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                idZalogowanegoUzytkownika = ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {

            if (ksiazkaAdresowa.czyMaszAdresatow() == true)
                // Pobieramy idOstatniegoAdresata, po to aby zoptymalizowac program.
                // Dzieki temu, kiedy uztykwonik bedzie dodawal nowego adresata
                // to nie bedziemy musieli jeszcze raz ustalac idOstatniegoAdresata
                idOstatniegoAdresata = ksiazkaAdresowa.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);

            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                idOstatniegoAdresata = ksiazkaAdresowa.dodajAdresata(idZalogowanegoUzytkownika, idOstatniegoAdresata);
                break;
            case '2':
                cout<<"Opcja chwilow niedostepna"<<endl;
                //wyszukajAdresatowPoImieniu(adresaci);
                break;
            case '3':
                cout<<"Opcja chwilow niedostepna"<<endl;
                //wyszukajAdresatowPoNazwisku(adresaci);
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                cout<<"Opcja chwilow niedostepna"<<endl;
                //idUsunietegoAdresata = usunAdresata(adresaci);
                //idOstatniegoAdresata = podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(idUsunietegoAdresata, idOstatniegoAdresata);
                break;
            case '6':
                cout<<"Opcja chwilow niedostepna"<<endl;
                //edytujAdresata(adresaci);
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
                break;
            case '8':
                idZalogowanegoUzytkownika = 0;
                ksiazkaAdresowa.usunAdresadow();
                break;
            }
        }
    }


    return 0;
}
