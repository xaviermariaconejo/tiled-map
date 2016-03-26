#include "Terrain.hpp"

using namespace tiled;

Terrain::Terrain()
{
}

Terrain::~Terrain()
{
}

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
