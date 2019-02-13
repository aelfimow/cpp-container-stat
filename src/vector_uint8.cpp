#include "IContainer.h"
#include "vector_uint8.h"

vector_uint8::vector_uint8() :
    buffer { }
{
}

vector_uint8::~vector_uint8()
{
}

void vector_uint8::run()
{
    buffer.push_back(0);
}
