#ifndef TILED_IMAGE_HPP
#define TILED_IMAGE_HPP
#include <string>

namespace tiled
{
class Image
{
public:
    enum class Encoding { NONE, BASE64, CSV, COUNT }
    Image();
    ~Image();

    void setFormat(const std::string& format);
    const std::string& getFormat() const;

    void setSource(const std::string& source);
    const std::string& getSource() const;

    void setTrans(const std::string& trans);
    const std::string& getTrans() const;

    void setId(int id);
    int getId() const;

    void setWidth(int width);
    int getWidth() const;

    void setHeight(int height);
    int getHeight() const;

    void setEncoding(Encoding encoding);
    Encoding getEncoding() const;

    void setCompression(const std::string& compression);
    const std::string& getCompression() const;


private:
    int p_id, p_width, p_height;
    Encoding p_encoding;
    std::string p_format, p_source, p_trans, p_compression;
};
}

#endif
