#include <iostream>
#include "KsiazkaAdresowa.h"


using namespace std;


int main()
{

    char wybor;
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt","Adresaci.txt","Adresaci_tymczasowo.txt");

    while (true)
    {
        if (ksiazkaAdresowa.czyUzytkownikJestZalogowony()==false)
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
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

            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
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
                ksiazkaAdresowa.usunAdresata();
                break;
            case '6':
                //cout<<"Opcja chwilow niedostepna"<<endl;
                ksiazkaAdresowa.edycjaAdresata();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogowanieUzytkownika();
                break;
            }
        }
    }


    return 0;
}
