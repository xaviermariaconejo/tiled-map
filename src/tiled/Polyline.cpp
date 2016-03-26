#include "Polyline.hpp"

using namespace tiled;

Polyline::Polyline()
{
    p_shape = Object::Shape::POLYLINE;
}

Polyline::~Polyline()
{

}

void Polyline::setPoints(const std::vector<Point>& points)
{
    p_points = points;
}

std::vector<Point>& Polyline::getPoints()
{
    return p_points;
}

const std::vector<Point>& Polyline::getPoints() const
{
    return p_points;
}
