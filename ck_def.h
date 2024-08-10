#define __CK_DEF_H_

#define SDL_MAIN_HANDLED

#include <assert.h>
#include <fcntl.h>
#include <math.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdbool.h>

#define DELAY 3000

#include <SDL.h>
#include "SDL_main.h"

bool HD_res;

int WIDTH = 320;
int HEIGHT = 200;

SDL_Renderer* renderer;
SDL_Window* window;


//Checks if it's HD.
int HDresCheck()
{
    if (HD_res == true)
    {
        WIDTH = 1280;
        HEIGHT = 720;
    }   
}

//Initializes the Window
int WindowInit()
{
    
    HDresCheck();
    
    //Start SDL
    SDL_Init( SDL_INIT_EVERYTHING );
    
    //Start SDL Video
    SDL_Init( SDL_VIDEO );
    
    //Starts the Window
    window = SDL_CreateWindow("ZKeen", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);
    
    if (window = NULL)
    {
        printf("Oops... Something Happened, thus not giving us the window. Sorry...");
    }
    else
    {
        SDL_UpdateWindowSurface(window);
    }
}
