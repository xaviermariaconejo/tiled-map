#include "Map.hpp"

using namespace tiled;

Map::Map():
p_render_order(RenderOrder::RIGHT_DOWN),
p_stagger_axis(StaggerAxis::NONE),
p_stagger_index(StaggerIndex::NONE),
p_background_color(Color{128, 128, 128, 255})
{

}

void Map::setVersion(const std::string& version)
{
    p_version = version;
}

const std::string& Map::getVersion() const
{
    return p_version;
}
