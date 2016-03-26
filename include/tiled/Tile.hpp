#ifndef TILED_TILE_HPP
#define TILED_TILE_HPP
#include <string>
#include <vector>
#include <unordered_map>
#include "TerrainCoords.hpp"

namespace tiled
{
class Image;
class ObjectLayer;
class Frame;
class Tile
{
public:
    Tile();
    ~Tile();

    void setId(int id);
    int getId() const;

    void setProbability(float probability);
    float getProbability() const;

    void setImage(Image* image);
    Image* getImage();
    const Image* getImage() const;

    void setTerrain(TerrainCoords* terrain);
    TerrainCoords* getTerrain();
    const TerrainCoords* getTerrain() const;

    void setObjectLayers(const std::vector<ObjectLayer*>& Objectlayers);
    std::vector<ObjectLayer*>& getObjectLayers();
    const std::vector<ObjectLayer*>& getObjectLayers() const;

    void setAnimation(const std::vector<Frame*>& animation);
    std::vector<Frame*>& getAnimation();
    const std::vector<Frame*>& getAnimation() const;

    void setProperties(const std::unordered_map<std::string, std::string>& properties);
    std::unordered_map<std::string, std::string>& getProperties();
    const std::unordered_map<std::string, std::string>& getProperties() const;



private:
    int p_id;
    float p_probability;
    Image* p_image;
    TerrainCoords* p_terrain;
    std::vector<ObjectLayer*> p_object_layers;
    std::vector<Frame*> p_animation;
    std::unordered_map<std::string, std::string> p_properties;
};
} /* tiled */

#endif /* ifndef TILED_MAP_HPP */
