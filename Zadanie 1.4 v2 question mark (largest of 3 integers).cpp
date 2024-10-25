#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Podaj trzy liczby całkowite: ";
    cin >> a >> b >> c;

    int najwieksza = (a >= b) ? ((a >= c) ? a : c) : ((b >= c) ? b : c);

    cout << "Największa liczba to: " << najwieksza << endl;
    return 0;
}
