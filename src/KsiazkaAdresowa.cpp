#include "KsiazkaAdresowa.h"



void KsiazkaAdresowa::rejestracjaUzytkownika(){

    uzytkownikMenedzer.rejestracjaUzytkownika();

}
void KsiazkaAdresowa::wypiszWszyskichUzytkownikow(){

    uzytkownikMenedzer.wypiszWszyskichUzytkownikow();
}
int KsiazkaAdresowa::logowanieUzytkownika()
{
    return uzytkownikMenedzer.logowanieUzytkownika();
}
char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}
char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu (niedostepne)" << endl;
    cout << "3. Wyszukaj po nazwisku (niedostepne)" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata (niedostepne)" << endl;
    cout << "6. Edytuj adresata (niedostepne)" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}
bool KsiazkaAdresowa::czyMaszAdresatow(){

    return adresatMenedzer.czyMaszAdresatow();

}
int KsiazkaAdresowa::wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika){
    return adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);

}
int KsiazkaAdresowa::dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata){
    return adresatMenedzer.dodajAdresata(idZalogowanegoUzytkownika, idOstatniegoAdresata);

}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow(){
    adresatMenedzer.wyswietlWszystkichAdresatow();
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika){
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);

}
void KsiazkaAdresowa::usunAdresadow(){

    adresatMenedzer.usunAdresadow();
}
