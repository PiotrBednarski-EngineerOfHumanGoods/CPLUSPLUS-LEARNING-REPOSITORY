#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Podaj trzy liczby całkowite: ";
    cin >> a >> b >> c;

    int max;
    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }

    cout << "Największa liczba to: " << max << endl;
    return 0;
}
