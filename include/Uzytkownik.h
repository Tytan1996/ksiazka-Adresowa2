#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H

#include <iostream>


using namespace std;

class Uzytkownik {

    int id;
    string login;
    string haslo;
public:
    void ustawaID(int noweID);
    void ustawLogin(string nowyLogin);
    void ustawHaslo(string noweHaslo);

    int pobierzID();
    string pobierzLogin();
    string pobierzHaslo();

protected:

private:
};

#endif // UZYTKOWNIK_H
