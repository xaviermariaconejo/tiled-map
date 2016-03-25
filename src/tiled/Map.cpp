#include "Map.hpp"

using namespace tiled;

Map::Map():
p_render_order(RenderOrder::RIGHT_DOWN),
p_stagger_axis(StaggerAxis::NONE),
p_stagger_index(StaggerIndex::NONE),
p_background_color(Color{128, 128, 128, 255})
{

}

Map::~Map()
{}

void Map::setVersion(const std::string& version)
{
    p_version = version;
}

const std::string& Map::Map::getVersion() const
{
    return p_version;
}

void Map::setTiledVersion(const std::string& version)
{
    p_tiled_version = version;
}

const std::string& Map::getTiledVersion() const
{
    return p_tiled_version;
}


void Map::setOrientation(Orientation orientation)
{
    p_orientation = orientation;
}

Orientation Map::getOrientation() const
{
    return p_orientation;
}

void Map::setRenderOrder(RenderOrder render_order)
{
    p_render_order = render_order;
}

RenderOrder Map::getRenderOrder() const
{
    return p_render_order;
}

void Map::setWidth(int width)
{
    p_width = width;
}

int Map::getTileWidth() const
{
    return p_width;
}

void Map::setTileHeight(int tile_height)
{
    p_tile_width = tile_width;
}

int Map::getTileHeight() const
{
    return p_tile_id;
}

void Map::setHexSideLength(int hex_side_length)
{
    p_hex_side_length = hex_side_length;
}

int Map::getHexSideLength() const
{
    return p_hex_side_length;
}

void Map::setStaggerAxis(StaggerAxis stagger_axis)
{
    p_stagger_axis = stagger_axis;
}

StaggerAxis Map::getStaggerAxis() const
{
    return p_stagger_axis;
}

void Map::setStaggerIndex(StaggerIndex stagger_index)
{
    p_stagger_index = stagger_index;
}

StaggerIndex Map::getStaggerIndex() const
{
    return p_stagger_index;
}

void Map::setBackgroundColor(const Color& background_color)
{
    p_background_color = background_color;
}

const Color& Map::getBackgroundColor() const
{
    return p_background_color;
}

void Map::setNextObjectId(int next_object_id)
{
    p_next_object_id = next_object_id;
}

int Map::getNextObjectId() const
{
    return p_next_object_id;
}

void Map::setLayers(std::vector<Layer*>&& layers)
{
    p_layers = layers;
}
void Map::setLayers(const std::vector<Layer*>& layers);
std::vector<Layer*>& Map::getLayers();
const std::vector<Layer*>& Map::getLayers() const;

void Map::setTileLayers(std::vector<TileLayer*>&& Tilelayers);
void Map::setTileLayers(const std::vector<TileLayer*>& Tilelayers);
std::vector<TileLayer*>& Map::getTileLayers();
const std::vector<TileLayer*>& Map::getTileLayers() const;

void Map::setImageLayers(std::vector<ImageLayer*>&& Imagelayers);
void Map::setImageLayers(const std::vector<ImageLayer*>& Imagelayers);
std::vector<ImageLayer*>& Map::getImageLayers();
const std::vector<ImageLayer*>& Map::getImageLayers() const;

void Map::setObjectLayers(std::vector<ObjectLayer*>&& Objectlayers);
void Map::setObjectLayers(const std::vector<ObjectLayer*>& Objectlayers);
std::vector<ObjectLayer*>& Map::getObjectLayers();
const std::vector<ObjectLayer*>& Map::getObjectLayers() const;

void Map::setTileMap::sets(std::vector<TileMap::set>&& tileMap::set);
void Map::setTileMap::sets(const std::vector<TileMap::set>& tileMap::set);
std::vector<TileMap::set>& Map::getTileMap::sets();
const std::vector<TileMap::set>& Map::getTileMap::sets() const;

void Map::setProperties(std::unordered_map<std::string, std::string>&& tileMap::set);
void Map::setProperties(const std::unordered_map<std::string, std::string>& tileMap::set);
std::unordered_map<std::string, std::string>& Map::getProperties();
const std::unordered_map<std::string, std::string>& Map::getProperties() const;
