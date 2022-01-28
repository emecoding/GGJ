#pragma once
#include <iostream>

struct Vector2f
{
    Vector2f() : X(0.0f), Y(0.0f) {}
    Vector2f(float x, float y) : X(x), Y(y) {}

    float X, Y;

    void print()
    {
        std::cout << "X: " << X << ", Y: " << Y << std::endl;
    }
};