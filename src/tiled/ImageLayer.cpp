#include "ImageLayer.hpp"

using namespace tiled;

ImageLayer::ImageLayer()
{
}

ImageLayer::~ImageLayer() override
{
    delete p_image;
}

void setImage(const Image* image)
{
    p_image = image;
}

Image* getImage()
{
    return p_image;
}

const Image* getImage() const
{
    return p_image;
}
