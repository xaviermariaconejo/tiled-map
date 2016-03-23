namespace tiled
{
namespace lua
{
void load(Map& map, lua_stack L)
{
    std::string version = lua_pop_string(L);
    map.setVersion(version);
    ...
}

void to_string(const Map& map);
} /* lua */
} /* tiled */
