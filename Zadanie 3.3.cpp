#include <iostream>

using namespace std;


double sqrt(double liczba) {
    double wynik = liczba, epsilon = 0.00001;
    while ((wynik * wynik - liczba) > epsilon || (wynik * wynik - liczba) < -epsilon) {
        wynik = (wynik + liczba / wynik) / 2.0;
    }
    return wynik;
}

int main() {
    double A, B, C;

    
    cout << "Postać równania kwadratowego: Ax^2 + Bx + C = 0" << endl;


    cout << "Podaj współczynniki A, B i C: ";
    cin >> A >> B >> C;

    
    cout << "Równanie: " << A << "x^2 + " << B << "x + " << C << " = 0" << endl;

    
    if (A == 0) {
        cout << "To nie jest równanie kwadratowe!" << endl;
    } else {
        
        double delta = B * B - 4 * A * C;
        cout << "Delta: " << delta << endl;

        
        if (delta > 0) {
            double x1 = (-B + sqrt(delta)) / (2 * A);
            double x2 = (-B - sqrt(delta)) / (2 * A);
            cout << "Pierwiastki: x1 = " << x1 << ", x2 = " << x2 << endl;
        } else if (delta == 0) {
            double x = -B / (2 * A);
            cout << "Pierwiastek podwójny: x = " << x << endl;
        } else {
            cout << "Brak rzeczywistych pierwiastków." << endl;
        }
    }

    return 0;
}
