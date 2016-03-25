#ifndef TILED_ANIMATION_HPP
#define TILED_ANIMATION_HPP

namespace tiled
{
class Animation
{
public:
    Animation();
    ~Animation();

    void setTileId(int tile_id);
    int getTileId() const;

    void setDuration(int duration);
    int getDuration() const;

private:
    int p_tile_id, p_duration;
};
}
#endif
