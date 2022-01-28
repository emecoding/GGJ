#include <iostream>
#include <vector>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "RenderWindow.hpp"
#include "Utils.hpp"
#include "Entity.hpp"
#include "Player.hpp"

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

void update_and_render_entities(std::vector<Entity> &entities, RenderWindow window)
{
    for (Entity entity : entities)
    {
        entity.update();
        window.render(entity);
    }
}

void update_and_render_players(std::vector<Player> &players, RenderWindow window)
{
    for (Player player : players)
    {
        player.update();
        window.render(player);
    }
}

int main(int, char **)
{
    if (init() == -1)
        return -1;

    RenderWindow window("GGJ", 1280, 736);

    std::vector<Entity> entities = {};
    std::vector<Player> players = {Player(Vector2f(200, 0), window.load_texture("Grass_block.png"), true),
                                   Player(Vector2f(100, 100), window.load_texture("Grass_block.png"), false)};

    int current_player = 0;

    SDL_Event event;

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
                    if (event.key.keysym.sym == SDLK_SPACE)
                    {
                        current_player++;
                        if (current_player >= players.size())
                            current_player = 0;
                    }
                    players[current_player].move(event.key.keysym.sym);
                }
                if (event.type == SDL_KEYUP)
                {
                    players[current_player].key_up(event.key.keysym.sym);
                }
            }

            utils::accumulator -= utils::time_step;
        }

        window.clear();
        update_and_render_entities(entities, window);
        update_and_render_players(players, window);
        window.display();

        utils::perform_delay(window);
    }

    utils::quit(window);
    return 0;
}
