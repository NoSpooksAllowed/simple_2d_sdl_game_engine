#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>

class Game {
private:
    bool isRunning;
    SDL_Window *window;
    SDL_Renderer *renderer;
public:
    Game();
    ~Game();
    int ticksLastFrame = 0;
    bool IsRunning() const;
    void Initialize(unsigned width, unsigned height);
    void ProcessInput();
    void Update();
    void Render();
    void Destroy();
};