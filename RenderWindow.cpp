#include "RenderWindow.hpp"

RenderWindow::RenderWindow(const char *title, int width, int height) : window(NULL), renderer(NULL)
{
    window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
    if (window == NULL)
        std::cout << "Window failed to init... Error: " << SDL_GetError() << std::endl;
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL)
        std::cout << "Renderer failed to init... Error: " << SDL_GetError() << std::endl;
}

int RenderWindow::get_refresh_rate()
{
    int display_index = SDL_GetWindowDisplayIndex(window);

    SDL_DisplayMode mode;
    SDL_GetDisplayMode(display_index, 0, &mode);

    return mode.refresh_rate;
}

SDL_Texture *RenderWindow::load_texture(const char *file_path)
{
    SDL_Texture *tex = NULL;
    tex = IMG_LoadTexture(renderer, file_path);
    if (tex == NULL)
        std::cout << "Failed to load img: " << file_path << ". Error: " << SDL_GetError() << std::endl;
    else
        std::cout << "Loaded img: " << file_path << "." << std::endl;

    return tex;
}

void RenderWindow::render(Entity &entity)
{
    SDL_Rect src;
    src.x = entity.get_rect().x;
    src.y = entity.get_rect().y;
    src.w = entity.get_rect().w * 2;
    src.h = entity.get_rect().h * 2;

    SDL_Rect dst;
    dst.x = entity.get_position().X;
    dst.y = entity.get_position().Y;
    dst.w = entity.get_rect().w;
    dst.h = entity.get_rect().h;

    SDL_RenderCopy(renderer, entity.get_texture(), &src, &dst);
}

void RenderWindow::display()
{
    SDL_RenderPresent(renderer);
}

void RenderWindow::clear()
{
    SDL_RenderClear(renderer);
}

void RenderWindow::clean_up()
{
    SDL_DestroyWindow(window);
}