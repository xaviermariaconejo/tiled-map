#ifndef TILED_LAYER_HPP
#define TILED_LAYER_HPP
#include <string>
#include <unordered_map>

namespace tiled
{
class Layer
{
public:
    enum class Visibility { VISIBLE, INVISIBLE, COUNT };
    enum class Encoding { NONE, BASE64, CSV, COUNT }

    void setName(const std::string& name);
    const std::string& getName() const;

    void setType(const std::string& type);
    const std::string& getType() const;

    void setWidth(int width);
    int getWidth() const;

    void setHeight(int height);
    int getHeight() const;

    void setX(int x);
    int getX() const;

    void setY(int y);
    int getY() const;

    void setVisibility(Visibility visibility);
    const Visibility getVisibility() const;

    void setOpacity(float opacity);
    float getOpacity() const;

    void setOffsetX(int offset_x);
    int getOffsetX() const;

    void setOffsetY(int offset_y);
    int getOffsetY() const;

    void setEncoding(Encoding encoding);
    Encoding getEncoding() const;

    void setCompression(const std::string& compression);
    const std::string& getCompression() const;

    void setProperties(std::unordered_map<std::string, std::string>&& tileset);
    void setProperties(const std::unordered_map<std::string, std::string>& tileset);
    std::unordered_map<std::string, std::string>& getProperties();
    const std::unordered_map<std::string, std::string>& getProperties() const;



private:
    int p_width,
        p_height,
        p_offset_x,
        p_offset_y,
        p_x,
        p_y;
    Visibility p_visibility;
    Encoding p_encoding;
    std::string p_name,p_type, p_compression;
    float p_opacity;
    std::unordered_map<std::string, std::string> p_properties;
};
} /* tiled */

#endif /* ifndef TILED_MAP_HPP */
