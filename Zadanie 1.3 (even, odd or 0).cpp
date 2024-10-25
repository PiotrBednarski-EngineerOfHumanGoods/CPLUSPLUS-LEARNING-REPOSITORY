#include <iostream>
using namespace std;

int main() {
    int liczba;

    cout << "Podaj liczbę całkowitą: ";
    cin >> liczba;

    if (liczba == 0) {
        cout << "Liczba jest równa 0." << endl;
    } else if (liczba % 2 == 0) {
        cout << "Liczba jest parzysta." << endl;
    } else {
        cout << "Liczba jest nieparzysta." << endl;
    }

    return 0;
}
