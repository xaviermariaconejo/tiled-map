#ifndef TILED_TERRAIN_HPP
#define TILED_TERRAIN_HPP
#include <string>
#include <unordered_map>
#include "WithProperties.hpp"

namespace tiled
{
class Tile;
class Terrain : public priv::WithProperties
{
public:
    Terrain();
    ~Terrain();

    void setName(const std::string& name);
    const std::string& getName() const;

    void setTile(Tile* tile);
    Tile* getTile();
    const Tile* getTile() const;

private:
    std::string p_name;
    Tile* p_tile;
};
} /* tiled */

#endif /* ifndef TILED_MAP_HPP */
