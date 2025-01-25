#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double promien, pole;

    cout << "Podaj promien kola: ";
    cin >> promien;

    cout << "Pole kola wynosi: ";
    pole = 3.14159 * promien * promien;
    cout << fixed << setprecision(3) << pole << endl;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << setw(8) << pole << " ";
            pole += 3;
        }
        cout << endl;
    }

    return 0;
}