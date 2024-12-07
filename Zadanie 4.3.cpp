#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main() {
    const int size = 10;
    int tab[size][size] = {0};

    for (int i = 0; i < size; i++) {
        tab[i][0] = i;
        tab[i][1] = i + i;
        tab[i][2] = i * i;
        tab[i][3] = i + 3;
        tab[i][4] = i - 4;
    }

    cout << "Tablica 10x10:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << setw(5) << tab[i][j];
        }
        cout << endl;
    }

    cout << "\nNacisnij dowolny klawisz, aby zakonczyc...";
    getch();

    return 0;
}
