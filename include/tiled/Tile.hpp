#ifndef TILED_TILE_HPP
#define TILED_TILE_HPP
#include <string>
#include <vector>
#include <unordered_map>

namespace tiled
{
class Image;
class ObjectLayer;
class Animation;
class Tile
{
public:
    Tile();
    ~Tile();

    void setId(int id);
    int getId() const;

    void setProbability(float probability);
    float getProbability() const;

    void setImage(Image&& image);
    void setImage(const Image& image);
    Image& getImage();
    const Image& getImage() const;

    void setAnimation(Animation&& animation);
    void setAnimation(const Animation& animation);
    Animation& geAnimation();
    const Animation& getAnimation() const;

    void setObjectLayers(std::vector<ObjectLayer*>&& Objectlayers);
    void setObjectLayers(const std::vector<ObjectLayer*>& Objectlayers);
    std::vector<ObjectLayer*>& getObjectLayers();
    const std::vector<ObjectLayer*>& getObjectLayers() const;

    void setTerrain(std::vector<int>&& Terrain);
    void setTerrain(const std::vector<int>& Terrain);
    std::vector<int>& getTerrain();
    const std::vector<int>& getTerrain() const;

    void setProperties(std::unordered_map<std::string, std::string>&& tileset);
    void setProperties(const std::unordered_map<std::string, std::string>& tileset);
    std::unordered_map<std::string, std::string>& getProperties();
    const std::unordered_map<std::string, std::string>& getProperties() const;



private:
    int p_id;
    float p_probability;
    Image* p_image;
    Animation* p_animation;
    std::vector<int> p_terrain;
    std::vector<ObjectLayer*> p_object_layers;
    std::unordered_map<std::string, std::string> p_properties;
};
} /* tiled */

#endif /* ifndef TILED_MAP_HPP */
