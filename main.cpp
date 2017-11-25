#include <iostream>
#include "SDL.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main() {

    SDL_Window *window = nullptr;
    SDL_Surface *screenSurface = nullptr;

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not be initialized! SDL Error: %s\n", SDL_GetError());
    } else {
        printf("SDL 2 initialized");
    }

    return 0;
}