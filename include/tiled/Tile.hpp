#ifndef TILED_TILE_HPP
#define TILED_TILE_HPP
#include <vector>
#include <unordered_map>
#include "TerrainCoords.hpp"


/* TODO Hay un vector<Object*> que he copiado
 * del parser, la docu dice que es un ObjectGroup.
 * Y en los ejemplos de mapas no sale nada de eso y
 * he intentado hacer que aparezca haciendo un mapa y nada
 */


namespace tiled
{
class Tileset;
class Object;
class Frame;
class Tile
{
public:
    Tile();
    ~Tile();

    void setId(int id);
    int getId() const;

    int getGId() const;

    void setProbability(float probability);
    float getProbability() const;

    void setTerrain(TerrainCoords& terrain);
    TerrainCoords& getTerrain();
    const TerrainCoords& getTerrain() const;

    void setParent(Tileset* parnet);
    Tileset* getParent();
    const Tileset* getParent() const;

    void setObjects(const std::vector<Object*>& objects);
    std::vector<Object*>& getObjects();
    const std::vector<Object*>& getObjects() const;

    void setAnimation(const std::vector<Frame*>& animation);
    std::vector<Frame*>& getAnimation();
    const std::vector<Frame*>& getAnimation() const;

    void setProperties(const std::unordered_map<std::string, std::string>& properties);
    std::unordered_map<std::string, std::string>& getProperties();
    const std::unordered_map<std::string, std::string>& getProperties() const;



private:
    int p_id;
    float p_probability;
    TerrainCoords p_terrain;
    Tileset* p_parent;
    std::vector<Object*> p_objects;
    std::vector<Frame*> p_animation;
    std::unordered_map<std::string, std::string> p_properties;
};
} /* tiled */

#endif /* ifndef TILED_MAP_HPP */
