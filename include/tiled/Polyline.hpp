#ifndef TILED_POLYLINE_HPP
#define TILED_POLYLINE_HPP
#include <vector>
#include "Object.hpp"
#include "Point.hpp"

namespace tiled
{
class Polyline : public Object
{
public:
    Polyline();
    ~Polyline();

    void setPoints(const std::vector<Point>& points);
    std::vector<Point>& getPoints();
    const std::vector<Point>& getPoints() const;

private:
    std::vector<Point> p_points;
};
}

#endif
