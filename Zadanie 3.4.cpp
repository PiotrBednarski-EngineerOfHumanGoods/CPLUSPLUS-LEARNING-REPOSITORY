#include <iostream>

using namespace std;

int main() {
    int n;

    
    cout << "Podaj liczbę wierszy trójkąta Pascala: ";
    cin >> n;

    
    for (int i = 0; i < n; i++) {
        int liczba = 1; // Pierwsza liczba w wierszu zawsze wynosi 1
        for (int j = 0; j <= i; j++) {
            cout << liczba << " ";
            liczba = liczba * (i - j) / (j + 1); // Obliczenie kolejnej liczby
        }
        cout << endl; // Przejście do nowego wiersza
    }

    return 0;
}
