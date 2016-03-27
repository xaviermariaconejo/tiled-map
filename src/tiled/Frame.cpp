#include "Frame.hpp"

using namespace tiled;

Frame::Frame()
{

}

Frame::~Frame()
{

}

void Frame::setTileId(int tile_id)
{
    p_tile_id = tile_id;
}

int Frame::getTileId() const
{
    return p_tile_id;
}

void Frame::setDuration(int duration)
{
    p_duration = duration;
}

int Frame::getDuration() const
{
    return p_duration;
}
