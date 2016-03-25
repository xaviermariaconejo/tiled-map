#include "ObjectLayer.hpp"

using namespace tiled;

ObjectLayer::ObjectLayer()
{
}

ObjectLayer::~ObjectLayer() override;
{
}

void setDrawOrder(DrawOrder draw_order)
{
    p_draw_order = draw_order;
}

DrawOrder getDrawOrder() const
{
    return p_draw_order;
}

void setColor(const Color& color)
{
    p_color = color;
}

const Color& getColor() const
{
    return color;
}

void setObjects(const std::vector<Object*>& Objects)
{
    p_objects = Objects;
}

std::vector<Object*>& getObjects()
{
    return p_objects;
}

const std::vector<Object*>& getObjects() const
{
    return p_objects;
}
