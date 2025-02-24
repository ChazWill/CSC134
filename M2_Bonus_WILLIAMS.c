/*******************************************************************************************
*
*   raylib [core] examples - basic screen manager
*
*   NOTE: This example illustrates a very simple screen manager based on a states machines
*
*   Example originally created with raylib 4.0, last time updated with raylib 4.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2021-2024 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"
#include <stdlib.h>
#include <time.h>

#define TILE_SIZE 20
#define MAX_LENGTH 100

typedef struct {
    int x, y;
} Segment;

//------------------------------------------------------------------------------------------
// Types and Structures Definition
//------------------------------------------------------------------------------------------
typedef enum GameScreen { LOGO = 0, TITLE, GAMEPLAY, ENDING } GameScreen;

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "raylib - Snake Game");
    SetTargetFPS(10);

    GameScreen currentScreen = LOGO;

    // TODO: Initialize all required variables and load all required data here!
    int framesCounter = 0;// Useful to count frames
    
    Segment snake[MAX_LENGTH];
    int length = 1;
    snake[0] = (Segment){screenWidth / 2, screenHeight / 2};
         

    SetTargetFPS(12);               // Set desired framerate (frames-per-second)
    //--------------------------------------------------------------------------------------
    //ALL OUR VARIABLES
    int player_x = screenWidth / 2;
    int player_y = screenHeight / 2;
    int speed = 1.5; //movement speed
    
    int tileSize = 30; // Size of each square in the checkered pattern
    
     int dirX = TILE_SIZE, dirY = 0;
    
    Segment food;
    srand(time(0));
    food.x = (rand() % (screenWidth / TILE_SIZE)) * TILE_SIZE;
    food.y = (rand() % (screenHeight / TILE_SIZE)) * TILE_SIZE;

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        switch(currentScreen)
        {
            case LOGO:
            {
                // TODO: Update LOGO screen variables here!

                framesCounter++;    // Count frames

                // Wait for 2 seconds (60 frames) before jumping to TITLE screen
                if (framesCounter > 12)
                {
                    currentScreen = TITLE;
                }
            } break;
            case TITLE:
            {
                // TODO: Update TITLE screen variables here!

                // Press enter to change to GAMEPLAY screen
                if (IsKeyPressed(KEY_ENTER))
                {
                    currentScreen = GAMEPLAY;
                }
            } break;
            case GAMEPLAY:
            {
                if (IsKeyPressed(KEY_RIGHT) && dirX == 0) { dirX = TILE_SIZE; dirY = 0; }
                if (IsKeyPressed(KEY_LEFT) && dirX == 0) { dirX = -TILE_SIZE; dirY = 0; }
                if (IsKeyPressed(KEY_UP) && dirY == 0) { dirX = 0; dirY = -TILE_SIZE; }
                if (IsKeyPressed(KEY_DOWN) && dirY == 0) { dirX = 0; dirY = TILE_SIZE; }
                
                for (int i = length; i > 0; i--) {
                    snake[i] = snake[i - 1];
                }
                
                snake[0].x += dirX;
                snake[0].y += dirY;
                
                if (snake[0].x == food.x && snake[0].y == food.y) {
                    length++;
                    food.x = (rand() % (screenWidth / TILE_SIZE)) * TILE_SIZE;
                    food.y = (rand() % (screenHeight / TILE_SIZE)) * TILE_SIZE;
                }
                
                if (snake[0].x < 0 || snake[0].x >= screenWidth || snake[0].y < 0 || snake[0].y >= screenHeight) {
                    currentScreen = ENDING;
                    length = 1;
                    snake[0] = (Segment){screenWidth / 2, screenHeight / 2};
                }
                
                for (int i = 1; i < length; i++) {
                    if (snake[0].x == snake[i].x && snake[0].y == snake[i].y) {
                        currentScreen = ENDING;
                        length = 1;
                        snake[0] = (Segment){screenWidth / 2, screenHeight / 2};
                    }
                }
                break;
            case ENDING:
                if (IsKeyPressed(KEY_ENTER)) currentScreen = TITLE;
                break;
                
                
    
            } break;
            default: break;
        }
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            switch(currentScreen)
            {
                case LOGO:
                {
                    // TODO: Draw LOGO screen here!
                     DrawText("SNAKE GAME", 300, 250, 40, DARKBLUE);
                break;
                
                } break;
                case TITLE:
                {
                    DrawText("PRESS ENTER TO START", 250, 300, 30, DARKGREEN);
                break;

                } break;
                case GAMEPLAY:
                for (int y = 0; y < screenHeight; y += TILE_SIZE) {
                    for (int x = 0; x < screenWidth; x += TILE_SIZE) {
                        if ((x / TILE_SIZE + y / TILE_SIZE) % 2 == 0)
                            DrawRectangle(x, y, TILE_SIZE, TILE_SIZE, LIGHTGRAY);
                        else
                            DrawRectangle(x, y, TILE_SIZE, TILE_SIZE, DARKPURPLE);
                    }
                }
                DrawRectangle(food.x, food.y, TILE_SIZE, TILE_SIZE, RED);
                for (int i = 0; i < length; i++) {
                    DrawRectangle(snake[i].x, snake[i].y, TILE_SIZE, TILE_SIZE, DARKGREEN);
                }
                break;
                
                 case ENDING:
                DrawText("GAME OVER! PRESS ENTER TO RESTART", 150, 300, 30, DARKBLUE);
                break;
        
               
              
            }

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------

    // TODO: Unload all loaded data (textures, fonts, audio) here!

    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
