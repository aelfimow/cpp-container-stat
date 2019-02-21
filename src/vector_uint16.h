#ifdef VECTOR_UINT16_H
#error Already included
#else
#define VECTOR_UINT16_H

#include <vector>
#include <cstdint>

class vector_uint16 : public IContainer
{
    public:
        vector_uint16();
        ~vector_uint16();

        void run() override;

    private:
        std::vector<uint16_t> buffer;
};

#endif
