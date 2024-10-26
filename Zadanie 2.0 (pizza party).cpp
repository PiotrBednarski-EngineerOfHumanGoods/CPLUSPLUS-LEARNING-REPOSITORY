#include <iostream>
using namespace std;

int main() {
    int ilośćgości, ilośćkawałków;
    
    cout <<"Podaj ile przyszło gości: ";
    cin >> ilośćgości;
    cout <<"Podaj liczbę pokrojonych kawałków pizzy: ";
    cin >> ilośćkawałków;
    
    if (ilośćgości > 0) {
        int kawałkinagościa = ilośćkawałków / ilośćgości;
        int resztadlaorganizatora = ilośćkawałków % ilośćgości;
        
        cout << "Każdy gość otrzyma " << kawałkinagościa << " kawałków pizzy." << endl;
        cout << "Pozostałe kawałki dla organizatora to: " << resztadlaorganizatora << endl;
        
    } else {
        cout <<"Liczba gości nie może być równa 0." << endl;
        
    }
    
    return 0;
}