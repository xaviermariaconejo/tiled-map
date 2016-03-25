#include "Tile.hpp"

using namespace tiled;

Tile::Tile()
{
}

Tile::~Tile()
{
    delete p_image;
    delete p_animation;
    delete p_terrain;
}

void setId(int id)
{
    p_id = id;
}

int getId() const
{
    return p_id;
}

void setProbability(float probability)
{
    p_probability = probability;
}

float getProbability() const
{
    return p_probability;
}

void setImage(const Image* image)
{
    p_image = image;
}

Image* getImage()
{
   return p_image;
}

const Image* getImage() const
{
    return p_image;
}

void setAnimation(const Animation* animation)
{
    p_animation = animation;
}

Animation* geAnimation()
{
    return p_animation;
}

const Animation* getAnimation() const
{
    return p_animation;
}

void setTerrain(const TerrainCoords* terrain)
{
    p_terrain = terrain;
}

TerrainCoords* getTerrain()
{
    return p_terrain;
}

const TerrainCoords* getTerrain() const
{
    return p_terrain;
}

void setObjectLayers(const std::vector<ObjectLayer*>& Objectlayers)
{
    p_object_layers = Objectlayers;
}

std::vector<ObjectLayer*>& getObjectLayers()
{
    return p_object_layers;
}

const std::vector<ObjectLayer*>& getObjectLayers() const
{
    return p_object_layers;
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
