#include <iostream>
using namespace std;

int main() {
    int wiersze, kolumny;
    char wybor, wybor_parzystosci;
    
    cout << "Program do odbicia tablicy w osi pionowej\n\n";
    cout << "Wybierz sposob dzialania programu:\n";
    cout << "1. Wymus parzysta liczbe kolumn (zalecane dla dokladnego odbicia)\n";
    cout << "2. Pozwol na nieparzysta liczbe kolumn (odbicie bedzie niedokladne)\n";
    cout << "Wybierz opcje (1 lub 2): ";
    cin >> wybor_parzystosci;

    if (wybor_parzystosci != '1' && wybor_parzystosci != '2') {
        cout << "Nieprawidlowy wybor!" << endl;
        return 1;
    }

    if (wybor_parzystosci == '2') {
        cout << "\nUWAGA: Przy nieparzystej liczbie kolumn:\n";
        cout << "1. Kolumna srodkowa moze pozostac bez zmian\n";
        cout << "2. Elementy w kolumnie srodkowej moga zostac podzielone przez 2\n";
        cout << "\nWybierz opcje dla kolumny srodkowej (1 lub 2): ";
        cin >> wybor;
    }
    
    cout << "\nPodaj liczbe wierszy: ";
    cin >> wiersze;
    cout << "Podaj liczbe kolumn: ";
    cin >> kolumny;
    

    if (wiersze <= 0 || kolumny <= 0) {
        cout << "Nieprawidlowy rozmiar tablicy!" << endl;
        return 1;
    }

 
    if (wybor_parzystosci == '1' && kolumny % 2 != 0) {
        cout << "\nBLAD: Wymagana jest parzysta liczba kolumn!\n";
        cout << "Powod: Dokladne odbicie lustrzane wymaga parzystej liczby kolumn,\n";
        cout << "poniewaz kazdy element musi miec swoj odpowiednik po drugiej stronie osi.\n";
        cout << "Przy nieparzystej liczbie kolumn srodkowa kolumna nie ma pary.\n";
        return 1;
    }
    

    double** tablica = new double*[wiersze];
    for(int i = 0; i < wiersze; i++) {
        tablica[i] = new double[kolumny];
    }
    

    cout << "Tablica wejsciowa:" << endl;
    for(int i = 0; i < wiersze; i++) {
        for(int j = 0; j < kolumny; j++) {
            cin >> tablica[i][j];
        }
    }
    

    if (kolumny % 2 != 0 && wybor == '2') {
        int srodkowa = kolumny / 2;
        for(int i = 0; i < wiersze; i++) {
            tablica[i][srodkowa] /= 2.0;
        }
    }
    

    for(int i = 0; i < wiersze; i++) {
        for(int j = 0; j < kolumny/2; j++) {
            double temp = tablica[i][j];
            tablica[i][j] = tablica[i][kolumny-1-j];
            tablica[i][kolumny-1-j] = temp;
        }
    }
    

    cout << "\nTablica wyjsciowa:" << endl;
    for(int i = 0; i < wiersze; i++) {
        for(int j = 0; j < kolumny; j++) {
            cout << tablica[i][j] << "\t";
        }
        cout << endl;
    }
    

    for(int i = 0; i < wiersze; i++) {
        delete[] tablica[i];
    }
    delete[] tablica;
    
    return 0;
}