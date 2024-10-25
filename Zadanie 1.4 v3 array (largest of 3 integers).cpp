#include <iostream>
using namespace std;

int main() {
    int liczby[3];
    
    cout << "Podaj trzy liczby całkowite: ";
    for (int i = 0; i < 3; i++) {
        cin >> liczby[i]; 
    }

    
    int najwieksza = liczby[0];

    
    for (int i = 1; i < 3; i++) {
        if (liczby[i] > najwieksza) {
            najwieksza = liczby[i]; 
        }
    }

    cout << "Największa liczba to: " << najwieksza << endl;
    return 0;
}
