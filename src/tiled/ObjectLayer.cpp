#include "ObjectLayer.hpp"

using namespace tiled;

ObjectLayer::ObjectLayer()
{
}

ObjectLayer::~ObjectLayer()
{
}

void ObjectLayer::setDrawOrder(DrawOrder draw_order)
{
    p_draw_order = draw_order;
}

ObjectLayer::DrawOrder ObjectLayer::getDrawOrder() const
{
    return p_draw_order;
}

void ObjectLayer::setColor(const Color& color)
{
    p_color = color;
}

const Color& ObjectLayer::getColor() const
{
    return p_color;
}

void ObjectLayer::setObjects(const std::vector<Object*>& Objects)
{
    p_objects = Objects;
}

std::vector<Object*>& ObjectLayer::getObjects()
{
    return p_objects;
}

const std::vector<Object*>& ObjectLayer::getObjects() const
{
    return p_objects;
}
