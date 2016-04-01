#include "TileLayer.hpp"

using namespace tiled;

TileLayer::TileLayer():
p_encoding(Encoding::LUA),
p_compression(Compression::NONE)
{
    p_type = Layer::LayerType::TILE_LAYER;
}

TileLayer::~TileLayer()
{}

void TileLayer::setEncoding(Encoding encoding)
{
    p_encoding = encoding;
}

TileLayer::Encoding TileLayer::getEncoding() const
{
    return p_encoding;
}

void TileLayer::setCompression(Compression compression)
{
    p_compression = compression;
}

TileLayer::Compression TileLayer::getCompression() const
{
    return p_compression;
}

void TileLayer::setData(const std::string& data)
{
    p_data = data;
}

std::string& TileLayer::getData()
{
    return p_data;
}

const std::string& TileLayer::getData() const
{
    return p_data;
}

void TileLayer::setTileMap(const std::vector<int>& map_tile)
{
    p_map_tile = map_tile;
}

std::vector<int>& TileLayer::getTileMap()
{
    return p_map_tile;
}

const std::vector<int>& TileLayer::getTileMap() const
{
    return p_map_tile;
}

void TileLayer::parseData()
{
    //TODO
}
