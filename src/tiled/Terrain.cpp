#include "Terrain.hpp"
#include "Tile.hpp"
#include "Properties.hpp"

using namespace tiled;

Terrain::Terrain():
p_tile(nullptr)
{

}

Terrain::~Terrain()
{
    delete p_tile;
}

void Terrain::setName(const std::string& name)
{
    p_name = name;
}

const std::string& Terrain::getName() const
{
    return p_name;
}

void Terrain::setTile(Tile* tile)
{
    p_tile = tile;
}

Tile* Terrain::getTile()
{
    return p_tile;
}

const Tile* Terrain::getTile() const
{
    return p_tile;
}
