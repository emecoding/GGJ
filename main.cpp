#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "RenderWindow.hpp"
#include "Utils.hpp"
#include "Entity.hpp"

int init()
{
    if (SDL_Init(SDL_INIT_VIDEO) > 0)
    {
        std::cout << "SDL2 failed to init... Error: " << SDL_GetError() << std::endl;
        return -1;
    }
    if (!(IMG_Init(IMG_INIT_PNG)))
    {
        std::cout << "IMG_Init failed... Error: " << SDL_GetError() << std::endl;
        return -1;
    }

    return 0;
}

int main(int, char **)
{
    if (init() == -1)
        return -1;

    RenderWindow window("GGJ", 1280, 736);

    SDL_Event event;

    Entity e(Vector2f(0, 0), window.load_texture("Grass_block.png"));

    while (utils::game_running)
    {
        while (utils::can_poll_events())
        {
            while (SDL_PollEvent(&event))
            {
                if (event.type == SDL_QUIT)
                    utils::game_running = false;
                if (event.type == SDL_KEYDOWN)
                {
                    if (event.key.keysym.sym == SDLK_ESCAPE)
                        utils::game_running = false;
                }
            }

            utils::accumulator -= utils::time_step;
        }

        window.clear();
        window.render(e);
        //UPDATE AND RENDER ENTITIES
        window.display();

        utils::perform_delay(window);
    }

    utils::quit(window);
    return 0;
}
