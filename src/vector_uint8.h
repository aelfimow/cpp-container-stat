#ifdef VECTOR_UINT8_H
#error Already included
#else
#define VECTOR_UINT8_H

#include <vector>
#include <cstdint>

class vector_uint8 : public IContainer
{
    public:
        vector_uint8();
        ~vector_uint8();

        void run() override;

    private:
        std::vector<uint8_t> buffer;
};

#endif
