#include "Layer.hpp"

using namespace tiled;

void Layer::setWidth(int width)
{
    p_width = width;
}

int Layer::getWidth() const
{
    return p_width;
}

void Layer::setHeight(int height)
{
    p_height = height;
}

int Layer::getHeight() const
{
    return p_height;
}

void Layer::setX(int x)
{
    p_x = x;
}

int Layer::getX() const
{
    return p_x;
}

void Layer::setY(int y)
{
    p_y = y;
}

int Layer::getY() const
{
    return p_y;
}

void Layer::setOffsetX(int offset_x)
{
    p_offset_x = offset_x;
}

int Layer::getOffsetX() const
{
    return p_offset_x;
}

void Layer::setOffsetY(int offset_y)
{
    p_offset_y = offset_y;
}

int Layer::getOffsetY() const
{
    return p_offset_y;
}

void Layer::setVisibility(bool visibility)
{
    p_visibility = visibility;
}

bool Layer::getVisibility() const
{
    return p_visibility;
}

void Layer::setOpacity(float opacity)
{
    p_opacity = opacity;
}

float Layer::getOpacity() const
{
    return p_opacity;
}

void Layer::setType(LayerType type)
{
    p_type = type;
}

Layer::LayerType Layer::getType() const
{
    return p_type;
}

void Layer::setName(const std::string& name)
{
    p_name = name;
}

const std::string& Layer::getName() const
{
    return p_name;
}

void Layer::setProperties(const std::unordered_map<std::string, std::string>& properties)
{
    p_properties = properties;
}

std::unordered_map<std::string, std::string>& Layer::getProperties()
{
    return p_properties;
}

const std::unordered_map<std::string, std::string>& Layer::getProperties() const
{
    return p_properties;
}
