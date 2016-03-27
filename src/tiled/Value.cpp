#include "Value.hpp"

namespace tiled
{
const char* Value::typeToString(Value::Type type)
{
    if (type == Type::NONE)
    {
        return "None";
    }
    else if (type == Type::BOOL)
    {
        return "Bool";
    }
    else if (type == Type::INT)
    {
        return "Int";
    }
    else if (type == Type::FLOAT)
    {
        return "Float";
    }
    else
    {
        return "String";
    }
}

Value::~Value()
{}

Value::Type Value::getType() const
{
    return Type::NONE;
}

bool Value::getBool() const
{
    throw WrongValueType();
}

int Value::getInt() const
{
    throw WrongValueType();
}

float Value::getFloat() const
{
    throw WrongValueType();
}

const std::string& Value::getString() const
{
    throw WrongValueType();
}

BoolValue::BoolValue(bool value):
p_value(value)
{}

Value::Type BoolValue::getType() const
{
    return Value::Type::BOOL;
}

bool BoolValue::getBool() const
{
    return p_value;
}

IntValue::IntValue(int value):
p_value(value)
{}

Value::Type IntValue::getType() const
{
    return Value::Type::INT;
}

int IntValue::getInt() const
{
    return p_value;
}

FloatValue::FloatValue(float value):
p_value(value)
{}

Value::Type FloatValue::getType() const
{
    return Value::Type::FLOAT;
}

float FloatValue::getFloat() const
{
    return p_value;
}

StringValue::StringValue(const std::string& value):
p_value(value)
{}

Value::Type StringValue::getType() const
{
    return Value::Type::STRING;
}

const std::string& StringValue::getString() const
{
    return p_value;
}
} /* tiled */
