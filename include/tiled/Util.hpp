#ifndef TILED_UTIL_HPP
#define TILED_UTIL_HPP
#include <string>

namespace tiled
{
class Util
{
public:

    static std::string& trim(std::string& trim);

    static std::string decodeBase64(const std::string& base64);

    static char* decompressGZIP(const char* data, int size_data, int size_expected);
};
}
#endif /* ifndef TILED_UTIL_HPP */
