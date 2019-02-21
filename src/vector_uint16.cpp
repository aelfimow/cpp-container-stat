#include "IContainer.h"
#include "vector_uint16.h"

vector_uint16::vector_uint16() :
    buffer { }
{
}

vector_uint16::~vector_uint16()
{
}

void vector_uint16::run()
{
    buffer.push_back(0);
}
