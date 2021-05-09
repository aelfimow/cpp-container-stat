#ifdef VECTOR_STRING_H
#error Already included
#else
#define VECTOR_STRING_H

#include <vector>
#include <string>

class vector_string : public IContainer
{
    public:
        explicit vector_string(size_t cycles);
        ~vector_string() override = default;

        void run() override;

    private:
        std::vector<std::string> m_buffer;
        size_t const m_cycles;

    public:
        vector_string() = delete;
};

#endif
