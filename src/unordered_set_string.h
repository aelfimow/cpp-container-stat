#ifdef UNORDERED_SET_STRING_H
#error Already included
#else
#define UNORDERED_SET_STRING_H

#include <unordered_set>
#include <string>

class unordered_set_string : public IContainer
{
    public:
        explicit unordered_set_string(size_t cycles);
        ~unordered_set_string() override = default;

        void run() override;

    private:
        std::unordered_set<std::string> m_buffer;
        size_t const m_cycles;

    public:
        unordered_set_string() = delete;
};

#endif
