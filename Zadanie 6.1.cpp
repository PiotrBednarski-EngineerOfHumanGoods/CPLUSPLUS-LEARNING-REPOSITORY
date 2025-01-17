#include <iostream>
using namespace std;


int policz_liczby(int n);


int main() {
    int n;
    cout << "Podaj liczbe n: ";


    if (cin >> n) {
        if (n < 1) {
            cout << "Liczba musi byc dodatnia!" << endl;
        }
        else {
            int wynik = policz_liczby(n);
            cout << "Liczb spelniajacych warunki (liczby podzielne przez 5, ale nie podzielne przez 3) jest: " << wynik << endl;
        }
    }
    else {
        cout << "Podaj poprawna liczbe calkowita!" << endl;
    }

    return 0;
}


int policz_liczby(int n) {
    if (n < 1) {
        return 0;
    }

    int licznik = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0 && i % 3 != 0) {
            licznik++;
        }
    }
    return licznik;
}