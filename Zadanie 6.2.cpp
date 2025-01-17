#include <iostream>
#include <string>
using namespace std;

struct Uczen {
    string imie;
    int informatyka;
    int matematyka;
    int biologia;
    int polski;
};

void pokaz_ocene(Uczen uczniowie[], int numer_ucznia, int przedmiot) {
    numer_ucznia--; 
    string nazwa_przedmiotu;
    int ocena;

    switch (przedmiot) {
    case 0:
        nazwa_przedmiotu = "informatyki";
        ocena = uczniowie[numer_ucznia].informatyka;
        break;
    case 1:
        nazwa_przedmiotu = "matematyki";
        ocena = uczniowie[numer_ucznia].matematyka;
        break;
    case 2:
        nazwa_przedmiotu = "biologii";
        ocena = uczniowie[numer_ucznia].biologia;
        break;
    case 3:
        nazwa_przedmiotu = "jez. polskiego";
        ocena = uczniowie[numer_ucznia].polski;
        break;
    }
    cout << "Uczen: " << uczniowie[numer_ucznia].imie << ", ocena z " << nazwa_przedmiotu << ": " << ocena << endl;
}

int main() {
    Uczen uczniowie[6];


    for (int i = 0; i < 6; i++) {
        cout << "Podaj imie ucznia nr " << i + 1 << ": ";
        cin >> uczniowie[i].imie;

        cout << "Podaj ocene z informatyki: ";
        cin >> uczniowie[i].informatyka;

        cout << "Podaj ocene z matematyki: ";
        cin >> uczniowie[i].matematyka;

        cout << "Podaj ocene z biologii: ";
        cin >> uczniowie[i].biologia;

        cout << "Podaj ocene z jezyka polskiego: ";
        cin >> uczniowie[i].polski;

        cout << endl;
    }


    int liczba_zapytan;
    cout << "Podaj liczbe zapytan: ";
    cin >> liczba_zapytan;

    for (int i = 0; i < liczba_zapytan; i++) {
        int numer_ucznia, numer_przedmiotu;

        cout << "Podaj nr ucznia [1..6]: ";
        cin >> numer_ucznia;

        cout << "Podaj nr przedmiotu [0..3]: ";
        cin >> numer_przedmiotu;

        pokaz_ocene(uczniowie, numer_ucznia, numer_przedmiotu);
    }

    return 0;
}