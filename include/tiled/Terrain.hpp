#ifndef TILED_TERRAIN_HPP
#define TILED_TERRAIN_HPP
#include <string>
#include <vector>

namespace tiled
{
class Terrain
{
public:
    Terrain();
    ~Terrain();

    void setName(const std::string& name);
    const std::string& getName() const;

    void setTile(int tile);
    int getTile() const;

    void setProperties(std::unordered_map<std::string, std::string>&& tileset);
    void setProperties(const std::unordered_map<std::string, std::string>& tileset);
    std::unordered_map<std::string, std::string>& getProperties();
    const std::unordered_map<std::string, std::string>& getProperties() const;



private:
    int p_tile;
    std::string p_name;
    std::unordered_map<std::string, std::string> p_properties;
};
} /* tiled */

#endif /* ifndef TILED_MAP_HPP */
