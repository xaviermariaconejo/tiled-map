#include "Terrain.hpp"
#include "Tile.hpp"
#include "Properties.hpp"

using namespace tiled;

Terrain::Terrain()
{}

Terrain::~Terrain()
{}

void Terrain::setTile(int tile)
{
    p_tile = tile;
}

int Terrain::getTile() const
{
    return p_tile;
}

void Terrain::setName(const std::string& name)
{
    p_name = name;
}

const std::string& Terrain::getName() const
{
    return p_name;
}
