#include <raylib.h>
#include <iostream>
#include "simulation.hpp"

int main() 
{
    Color GREY = {29, 29, 29, 255}; 
    const int WINDOW_WIDTH = 1000;
    const int WINDOW_HEIGHT = 1000;
    const int CELL_SIZE = 10;
    int FPS = 12;

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Gra w Życie");
    SetTargetFPS(FPS); 
    Simulation simulation{WINDOW_WIDTH, WINDOW_HEIGHT, CELL_SIZE};

    //Pętla Symulacji
    while(WindowShouldClose() == false)
    {
        //1.Obsluga zdarzen
        if(IsMouseButtonDown(MOUSE_BUTTON_LEFT))
        {
            Vector2 mousePosition = GetMousePosition();
            int row = mousePosition.y / CELL_SIZE;
            int column = mousePosition.x / CELL_SIZE;
            simulation.ToggleCell(row, column);
        }
        if(IsKeyPressed(KEY_ENTER))
        {
            simulation.Start();
            SetWindowTitle("Gra o życie trwa ...");
        }
        else if(IsKeyPressed(KEY_SPACE))
        {
            simulation.Stop();
            SetWindowTitle("Gra w życie się zatrzymała.");
        }
        else if(IsKeyPressed(KEY_F))
        {
            FPS += 2;
            SetTargetFPS(FPS);
        }
        else if(IsKeyPressed(KEY_S))
        {
            if(FPS > 5)
            {
                FPS -= 2;
                SetTargetFPS(FPS); 
            }
        }
        else if(IsKeyPressed(KEY_R))
        {
            simulation.CreateRandomState();
        }
        else if(IsKeyPressed(KEY_C))
        {
            simulation.ClearGrid();
        }
        //2.Uaktualnienie stanu
        simulation.Update();

        //3.Rysowanie
        BeginDrawing();
        ClearBackground(GREY);
        simulation.Draw();
        EndDrawing();
  
    }

    CloseWindow();
}
