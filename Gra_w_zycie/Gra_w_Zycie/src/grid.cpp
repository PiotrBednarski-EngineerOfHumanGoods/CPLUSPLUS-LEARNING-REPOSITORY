#include <raylib.h>
#include "grid.hpp"

void Grid::Draw()
{
    for(int row = 0; row < rows; row ++)
    {
        for(int column = 0; column < columns; column++)
        {
            // Rysowanie komórki - żywa: szara, martwa: ciemniejszy szary
            Color color = cells[row][column] ? Color{100, 100, 100, 255} : Color{40, 40, 40, 255};
            DrawRectangle(column * cellSize, row * cellSize, cellSize -1, cellSize -1, color);
        }
    }
}

void Grid::SetValue(int row, int column, int value)
{
    // Ustawienie wartości komórki, jeśli jest w granicach siatki
    if(IsWithinBounds(row, column))
    {
        cells[row][column] = value;
    }
}

int Grid::GetValue(int row, int column)
{
    // Pobranie wartości komórki, jeśli jest w granicach siatki
    if(IsWithinBounds(row, column))
    {
        return cells[row][column];
    }
    return 0;  // Zwrócenie 0 dla komórek poza granicami
}

bool Grid::IsWithinBounds(int row, int column)
{
    // Sprawdzenie czy podane współrzędne są w granicach siatki
    if(row >= 0 && row < rows && column >= 0 && column < columns)
    {
        return true;
    }
    return false;
}

void Grid::FillRandom()
{
    // Wypełnienie siatki losowymi wartościami (żywe komórki z prawdopodobieństwem 1/5)
    for(int row = 0; row < rows; row ++)
    {
        for(int column = 0; column < columns; column++)
        {
            int randomValue = GetRandomValue(0, 4);
            cells[row][column] = (randomValue == 4) ? 1 : 0;
        }
    }
}

void Grid::Clear()
{
    // Wyczyszczenie wszystkich komórek (ustawienie na 0)
    for(int row = 0; row < rows; row++)
    {
        for(int column = 0; column < columns; column++)
        {
            cells[row][column] = 0;
        }
    }
}

void Grid::ToggleCell(int row, int column)
{
    // Przełączenie stanu komórki (żywa <-> martwa)
    if(IsWithinBounds(row, column))
    {
        cells[row][column] = !cells[row][column];
    }
}