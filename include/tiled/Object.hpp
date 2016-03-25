#ifndef TILED_OBJECT_HPP
#define TILED_OBJECT_HPP
#include <string>
#include <unordered_map>

namespace tiled
{
class Object
{
public:
    enum class Visibility { VISIBLE, INVISIBLE, COUNT };
    Object();
    ~Object();

    void setX(int x);
    int getX() const;

    void setY(int y);
    int getY() const;

    void setId(int id);
    int getId() const;

    void setGId(int g_id);
    int getGId() const;

    void setWidth(int width);
    int getWidth() const;

    void setHeight(int height);
    int getHeight() const;

    void setVisibility(Visibility visibility);
    const Visibility getVisibility() const;

    void setRotation(float rotation);
    float getRotation() const;

    void setName(const std::string& name);
    const std::string& getName() const;

    void setType(const std::string& type);
    const std::string& getType() const;

    void setProperties(const std::unordered_map<std::string, std::string>& properties);
    std::unordered_map<std::string, std::string>& getProperties();
    const std::unordered_map<std::string, std::string>& getProperties() const;



private:
    int p_width,
        p_height,
        p_x,
        p_y,
        p_id,
        p_g_id;
    Visibility p_visibility;
    std::string p_name,p_type;
    float p_rotation;
    std::unordered_map<std::string, std::string> p_properties;
};
} /* tiled */

#endif /* ifndef TILED_MAP_HPP */
