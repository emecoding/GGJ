#include <iostream>
#include <vector>
#include <tuple>
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

std::vector<SDL_Texture *> get_player_idle_frames(RenderWindow window)
{
    std::vector<SDL_Texture *> idle_frames = {};

    idle_frames.push_back(window.load_texture("res/Player/Player_idle01.png"));
    idle_frames.push_back(window.load_texture("res/Player/Player_idle02.png"));
    idle_frames.push_back(window.load_texture("res/Player/Player_idle03.png"));

    return idle_frames;
}

auto load_level(int level, RenderWindow window)
{
    std::vector<SDL_Texture *> player_idle_frames = get_player_idle_frames(window);

    std::vector<Entity> entities = {};
    std::vector<Player> players = {Player(Vector2f(100, 0), window.load_texture("res/Player/Player_idle01.png"), true, 0, player_idle_frames), Player(Vector2f(200, 100), window.load_texture("res/Player/Player_idle01.png"), false, 1, player_idle_frames)};

    struct es
    {
        std::vector<Entity> entities;
        std::vector<Player> players;
    };

    return es{entities, players};
}

int main(int, char **)
{
    if (init() == -1)
        return -1;

    RenderWindow window("GGJ", 1280, 736);

    int current_player = 0;
    int current_level = 0;

    bool just_changed_level = false;

    std::vector<Entity>
        entities = {};
    std::vector<Player> players = {};

    auto es = load_level(current_level, window);
    entities = es.entities;
    players = es.players;

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
                        if (current_player >= 2)
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

        if (players[current_player].collided_with_other_player(players) && just_changed_level == false)
        {
            current_level++;
            auto es = load_level(current_level, window);
            entities = es.entities;
            players = es.players;
            just_changed_level = true;
        }
        else
            just_changed_level = false;

        window.clear();
        update_and_render_entities(entities, window);
        update_and_render_players(players, window);
        window.display();

        utils::perform_delay(window);
    }

    utils::quit(window);
    return 0;
}
