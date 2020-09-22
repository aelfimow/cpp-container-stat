#ifdef VECTOR_UINT32_H
#error Already included
#else
#define VECTOR_UINT32_H

#include <vector>
#include <cstdint>

class vector_uint32 : public IContainer
{
    public:
        vector_uint32();
        ~vector_uint32();

        void run() override;

    private:
        std::vector<uint32_t> buffer;
};

#endif
