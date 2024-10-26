#include <iostream>
using namespace std;

int main() {
    int ilośćgości, ilośćkawałków;

    cout << "Podaj ile przyszło gości: ";
    cin >> ilośćgości;

    // Walidacja wejścia
    if (ilośćgości <= 0) {
        cout << "Liczba gości nie może być równa 0." << endl;
        return 1; // Zakończ program
    }

    cout << "Podaj liczbę kawałków pizzy: ";
    cin >> ilośćkawałków;

    if (ilośćkawałków < 0) {
        cout << "Liczba kawałków pizzy nie może być ujemna." << endl;
        return 1; // Zakończ program
    }

    if (ilośćkawałków >= ilośćgości) {
        int kawałkinagościa = ilośćkawałków / ilośćgości;
        int resztadlaorganizatora = ilośćkawałków % ilośćgości;

        cout << "Każdy gość otrzyma " << kawałkinagościa << " kawałków pizzy." << endl;
        cout << "Pozostałe kawałki dla organizatora to: " << resztadlaorganizatora << endl;
    } else {
        // Oblicz, ile pizz potrzeba, aby każdy gość mógł otrzymać przynajmniej 1 kawałek
        int kawałkówPotrzebnych = ilośćgości; // Każdy gość dostaje przynajmniej 1 kawałek
        int pizzyPotrzebne = (kawałkówPotrzebnych + 7) / 8; // Zaokrąglij w górę

        cout << "Za mało kawałków pizzy dla gości!" << endl;
        cout << "Potrzebujesz " << pizzyPotrzebne << " pizz, aby każdy gość mógł otrzymać przynajmniej 1 kawałek." << endl;
    }

    return 0;
}
