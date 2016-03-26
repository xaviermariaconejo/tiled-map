#include "ImageLayer.hpp"

using namespace tiled;

ImageLayer::ImageLayer()
{
}

ImageLayer::~ImageLayer()
{
    delete p_image;
}

void ImageLayer::setImage(Image* image)
{
    p_image = image;
}

Image* ImageLayer::getImage()
{
    return p_image;
}

const Image* ImageLayer::getImage() const
{
    return p_image;
}
