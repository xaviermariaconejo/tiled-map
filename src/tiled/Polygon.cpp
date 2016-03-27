#include "Polygon.hpp"

using namespace tiled;

Polygon::Polygon()
{
    p_shape = Object::Shape::POLYGON;
}

Polygon::~Polygon()
{

}

void Polygon::setPoints(const std::vector<Point>& points)
{
    p_points = points;
}

std::vector<Point>& Polygon::getPoints()
{
    return p_points;
}

const std::vector<Point>& Polygon::getPoints() const
{
    return p_points;
}
