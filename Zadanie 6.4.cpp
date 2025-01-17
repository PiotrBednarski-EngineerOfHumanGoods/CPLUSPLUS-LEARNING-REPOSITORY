#include <iostream>
#include <string>

using namespace std;

int main() {
    string tekst, wynik = "";
    int n;

    cout << "Podaj tekst: ";
    cin >> tekst;

    cout << "Podaj liczbę powtorzen: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        wynik += tekst;
    }

    cout << "Wynikowy tekst: " << wynik << endl;

    return 0;
}
