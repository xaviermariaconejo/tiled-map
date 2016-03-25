#ifndef TILED_IMAGELAYER_HPP
#define TILED_IMAGELAYER_HPP

namespace tiled
{
class ImageLayer : Layer
{
public:
    ImageLayer();
    ~ImageLayer();

    void setImage(Image&& image);
    void setImage(const Image& image);
    Image& getImage();
    const Image& getImage() const;

private:
    Image p_image;
}
}
#endif
