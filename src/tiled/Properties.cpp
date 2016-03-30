#include "Properties.hpp"

namespace tiled
{
Properties::~Properties()
{
    clear();
}

void Properties::set(const std::string& name, bool value)
{
    p_bag[name] = Value(value);
}

void Properties::set(const std::string& name, int value)
{
    p_bag[name] = new Value(value);
}

void Properties::set(const std::string& name, float value)
{
    p_bag[name] = new Value(value);
}

void Properties::set(const std::string& name, const std::string& value)
{
    p_bag[name] = new Value(value);
}

void Properties::set(const std::string& name, const char* value)
{
    p_bag[name] = new Value(std::string(value));
}

void Properties::set(const std::string& name, const Value& value)
{
    p_bag[name] = value;
}

const Value& Properties::get(const std::string& name) const
{
    auto it = p_bag.find(name);
    if (it == p_bag.end())
    {
        return p_none;
    }
    return it->second;
}

void Properties::clear()
{
    p_bag.clear();
}
} /* tiled */
