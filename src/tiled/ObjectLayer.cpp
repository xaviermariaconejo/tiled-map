#include "ObjectLayer.hpp"
#include "Object.hpp"

using namespace tiled;

ObjectLayer::ObjectLayer():
p_draw_order(DrawOrder::INDEX)
{
    p_type = Layer::LayerType::OBJECT_LAYER;
}

ObjectLayer::~ObjectLayer()
{
    for(Object* object : p_objects)
    {
        delete object;
    }
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
