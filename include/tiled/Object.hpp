#ifndef TILED_OBJECT_HPP
#define TILED_OBJECT_HPP
#include <string>
#include <unordered_map>

namespace tiled
{
class Object
{
public:
    enum class Shape { RECTANGLE, ELLIPSE, POLYGON, POLYLINE, COUNT };

    void setX(int x);
    int getX() const;

    void setY(int y);
    int getY() const;

    void setGId(int g_id);
    int getGId() const;

    void setWidth(int width);
    int getWidth() const;

    void setHeight(int height);
    int getHeight() const;

    void setVisibility(bool visibility);
    const bool getVisibility() const;

    void setRotation(float rotation);
    float getRotation() const;

    void setShape(Shape shape);
    Shape getShape() const;

    void setName(const std::string& name);
    const std::string& getName() const;

    void setType(const std::string& type);
    const std::string& getType() const;

    void setProperties(const std::unordered_map<std::string, std::string>& properties);
    std::unordered_map<std::string, std::string>& getProperties();
    const std::unordered_map<std::string, std::string>& getProperties() const;


protected:
    Shape p_shape;

private:
    int p_width,
        p_height,
        p_x,
        p_y,
        p_g_id;
    bool p_visibility;
    float p_rotation;
    std::string p_name, p_type;
    std::unordered_map<std::string, std::string> p_properties;
};
} /* tiled */

#endif /* ifndef TILED_MAP_HPP */
