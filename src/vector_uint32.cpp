#include "IContainer.h"
#include "vector_uint32.h"

vector_uint32::vector_uint32() :
    buffer { }
{
}

vector_uint32::~vector_uint32()
{
}

void vector_uint32::run()
{
    buffer.push_back(0);
}
