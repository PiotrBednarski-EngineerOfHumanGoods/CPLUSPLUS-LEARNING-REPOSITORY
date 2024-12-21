#include <iostream>
using namespace std;

int main() {
    int miesiac;
    cout << "Podaj numer miesiaca (1-12): ";
    cin >> miesiac;

    if (miesiac < 1 || miesiac > 12) {
        cout << "Podana liczba jest poza zakresem." << endl;
        return 0;
    }

    string nazwaMiesiaca;
    int liczbaDni;
    bool sloneczny;

    switch (miesiac) {
        case 1: nazwaMiesiaca = "Styczen"; liczbaDni = 31; sloneczny = false; break;
        case 2: nazwaMiesiaca = "Luty"; liczbaDni = 28; sloneczny = false; break;
        case 3: nazwaMiesiaca = "Marzec"; liczbaDni = 31; sloneczny = false; break;
        case 4: nazwaMiesiaca = "Kwiecien"; liczbaDni = 30; sloneczny = true; break;
        case 5: nazwaMiesiaca = "Maj"; liczbaDni = 31; sloneczny = true; break;
        case 6: nazwaMiesiaca = "Czerwiec"; liczbaDni = 30; sloneczny = true; break;
        case 7: nazwaMiesiaca = "Lipiec"; liczbaDni = 31; sloneczny = true; break;
        case 8: nazwaMiesiaca = "Sierpien"; liczbaDni = 31; sloneczny = true; break;
        case 9: nazwaMiesiaca = "Wrzesien"; liczbaDni = 30; sloneczny = true; break;
        case 10: nazwaMiesiaca = "Pazdziernik"; liczbaDni = 31; sloneczny = false; break;
        case 11: nazwaMiesiaca = "Listopad"; liczbaDni = 30; sloneczny = false; break;
        case 12: nazwaMiesiaca = "Grudzien"; liczbaDni = 31; sloneczny = false; break;
    }

    cout << "Miesiac: " << nazwaMiesiaca << endl;
    cout << "Liczba dni: " << liczbaDni << endl;
    cout << "Pogoda: " << (sloneczny ? "Slonecznie" : "Pochmurno") << endl;

    return 0;
}
