
#include <iostream>
using namespace std;

unsigned long long silnia(int n) {
    if (n <= 1) return 1;
    return n * silnia(n - 1);
}

int main() {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (liczba < 0) {
        cout << "Liczba musi byc nieujemna" << endl;
        return 1;
    }

    unsigned long long wynik = silnia(liczba);

    cout << "Silnia " << liczba << " wynosi: " << wynik << endl;
    cout << "Wynik jest podzielny przez:" << endl;

    if (wynik % 2 == 0) cout << "2" << endl;
    if (wynik % 3 == 0) cout << "3" << endl;
    if (wynik % 5 == 0) cout << "5" << endl;
    if (wynik % 11 == 0) cout << "11" << endl;

    return 0;
}