#ifdef DEQUE_UINT64_H
#error Already included
#else
#define DEQUE_UINT64_H

#include <deque>
#include <cstdint>

class deque_uint64 : public IContainer
{
    public:
        explicit deque_uint64(size_t cycles);
        ~deque_uint64() override = default;

        void run() override;

    private:
        std::deque<uint64_t> m_buffer;
        size_t const m_cycles;

    public:
        deque_uint64() = delete;
};

#endif
