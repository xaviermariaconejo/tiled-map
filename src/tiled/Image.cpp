#include "Image.hpp"

using namespace tiled;

Image::Image()
{}

Image::~Image()
{}

void Image::setWidth(int width)
{
    p_width = width;
}

int Image::getWidth() const
{
    return p_width;
}

void Image::setHeight(int height)
{
    p_height = height;
}

int Image::getHeight() const
{
    return p_height;
}

void Image::setSource(const std::string& source)
{
    p_source = source;
}

const std::string& Image::getSource() const
{
    return p_source;
}

void Image::setTransparentColor(const Color& transparent_color)
{
    p_transparent_color = transparent_color;
}

const Color& Image::getTransparentColor() const
{
    return p_transparent_color;
}
