#include <iostream>
#include "SDL.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char *args[]) {

    SDL_Window *window = nullptr;
    SDL_Surface *screenSurface = nullptr;

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not be initialized! SDL Error: %s\n", SDL_GetError());
    } else {
        printf("SDL 2 initialized");
        window = SDL_CreateWindow("SDL Sample", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
                                  SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

        if (window == nullptr) {
            printf("Window could not be created! SDL_ERROR: %s\n", SDL_GetError());
        } else {
            screenSurface = SDL_GetWindowSurface(window);

            SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xAA, 0x88));

            SDL_UpdateWindowSurface(window);

            SDL_Delay(2000);
        }
    }

    SDL_DestroyWindow(window);

    SDL_Quit();

    return 0;
}