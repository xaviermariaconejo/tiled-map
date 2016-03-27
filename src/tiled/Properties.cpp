#include "Properties.hpp"

namespace tiled
{
Properties::~Properties()
{
    clear();
}

void Properties::set(const std::string& name, bool value)
{
    if (p_bag.find(name) != p_bag.end())
    {
        delete p_bag[name];
    }
    p_bag[name] = new BoolValue(value);
}

void Properties::set(const std::string& name, int value)
{
    if (p_bag.find(name) != p_bag.end())
    {
        delete p_bag[name];
    }
    p_bag[name] = new IntValue(value);
}

void Properties::set(const std::string& name, float value)
{
    if (p_bag.find(name) != p_bag.end())
    {
        delete p_bag[name];
    }
    p_bag[name] = new FloatValue(value);
}

void Properties::set(const std::string& name, const std::string& value)
{
    if (p_bag.find(name) != p_bag.end())
    {
        delete p_bag[name];
    }
    p_bag[name] = new StringValue(value);
}

void Properties::set(const std::string& name, const char* value)
{
    if (p_bag.find(name) != p_bag.end())
    {
        delete p_bag[name];
    }
    p_bag[name] = new StringValue(std::string(value));
}

const Value* Properties::get(const std::string& name) const
{
    auto it = p_bag.find(name);
    if (it == p_bag.end())
    {
        return nullptr;
    }
    return it->second;
}

void Properties::clear()
{
    for (auto it : p_bag)
    {
        delete it.second;
    }
    p_bag.clear();
}
} /* tiled */
