#ifndef TILED_TERRAIN_HPP
#define TILED_TERRAIN_HPP
#include <string>
#include <unordered_map>

namespace tiled
{
class Tile;
class Terrain
{
public:
    Terrain();
    ~Terrain();

    void setName(const std::string& name);
    const std::string& getName() const;

    void setTile(Tile* tile);
    Tile* getTile();
    const Tile* getTile() const;

    void setProperties(const std::unordered_map<std::string, std::string>& tileset);
    std::unordered_map<std::string, std::string>& getProperties();
    const std::unordered_map<std::string, std::string>& getProperties() const;



private:
    std::string p_name;
    Tile* p_tile;
    std::unordered_map<std::string, std::string> p_properties;
};
} /* tiled */

#endif /* ifndef TILED_MAP_HPP */
