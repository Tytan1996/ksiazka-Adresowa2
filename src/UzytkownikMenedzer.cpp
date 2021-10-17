#include "UzytkownikMenedzer.h"


void UzytkownikMenedzer::rejestracjaUzytkownika() {

    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();
    uzytkownicy.push_back(uzytkownik);
    plikZUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");

}

void UzytkownikMenedzer::wypiszWszyskichUzytkownikow() {

    for(int i=0; i<uzytkownicy.size(); ++i) {
       cout<<uzytkownicy[i].pobierzID()<<endl;
       cout<<uzytkownicy[i].pobierzLogin()<<endl;
       cout<<uzytkownicy[i].pobierzHaslo()<<endl;

    }

}
int UzytkownikMenedzer::pobierzIdNowegoUzytkownika() {
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzID() + 1;
}
Uzytkownik UzytkownikMenedzer::podajDaneNowegoUzytkownika() {
    Uzytkownik uzytkownik;

    uzytkownik.ustawaID(pobierzIdNowegoUzytkownika());

    string login;

    do {
        cout << "Podaj login: ";
        cin>>login;
        uzytkownik.ustawLogin(login);
    } while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);

    string haslo;
    cout << "Podaj haslo: ";
    cin>>haslo;
    uzytkownik.ustawHaslo(haslo);

    return uzytkownik;
}
bool UzytkownikMenedzer::czyIstniejeLogin(string login){

    for(int i=0;i<uzytkownicy.size();++i){
        if(uzytkownicy[i].pobierzLogin()==login){
            cout<<endl<< "Istnieje uzytkownik o takim loginie." <<endl;
            return true;
        }
    }

    return false;

}
void UzytkownikMenedzer::wczytajUzytkownikowZPliku(){

    uzytkownicy=plikZUzytkownikami.wczytajUzytkownikowZPliku();

}
