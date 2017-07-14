#ifndef TEXTURE_HPP
#define TEXTURE_HPP

#ifdef __linux__ // Linux
#include <SDL2/SDL.h> //  SDL library
#include <SDL2/SDL_image.h>
#include <iostream>
#endif

#ifdef _WIN32 || _WIN64 // Windows
#include "SDL.h" //  SDL library
#include "SDL_image.h" // SDL Image
#include <iostream>
#endif

class Texture
{
public:
    bool load(std::string fileName, SDL_Renderer* pRenderer);

    void draw(int x, int y, int width, int height, SDL_Renderer* pRenderer, SDL_RendererFlip flip = SDL_FLIP_NONE);

private:
    SDL_Texture* m_texture;
};

#endif
