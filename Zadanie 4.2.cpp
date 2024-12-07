#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Podaj liczbe elementow: ";
    cin >> n;

    if (n <= 0) {
        cout << "Liczba elementow musi byc wieksza od 0." << endl;
        return 1;
    }

    int tabela[n];

    for (int i = 0; i < n; i++) {
        cout << "Podaj Element[" << i << "]: ";
        cin >> tabela[i];
    }

    int max_count = 0;
    int najczestszy = tabela[0];

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (tabela[i] == tabela[j]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            najczestszy = tabela[i];
        }
    }

    cout << "Liczba elementow: " << n << "\n";
    cout << "Elementy: ";
    for (int i = 0; i < n; i++) {
        cout << tabela[i] << " ";
    }
    cout << "\nNajczesciej wystepujacy element: " << najczestszy << " (wystepuje " << max_count << " razy)" << "\n";

    return 0;
}
