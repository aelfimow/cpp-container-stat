#ifdef LIST_UINT16_H
#error Already included
#else
#define LIST_UINT16_H

#include <list>
#include <cstdint>

class list_uint16 : public IContainer
{
    public:
        explicit list_uint16(size_t cycles);
        ~list_uint16() override = default;

        void run() override;

    private:
        std::list<uint16_t> m_buffer;
        size_t const m_cycles;

    public:
        list_uint16() = delete;
};

#endif
