#ifdef LIST_LIST_DOUBLE_H
#error Already included
#else
#define LIST_LIST_DOUBLE_H

#include <list>
#include <cstdint>

class list_long_double : public IContainer
{
    public:
        explicit list_long_double(size_t cycles);
        ~list_long_double() override = default;

        void run() override;

    private:
        std::list<long double> m_buffer;
        size_t const m_cycles;

    public:
        list_long_double() = delete;
};

#endif
