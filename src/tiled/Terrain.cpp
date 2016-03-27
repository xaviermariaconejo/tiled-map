#include "Terrain.hpp"
#include "Tile.hpp"

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

void Terrain::setProperties(const std::unordered_map<std::string, std::string>& properties)
{
    p_properties = properties;
}

std::unordered_map<std::string, std::string>& Terrain::getProperties()
{
    return p_properties;
}

const std::unordered_map<std::string, std::string>& Terrain::getProperties() const
{
    return p_properties;
}
