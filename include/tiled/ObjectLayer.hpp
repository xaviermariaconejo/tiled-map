#ifndef TILED_OBJECTLAYER_HPP
#define TILED_OBJECTLAYER_HPP
#include "Color.hpp"

namespace tiled
{
class Object;
class ObjectLayer : Layer
{
public:
    enum class DrawOrder { INDEX, TOPDOWN, COUNT };
    ObjectLayer();
    ~ObjectLayer();

    void setColor(const Color& color);
    const Color& getColor() const;

    void setDrawOrder(DrawOrder draw_order);
    DrawOrder getDrawOrder() const;

    void setObjects(std::vector<Object*>&& Objects);
    void setObjects(const std::vector<Object*>& Objects);
    std::vector<Object*>& getObjects();
    const std::vector<Object*>& getObjects() const;

private:
    DrawOrder p_draw_order;
    Color p_color;
    std::vector<Object*> p_objects;
}
}
#endif
