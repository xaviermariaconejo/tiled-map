#include "Terrain.hpp"

using namespace tiled;

Terrain::Terrain()
{
}

Terrain::~Terrain()
{
}

void setTile(int tile)
{
    p_tile = tile;
}

int getTile() const
{
    return p_tile;
}

void setName(const std::string& name)
{
    p_name = name;
}

const std::string& getName() const
{
    return p_name;
}

void setProperties(const std::unordered_map<std::string, std::string>& properties)
{
    p_properties = properties;
}

std::unordered_map<std::string, std::string>& getProperties()
{
    return p_properties;
}

const std::unordered_map<std::string, std::string>& getProperties() const
{
    return p_properties;
}
