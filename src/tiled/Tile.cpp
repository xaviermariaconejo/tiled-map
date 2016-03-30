#include "Tile.hpp"
#include "Object.hpp"
#include "Frame.hpp"
#include "Tileset.hpp"

using namespace tiled;

Tile::Tile():
p_parent(nullptr)
{

}

Tile::~Tile()
{
    p_parent = nullptr;
    for(Object* object : p_objects)
    {
        delete object;
    }
}

void Tile::setId(int id)
{
    p_id = id;
}

int Tile::getId() const
{
    return p_id;
}

int Tile::getGId() const
{
    return p_parent->getGId() + p_id;
}

void Tile::setProbability(float probability)
{
    p_probability = probability;
}

float Tile::getProbability() const
{
    return p_probability;
}

void Tile::setTerrain(TerrainCoords& terrain)
{
    p_terrain = terrain;
}

TerrainCoords& Tile::getTerrain()
{
    return p_terrain;
}

const TerrainCoords& Tile::getTerrain() const
{
    return p_terrain;
}

void Tile::setParent(Tileset* parent)
{
    p_parent = parent;
}

Tileset* Tile::getParent()
{
    return p_parent;
}

const Tileset* Tile::getParent() const
{
    return p_parent;
}

void Tile::setObjects(const std::vector<Object*>& objects)
{
    p_objects = objects;
}

std::vector<Object*>& Tile::getObjects()
{
    return p_objects;
}

const std::vector<Object*>& Tile::getObjects() const
{
    return p_objects;
}

void Tile::setAnimation(const std::vector<Frame>& animation)
{
    p_animation = animation;
}

std::vector<Frame>& Tile::getAnimation()
{
    return p_animation;
}

const std::vector<Frame>& Tile::getAnimation() const
{
    return p_animation;
}
