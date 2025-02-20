#pragma once

#include "vec3.h"

#include <iostream>

using color = vec3;

void write_color(std::ostream &out, const color &pixel_color)
{
    double r = pixel_color.x();
    double g = pixel_color.y();
    double b = pixel_color.z();

    int rbyte = static_cast<int>(255 * r);
    int gbyte = static_cast<int>(255 * g);
    int bbyte = static_cast<int>(255 * b);
    out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}