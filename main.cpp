#include <iostream>
#include <sstream>

int main()
{
    constexpr int image_width = 256;
    constexpr int image_height = 256;
    constexpr float inv_width = 1.0f / image_width;
    constexpr float inv_height = 1.0f / image_height;

    std::ostringstream oss;
    oss << "P3\n"
        << image_width << ' ' << image_height << "\n256\n";

    for (int j = 0; j < image_height; j++)
    {
        float g = j * inv_height;
        int ig = static_cast<int>(g * 256);
        for (int i = 0; i < image_width; i++)
        {
            float r = i * inv_width;
            int ir = static_cast<int>(r * 256);
            float b = 1.0;
            int ib = static_cast<int>(b * 256);
            oss << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }
    std::cout << oss.str();
}