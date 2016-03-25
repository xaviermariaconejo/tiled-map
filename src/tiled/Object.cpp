#include "Object.hpp"

using namespace tiled;

Object::Object()
{
}

Object::~Object()
{
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

void setId(int id)
{
    p_id = id;
}

int getId() const
{
    return p_id;
}

void setGId(int g_id)
{
    p_g_id = g_id;
}

int getGId() const
{
    return p_g_id;
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
    return p_height;
}

void setVisibility(Visibility visibility)
{
    p_visibility = visibility;
}

const Visibility getVisibility() const
{
    return p_visibility;
}

void setRotation(float rotation)
{
    p_rotation = rotation;
}

float getRotation() const
{
    return p_rotation;
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
