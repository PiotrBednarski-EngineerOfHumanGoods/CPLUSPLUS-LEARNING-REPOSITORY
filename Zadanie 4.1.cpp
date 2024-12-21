#include <iostream>

using namespace std;

int main() {
   int n;
   
   cout << "Podaj liczbę elementów tablicy: ";
   cin >> n;

   while (n <= 0) {
       cout << "Liczba elementów musi być dodatnia. Podaj ponownie: ";
       cin.clear();
       while (cin.get() != '\n');
       cin >> n;
   }

   int* tablica = new int[n];

   cout << "Podaj " << n << " liczb całkowitych:" << endl;
   for (int i = 0; i < n; ++i) {
       cout << "Element [" << i << "]: ";
       cin >> tablica[i];
   }

   int largest = tablica[0];
   for (int i = 1; i < n; ++i) {
       if (tablica[i] > largest) {
           largest = tablica[i];
       }
   }

   cout << "Największy element tablicy: " << largest << endl;

   delete[] tablica;

   return 0;
}
