#ifndef TILED_FRAME_HPP
#define TILED_FRAME_HPP

namespace tiled
{
class Frame
{
public:
    Frame();
    ~Frame();

    void setTileId(int tile_id);
    int getTileId() const;

    void setDuration(int duration);
    int getDuration() const;

private:
    int p_tile_id, p_duration;
};
}
#endif
