#include <raylib.h>  // Dołączenie biblioteki raylib do obsługi grafiki 2D
#include <iostream>  // Biblioteka do operacji wejścia/wyjścia
#include "simulation.hpp"  // Dołączenie własnego pliku nagłówkowego symulacji

int main() 
{
    // Definicja kolorów - granatowe tło i szare komórki
    Color BACKGROUND = {0, 0, 200, 255};  // Kolor granatowy (RGB + alpha)
    const int WINDOW_WIDTH = 1000;  // Szerokość okna w pikselach
    const int WINDOW_HEIGHT = 1000;  // Wysokość okna w pikselach
    const int CELL_SIZE = 10;  // Rozmiar pojedynczej komórki w pikselach
    int FPS = 12;  // Liczba klatek na sekundę (prędkość symulacji)

    // Inicjalizacja okna przy użyciu raylib
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Gra w Życie");
    SetTargetFPS(FPS);  // Ustawienie docelowej liczby klatek na sekundę
    
    // Utworzenie obiektu symulacji
    Simulation simulation{WINDOW_WIDTH, WINDOW_HEIGHT, CELL_SIZE};

    // Główna pętla gry
    while(WindowShouldClose() == false)  // Pętla działa dopóki nie zostanie zamknięte okno
    {
        // 1. Obsługa zdarzeń użytkownika
        if(IsMouseButtonDown(MOUSE_BUTTON_LEFT))  // Sprawdzenie czy lewy przycisk myszy jest wciśnięty
        {
            Vector2 mousePosition = GetMousePosition();  // Pobranie pozycji kursora
            int row = mousePosition.y / CELL_SIZE;  // Obliczenie wiersza siatki
            int column = mousePosition.x / CELL_SIZE;  // Obliczenie kolumny siatki
            simulation.ToggleCell(row, column);  // Przełączenie stanu komórki
        }

        // Obsługa klawiszy
        if(IsKeyPressed(KEY_ENTER))  // Start symulacji (ENTER)
        {
            simulation.Start();
            SetWindowTitle("Gra o życie trwa ...");
        }
        else if(IsKeyPressed(KEY_SPACE))  // Zatrzymanie symulacji (SPACJA)
        {
            simulation.Stop();
            SetWindowTitle("Gra w życie się zatrzymała.");
        }
        else if(IsKeyPressed(KEY_F))  // Przyspieszenie symulacji (F)
        {
            FPS += 2;
            SetTargetFPS(FPS);
        }
        else if(IsKeyPressed(KEY_S))  // Spowolnienie symulacji (S)
        {
            if(FPS > 5)
            {
                FPS -= 2;
                SetTargetFPS(FPS); 
            }
        }
        else if(IsKeyPressed(KEY_R))  // Losowe wypełnienie planszy (R)
        {
            simulation.CreateRandomState();
        }
        else if(IsKeyPressed(KEY_C))  // Wyczyszczenie planszy (C)
        {
            simulation.ClearGrid();
        }

        // 2. Aktualizacja stanu gry
        simulation.Update();

        // 3. Rysowanie
        BeginDrawing();  // Rozpoczęcie rysowania klatki
        ClearBackground(BACKGROUND);  // Wyczyszczenie tła
        simulation.Draw();  // Narysowanie stanu symulacji
        EndDrawing();  // Zakończenie rysowania klatki
    }

    CloseWindow();  // Zamknięcie okna po zakończeniu programu
}