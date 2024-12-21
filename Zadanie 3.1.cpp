#include <iostream>
using namespace std;

int main() {
    float x, y;
    cout << "Podaj x: ";
    cin >> x;
    cout << "Podaj y: ";
    cin >> y;

    float suma = (int)((x + y + 0.005) * 100) / 100.0;
    float roznica = (int)((x - y + 0.005) * 100) / 100.0;
    float iloczyn = (int)((x * y + 0.005) * 100) / 100.0;

    cout << "\nWyniki:" << endl;
    cout << "Suma: " << suma << endl;
    cout << "Roznica: " << roznica << endl;
    cout << "Iloczyn: " << iloczyn << endl;

    if (y != 0) {
        float iloraz = (int)((x / y + 0.005) * 100) / 100.0;
        cout << "Iloraz: " << iloraz << endl;
    }
    else {
        cout << "Nie mozna dzielic przez zero!" << endl;
    }

    return 0;
}
