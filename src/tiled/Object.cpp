#include "Object.hpp"

using namespace tiled;

Object::Object()
{}

Object::~Object()
{}

void Object::setX(int x)
{
    p_x = x;
}

int Object::getX() const
{
    return p_x;
}

void Object::setY(int y)
{
    p_y = y;
}

int Object::getY() const
{
    return p_y;
}

void Object::setGId(int g_id)
{
    p_g_id = g_id;
}

int Object::getGId() const
{
    return p_g_id;
}

void Object::setWidth(int width)
{
    p_width = width;
}

int Object::getWidth() const
{
    return p_width;
}

void Object::setHeight(int height)
{
    p_height = height;
}

int Object::getHeight() const
{
    return p_height;
}

void Object::setVisibility(bool visibility)
{
    p_visibility = visibility;
}

const bool Object::getVisibility() const
{
    return p_visibility;
}

void Object::setRotation(float rotation)
{
    p_rotation = rotation;
}

float Object::getRotation() const
{
    return p_rotation;
}

void Object::setShape(Shape shape)
{
    p_shape = shape;
}

Object::Shape Object::getShape() const
{
    return p_shape;
}

void Object::setName(const std::string& name)
{
    p_name = name;
}

const std::string& Object::getName() const
{
    return p_name;
}

void Object::setPoints(const std::vector<Point>& points)
{
    p_points = points;
}

std::vector<Point>& Object::getPoints()
{
    return p_points;
}

const std::vector<Point>& Object::getPoints() const
{
    return p_points;
}

void Object::setType(const std::string& type)
{
    p_type = type;
}

const std::string& Object::getType() const
{
    return p_type;
}
