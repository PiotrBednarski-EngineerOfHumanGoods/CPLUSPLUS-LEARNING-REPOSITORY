#pragma once
#include "grid.hpp"

class Simulation
{
    public:
    // Konstruktor inicjalizujący symulację
    Simulation(int width, int height, int cellSize)
    : grid(width, height, cellSize), tempGrid(width, height, cellSize), run(false) {};
    
    void Draw();  // Rysowanie aktualnego stanu symulacji
    void SetCellValue(int row, int column, int value);  // Ustawienie wartości komórki
    int CountLiveNeighbors(int row, int column);  // Zliczenie żywych sąsiadów
    void Update();  // Aktualizacja stanu symulacji
    bool IsRunning() {return run;}  // Sprawdzenie czy symulacja jest uruchomiona
    void Start() {run = true;}  // Uruchomienie symulacji
    void Stop() {run = false;}  // Zatrzymanie symulacji
    void ClearGrid();  // Wyczyszczenie planszy
    void CreateRandomState();  // Utworzenie losowego stanu
    void ToggleCell(int row, int column);  // Przełączenie stanu komórki
    
    private:
    Grid grid;  // Główna siatka
    Grid tempGrid;  // Tymczasowa siatka do obliczania następnego stanu
    bool run;  // Flaga określająca czy symulacja jest uruchomiona
};