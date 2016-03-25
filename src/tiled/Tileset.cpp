#include "Tileset.hpp"

using namespace tiled;

Tileset::Tileset()
{
}

Tileset::~Tileset()
{
    delete p_image;
}

void setFirstGId(int first_g_id)
{
    p_first_g_id = first_g_id;
}

int getTFirstGId() const
{
    return p_first_g_id;
}

void setTileWidth(int tile_width)
{
    p_tile_width = tile_width;
}

int getTileWidth() const
{
    return p_tile_width;
}

void setTileHeight(int tile_height)
{
    p_tile_height = tile_height;
}

int getTileHeight() const
{
    return p_tile_height;
}

void setSpacing(int spacing)
{
    p_spacing = spacing;
}

int getSpacing() const
{
    return spacing;
}

void setMargin(int margin)
{
    p_margin = margin;
}

int getMargin() const
{
    return margin;
}

void setTileCount(int tile_count)
{
    p_tile_count = tile_count;
}

int getTileCount() const
{
    return p_tile_count;
}

void setColumns(int columns)
{
    p_columns = columns;
}

int getColumns() const
{
    return p_columns;
}

void setTileOffsetX(int tile_offset_x)
{
    p_tile_offset_x = tile_offset_x;
}

int getTileOffsetX() const
{
    return p_offset_x;
}

void setTileOffsetY(int tile_offset_y)
{
    p_tile_offset_y = tile_offset_y;
}

int getTileOffsetY() const
{
    return p_tile_offset_y;
}

void setName(const std::string& name)
{
    p_name = name;
}

const std::string& getName() const
{
    return p_name;
}

void setFileName(const std::string& file_name)
{
    p_file_name = file_name;
}

const std::string& getFileName() const
{
    return p_file_name;
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

void setTiles(const std::vector<Tile*>& Tiles)
{
    p_tiles = Tiles;
}

std::vector<Tile*>& getTiles()
{
    return p_tiles;
}

const std::vector<Tile*>& getTiles() const
{
    return p_tiles;
}

void setTerrains(const std::vector<Terrain*>& Terrains)
{
    p_terrains = Terrains;
}

std::vector<Terrain*>& getTerrains()
{
    return p_terrains;
}

const std::vector<Terrain*>& getTerrains() const
{
    return p_terrains;
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
