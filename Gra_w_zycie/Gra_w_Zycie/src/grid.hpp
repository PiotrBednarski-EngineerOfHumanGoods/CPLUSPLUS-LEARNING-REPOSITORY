#pragma once
#include <vector>

class Grid
{
    public:
    // Konstruktor inicjalizujący siatkę o zadanych wymiarach
    Grid(int width, int height, int cellSize)
    : rows(height/cellSize), columns(width/cellSize), cellSize(cellSize), cells(rows, std::vector<int>(columns, 0)){};
    
    void Draw();  // Metoda rysująca siatkę
    void SetValue(int row, int column, int value);  // Ustawienie wartości komórki
    int GetValue(int row, int column);  // Pobranie wartości komórki
    bool IsWithinBounds(int row, int column);  // Sprawdzenie czy komórka jest w granicach siatki
    int GetRows() {return rows;}  // Pobranie liczby wierszy
    int GetColumns() {return columns;}  // Pobranie liczby kolumn
    void FillRandom();  // Wypełnienie siatki losowymi wartościami
    void Clear();  // Wyczyszczenie siatki
    void ToggleCell(int row, int column);  // Przełączenie stanu komórki
    
    private:
    int rows;  // Liczba wierszy siatki
    int columns;  // Liczba kolumn siatki
    int cellSize;  // Rozmiar pojedynczej komórki
    std::vector<std::vector<int>> cells;  // Dwuwymiarowa tablica komórek
};
