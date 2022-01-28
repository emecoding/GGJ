#pragma once
#include <SDL2/SDL.h>

namespace utils
{
    inline float hire_time_in_seconds()
    {
        float t = SDL_GetTicks();
        t *= 0.001;

        return t;
    }

    const float time_step = 0.01;
    float accumulator = 0.0f;
    float current_time = hire_time_in_seconds();

    bool game_running = true;

    SDL_Event event;

    int calculate_time()
    {
        int start_ticks = SDL_GetTicks();

        float new_time = hire_time_in_seconds();
        float frame_time = new_time - current_time;
        current_time = new_time;
        accumulator += frame_time;

        return start_ticks;
    }

    bool can_poll_events()
    {
        return accumulator >= time_step;
    }

    void perform_delay(RenderWindow window)
    {
        const float alpha = accumulator / time_step;
        int frame_ticks = SDL_GetTicks() - calculate_time();

        if (frame_ticks < 1000 / window.get_refresh_rate())
            SDL_Delay(1000 / window.get_refresh_rate() - frame_ticks);
    }

    void quit(RenderWindow window)
    {
        window.clean_up();
        SDL_Quit();
    }

}