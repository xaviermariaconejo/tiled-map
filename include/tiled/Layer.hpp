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
    enum class Encoding { NONE, BASE64, CSV, COUNT };
    virtual ~Layer();

    void setWidth(int width);
    int getWidth() const;

    void setHeight(int height);
    int getHeight() const;

    void setX(int x);
    int getX() const;

    void setY(int y);
    int getY() const;

    void setOffsetX(int offset_x);
    int getOffsetX() const;

    void setOffsetY(int offset_y);
    int getOffsetY() const;

    void setVisibility(Visibility visibility);
    Visibility getVisibility() const;

    void setEncoding(Encoding encoding);
    Encoding getEncoding() const;

    void setOpacity(float opacity);
    float getOpacity() const;

    void setName(const std::string& name);
    const std::string& getName() const;

    void setType(const std::string& type);
    const std::string& getType() const;

    void setCompression(const std::string& compression);
    const std::string& getCompression() const;

    void setProperties(const std::unordered_map<std::string, std::string>& properties);
    std::unordered_map<std::string, std::string>& getProperties();
    const std::unordered_map<std::string, std::string>& getProperties() const;



private:
    int p_x,
        p_y,
        p_width,
        p_height,
        p_offset_x,
        p_offset_y;
    Visibility p_visibility;
    Encoding p_encoding;
    float p_opacity;
    std::string p_name,p_type, p_compression;
    std::unordered_map<std::string, std::string> p_properties;
};
} /* tiled */

#endif /* ifndef TILED_MAP_HPP */
