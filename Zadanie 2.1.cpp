#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "Podaj liczbe n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        int sumaPodciagu = 0;
        for (int j = 1; j <= i; ++j) {
            sumaPodciagu += j; // Dodajemy liczby do sumy dla każdego podciągu
        }
        suma += sumaPodciagu; // Dodajemy sumę podciągu do całkowitej sumy
        cout << "Suma podciagu dla i = " << i << " wynosi: " << sumaPodciagu << endl;
    }

    cout << "Suma szeregu wynosi: " << suma << endl;

    return 0;
}
