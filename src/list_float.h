#ifdef LIST_FLOAT_H
#error Already included
#else
#define LIST_FLOAT_H

#include <list>
#include <cstdint>

class list_float : public IContainer
{
    public:
        explicit list_float(size_t cycles);
        ~list_float() override = default;

        void run() override;

    private:
        std::list<float> m_buffer;
        size_t const m_cycles;

    public:
        list_float() = delete;
};

#endif
