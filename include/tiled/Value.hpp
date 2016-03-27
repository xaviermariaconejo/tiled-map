#ifndef TILED_VALUE_HPP
#define TILED_VALUE_HPP
#include <string>

namespace tiled
{
class WrongValueType : public std::exception
{};

class Value
{
public:
    enum class Type { NONE, BOOL, INT, FLOAT, STRING };

    virtual ~Value();
    virtual Type getType() const;
    virtual bool getBool() const;
    virtual int getInt() const;
    virtual float getFloat() const;
    virtual const std::string& getString() const;

    static const char* typeToString(Type type);
};

class BoolValue : public Value
{
public:
    BoolValue(bool value);
    virtual Type getType() const override;
    virtual bool getBool() const override;

private:
    bool p_value;
};

class IntValue : public Value
{
public:
    IntValue(int value);
    virtual Type getType() const override;
    virtual int getInt() const override;

private:
    int p_value;
};

class FloatValue : public Value
{
public:
    FloatValue(float value);
    virtual Type getType() const override;
    virtual float getFloat() const override;

private:
    float p_value;
};

class StringValue : public Value
{
public:
    StringValue(const std::string& value);
    virtual Type getType() const override;
    virtual const std::string& getString() const override;

private:
    std::string p_value;
};
}
#endif /* ifndef TILED_VALUE_HPP */
