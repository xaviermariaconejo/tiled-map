#include "WithProperties.hpp"

namespace tiled
{
namespace priv
{
void WithProperties::setProperties(const Properties& properties)
{
    p_properties = properties;
}

Properties& WithProperties::getProperties()
{
    return p_properties;
}
const Properties& WithProperties::getProperties() const
{
    return p_properties;
}
}
}
