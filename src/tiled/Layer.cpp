#include "Layer.hpp"

using namespace tiled;

virtual ~Layer()
{
}

void setWidth(int width)
{
    p_width = width;
}

int getWidth() const
{
    return p_width;
}

void setHeight(int height)
{
    p_height = height;
}

int getHeight() const
{
    return height;
}

void setX(int x)
{
    p_x = x;
}

int getX() const
{
    return p_x;
}

void setY(int y)
{
    p_y = y;
}

int getY() const
{
    return p_y;
}

void setOffsetX(int offset_x)
{
    p_offset_x = offset_x;
}

int getOffsetX() const
{
    return p_offset_x;
}

void setOffsetY(int offset_y)
{
    p_offset_y = offset_y;
}

int getOffsetY() const
{
    return p_offset_y;
}

void setVisibility(Visibility visibility)
{
    p_visibility = visibility;
}

const Visibility getVisibility() const
{
    return p_visibility;
}

void setEncoding(Encoding encoding)
{
    p_encoding = encoding;
}

Encoding getEncoding() const
{
    return p_encoding;
}

void setOpacity(float opacity)
{
    p_opacity = opacity;
}

float getOpacity() const
{
    return p_opacity;
}

void setName(const std::string& name)
{
    p_name = name;
}

const std::string& getName() const
{
    return p_name;
}

void setType(const std::string& type)
{
    p_type = type;
}

const std::string& getType() const
{
    return p_type;
}

void setCompression(const std::string& compression)
{
    p_compression = compression;
}

const std::string& getCompression() const
{
    return p_compression;
}

void setProperties(const std::unordered_map<std::string, std::string>& properties)
{
    p_properties = properties;
}

std::unordered_map<std::string, std::string>& getProperties()
{
    return p_properties;
}

const std::unordered_map<std::string, std::string>& getProperties() const
{
    return p_properties;
}
