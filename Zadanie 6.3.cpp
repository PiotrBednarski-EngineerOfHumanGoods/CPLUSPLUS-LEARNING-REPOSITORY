#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Student {
    string imie;
    string nazwisko;
    int indeks;
};

bool porownajIndeksy(const Student& a, const Student& b) {
    return a.indeks < b.indeks;
}

int main() {
    vector<Student> studenci = {
        {"Leo", "Kowal", 72165},
        {"Maciej", "Demp", 783},
        {"Alicja", "Kolecka", 260000},
        {"Katarzyna", "Szczaw", 15}
    };

    cout << "Wektor przed sortowaniem:\n";
    for (const auto& student : studenci) {
        cout << student.indeks << " " << student.imie << " " << student.nazwisko << "\n";
    }

    sort(studenci.begin(), studenci.end(), porownajIndeksy);

    cout << "\nWektor posortowany:\n";
    for (const auto& student : studenci) {
        cout << student.indeks << " " << student.imie << " " << student.nazwisko << "\n";
    }

    return 0;
}
