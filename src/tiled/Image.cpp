#include "Image.hpp"

using namespace tiled;

Image::Image()
{
}

Image::~Image()
{
}

void Image::setId(int id)
{
    p_id = id;
}

int Image::getId() const
{
    return p_id;
}

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

void Image::setEncoding(Encoding encoding)
{
    p_encoding = encoding;
}

Image::Encoding Image::getEncoding() const
{
    return p_encoding;
}

void Image::setFormat(const std::string& format)
{
    p_format = format;
}

const std::string& Image::getFormat() const
{
    return p_format;
}

void Image::setSource(const std::string& source)
{
    p_source = source;
}

const std::string& Image::getSource() const
{
    return p_source;
}

void Image::setTrans(const std::string& trans)
{
    p_trans = trans;
}

const std::string& Image::getTrans() const
{
    return p_trans;
}

void Image::setCompression(const std::string& compression)
{
    p_compression = compression;
}

const std::string& Image::getCompression() const
{
    return p_compression;
}
