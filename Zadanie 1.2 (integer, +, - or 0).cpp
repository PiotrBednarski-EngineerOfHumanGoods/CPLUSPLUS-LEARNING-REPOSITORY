#include <iostream>
using namespace std;

int main() {
    int liczba;

    cout << "Podaj liczbę całkowitą: ";
    cin >> liczba;

    if (liczba > 0) {
        cout << "Liczba jest dodatnia." << endl;
    } else if (liczba < 0) {
        cout << "Liczba jest ujemna." << endl;
    } else {
        cout << "Liczba jest równa 0." << endl;
    }

    return 0;
}
