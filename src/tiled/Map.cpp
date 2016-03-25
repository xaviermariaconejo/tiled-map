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


void Map::setOrientation(Map::Orientation orientation)
{
    p_orientation = orientation;
}

Map::Orientation Map::getOrientation() const
{
    return p_orientation;
}

void Map::setRenderOrder(Map::RenderOrder render_order)
{
    p_render_order = render_order;
}

Map::RenderOrder Map::getRenderOrder() const
{
    return p_render_order;
}

void Map::setWidth(int width)
{
    p_width = width;
}

int Map::getWidth() const
{
    return p_width;
}

void Map::setHeight(int height)
{
    p_height = height;
}

int Map::getHeight() const
{
    return p_height;
}

void Map::setTileWidth(int tile_width)
{
    p_tile_width = tile_width;
}

int Map::getTileWidth() const
{
    return p_tile_width;
}

void Map::setTileHeight(int tile_height)
{
    p_tile_height = tile_height;
}

int Map::getTileHeight() const
{
    return p_tile_height;
}

void Map::setHexSideLength(int hex_side_length)
{
    p_hex_side_length = hex_side_length;
}

int Map::getHexSideLength() const
{
    return p_hex_side_length;
}

void Map::setStaggerAxis(Map::StaggerAxis stagger_axis)
{
    p_stagger_axis = stagger_axis;
}

Map::StaggerAxis Map::getStaggerAxis() const
{
    return p_stagger_axis;
}

void Map::setStaggerIndex(Map::StaggerIndex stagger_index)
{
    p_stagger_index = stagger_index;
}

Map::StaggerIndex Map::getStaggerIndex() const
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

void Map::setLayers(const std::vector<Layer*>& layers)
{
    p_layers = layers;
}

std::vector<Layer*>& Map::getLayers()
{
    return p_layers;
}

const std::vector<Layer*>& Map::getLayers() const
{
    return p_layers;
}

void Map::setTileLayers(std::vector<TileLayer*>&& Tilelayers)
{
    p_tile_layers = Tilelayers;
}

void Map::setTileLayers(const std::vector<TileLayer*>& Tilelayers)
{
    p_tile_layers = Tilelayers;
}

std::vector<TileLayer*>& Map::getTileLayers()
{
    return p_tile_layers;
}

const std::vector<TileLayer*>& Map::getTileLayers() const
{
    return p_tile_layers;
}

void Map::setImageLayers(std::vector<ImageLayer*>&& Imagelayers)
{
    p_image_layers = Imagelayers;
}

void Map::setImageLayers(const std::vector<ImageLayer*>& Imagelayers)
{
    p_image_layers = Imagelayers;
}

std::vector<ImageLayer*>& Map::getImageLayers()
{
    return p_image_layers;
}

const std::vector<ImageLayer*>& Map::getImageLayers() const
{
    return p_image_layers;
}

void Map::setObjectLayers(std::vector<ObjectLayer*>&& Objectlayers)
{
    p_object_layers = Objectlayers;
}

void Map::setObjectLayers(const std::vector<ObjectLayer*>& Objectlayers)
{
    p_object_layers = Objectlayers;
}

std::vector<ObjectLayer*>& Map::getObjectLayers()
{
    return p_object_layers;
}

const std::vector<ObjectLayer*>& Map::getObjectLayers() const
{
    return p_object_layers;
}

void Map::setTilesets(std::vector<Tileset*>&& Tilesets)
{
    p_tileset = Tilesets;
}

void Map::setTilesets(const std::vector<Tileset*>& Tilesets)
{
    p_tileset = Tilesets;
}

std::vector<Tileset*>& Map::getTilesets()
{
    return p_tileset;
}

const std::vector<Tileset*>& Map::getTilesets() const
{
    return p_tileset;
}

void Map::setProperties(std::unordered_map<std::string, std::string>&& Properties)
{
    p_properties = Properties;
}

void Map::setProperties(const std::unordered_map<std::string, std::string>& Properties)
{
    p_properties = Properties;
}

std::unordered_map<std::string, std::string>& Map::getProperties()
{
    return p_properties;
}

const std::unordered_map<std::string, std::string>& Map::getProperties() const
{
    return p_properties;
}
