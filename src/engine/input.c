#include <SDL3/SDL.h>
#include "input.h"

int numkeys; 

bool isKeyDown(SDL_Scancode scancode) {
    const bool* downKeys = SDL_GetKeyboardState(&numkeys);
    return downKeys[scancode];
}
