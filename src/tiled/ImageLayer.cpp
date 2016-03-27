#include "ImageLayer.hpp"
#include "Image.hpp"

using namespace tiled;

ImageLayer::ImageLayer():
p_image(nullptr)
{
    p_type = Layer::LayerType::IMAGE_LAYER;
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
