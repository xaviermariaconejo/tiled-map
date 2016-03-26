#include "Tile.hpp"
#include "Image.hpp"

using namespace tiled;

Tile::Tile()
{
}

Tile::~Tile()
{
    delete p_image;
    delete p_terrain;
}

void Tile::setId(int id)
{
    p_id = id;
}

int Tile::getId() const
{
    return p_id;
}

void Tile::setProbability(float probability)
{
    p_probability = probability;
}

float Tile::getProbability() const
{
    return p_probability;
}

void Tile::setImage(Image* image)
{
    p_image = image;
}

Image* Tile::getImage()
{
   return p_image;
}

const Image* Tile::getImage() const
{
    return p_image;
}

void Tile::setTerrain(TerrainCoords* terrain)
{
    p_terrain = terrain;
}

TerrainCoords* Tile::getTerrain()
{
    return p_terrain;
}

const TerrainCoords* Tile::getTerrain() const
{
    return p_terrain;
}

void Tile::setObjectLayers(const std::vector<ObjectLayer*>& Objectlayers)
{
    p_object_layers = Objectlayers;
}

std::vector<ObjectLayer*>& Tile::getObjectLayers()
{
    return p_object_layers;
}

const std::vector<ObjectLayer*>& Tile::getObjectLayers() const
{
    return p_object_layers;
}

void Tile::setAnimation(const std::vector<Frame*>& animation)
{
    p_animation = animation;
}

std::vector<Frame*>& Tile::getAnimation()
{
    return p_animation;
}

const std::vector<Frame*>& Tile::getAnimation() const
{
    return p_animation;
}

void Tile::setProperties(const std::unordered_map<std::string, std::string>& properties)
{
    p_properties = properties;
}

std::unordered_map<std::string, std::string>& Tile::getProperties()
{
    return p_properties;
}

const std::unordered_map<std::string, std::string>& Tile::getProperties() const
{
    return p_properties;
}
