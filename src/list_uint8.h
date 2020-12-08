#ifdef LIST_UINT8_H
#error Already included
#else
#define LIST_UINT8_H

#include <list>
#include <cstdint>

class list_uint8 : public IContainer
{
    public:
        explicit list_uint8(size_t cycles);
        ~list_uint8() override = default;

        void run() override;

    private:
        std::list<uint8_t> m_buffer;
        size_t const m_cycles;

    public:
        list_uint8() = delete;
};

#endif
