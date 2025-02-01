#include <vector>
#include <utility>
#include "simulation.hpp"

void Simulation::Draw()
{
    grid.Draw();  // Delegacja rysowania do obiektu grid
}

void Simulation::SetCellValue(int row, int column, int value)
{
    grid.SetValue(row, column, value);  // Ustawienie wartości komórki w głównej siatce
}

int Simulation::CountLiveNeighbors(int row, int column)
{
    int liveNeighbors = 0;
    // Definicja przesunięć dla wszystkich 8 sąsiadów
    std::vector<std::pair<int, int>> neighborOffsets =
    {
        {-1,0},  // Bezpośrednio nad
        {1, 0},  // Bezpośrednio pod
        {0, -1}, // Na lewo
        {0, 1},  // Na prawo
        {-1, -1}, // Po przekątnej lewo-góra
        {-1, 1},  // Po przekątnej prawo-góra
        {1, -1},  // Po przekątnej lewo-dół
        {1, 1}    // Po przekątnej prawo-dół
    };

    // Zliczenie żywych sąsiadów z uwzględnieniem zawijania planszy
    for(const auto& offset : neighborOffsets)
    {
        int neighborRow = (row + offset.first + grid.GetRows()) % grid.GetRows();
        int neighborColumn = (column + offset.second + grid.GetColumns()) % grid.GetColumns();
        liveNeighbors += grid.GetValue(neighborRow, neighborColumn);
    }
    return liveNeighbors;
}

void Simulation::Update()
{
    if(IsRunning())
    {
        // Aktualizacja stanu każdej komórki według zasad Conwaya
        for(int row = 0; row < grid.GetRows(); row++)
        {
            for(int column = 0; column < grid.GetColumns(); column++)
            {
                int liveNeighbors = CountLiveNeighbors(row, column);
                int cellValue = grid.GetValue(row, column);

                // Zasady dla żywej komórki
                if(cellValue == 1)
                {
                    if(liveNeighbors > 3 || liveNeighbors < 2)
                    {
                        tempGrid.SetValue(row, column, 0);  // Śmierć z samotności lub przeludnienia
                    }
                    else
                    {
                        tempGrid.SetValue(row, column, 1);  // Przeżycie
                    }
                }
                // Zasady dla martwej komórki
                else
                {
                    if(liveNeighbors == 3)
                    {
                        tempGrid.SetValue(row, column, 1);  // Narodziny
                    } 
                    else
                    {
                        tempGrid.SetValue(row, column, 0);  // Pozostaje martwa
                    }
                }
            }
        }
        grid = tempGrid;  // Aktualizacja głównej siatki
    }
}

void Simulation::ClearGrid()
{
    if(!IsRunning())
    {
        grid.Clear();  // Wyczyszczenie siatki tylko gdy symulacja jest zatrzymana
    }
}

void Simulation::CreateRandomState()
{
    if(!IsRunning())
    {
        grid.FillRandom();  // Losowe wypełnienie siatki tylko gdy symulacja jest zatrzymana
    }
}

void Simulation::ToggleCell(int row, int column)
{
    if(!IsRunning())
    {
        grid.ToggleCell(row, column);  // Przełączenie stanu komórki tylko gdy symulacja jest zatrzymana
    }
}