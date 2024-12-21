#include <iostream>
using namespace std;

void rysujWiersz(int a) {
    for (int i = 0; i < a; ++i) {
        cout << "*";
    }
    cout << endl;
}

void rysujKolumne(int b) {
    for (int i = 0; i < b; ++i) {
        cout << "*" << endl;
    }
}

void wypelnionyProstokat(int a, int b) {
    for (int i = 0; i < b; ++i) {
        for (int j = 0; j < a; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

void obramowanyProstokat(int a, int b) {
    for (int i = 0; i < b; ++i) {
        for (int j = 0; j < a; ++j) {
            if (i == 0 || i == b - 1 || j == 0 || j == a - 1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void trojkatLewyDolny(int a) {
    for (int i = 1; i <= a; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

void trojkatPrawyGorny(int a) {
    for (int i = a; i > 0; --i) {
        for (int j = 0; j < a - i; ++j) {
            cout << " ";
        }
        for (int k = 0; k < i; ++k) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int a, b;

    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;

    cout << "\nWiersz o dlugosci a:\n";
    rysujWiersz(a);

    cout << "\nKolumna o dlugosci b:\n";
    rysujKolumne(b);

    cout << "\nWypelniony prostokat o wymiarach a x b:\n";
    wypelnionyProstokat(a, b);

    cout << "\nObramowany prostokat o wymiarach a x b:\n";
    obramowanyProstokat(a, b);

    cout << "\nTrojkat prostokatny rownoramienny (lewy dolny rog):\n";
    trojkatLewyDolny(a);

    cout << "\nTrojkat prostokatny rownoramienny (prawy gorny rog):\n";
    trojkatPrawyGorny(a);

    return 0;
}
