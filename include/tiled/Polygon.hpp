#ifndef TILED_POLYGON_HPP
#define TILED_POLYGON_HPP
#include <vector>
#include "Object.hpp"
#include "Point.hpp"

namespace tiled
{
class Polygon : public Object
{
public:
    Polygon();
    ~Polygon();

    void setPoints(const std::vector<Point>& pointis);
    std::vector<Point>& getPoints();
    const std::vector<Point>& getPoints() const;

private:
    std::vector<Point> p_points;
};
}

#endif
