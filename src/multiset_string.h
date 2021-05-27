#ifdef MULTISET_STRING_H
#error Already included
#else
#define MULTISET_STRING_H

#include <set>
#include <string>

class multiset_string : public IContainer
{
    public:
        explicit multiset_string(size_t cycles);
        ~multiset_string() override = default;

        void run() override;

    private:
        std::set<std::string> m_buffer;
        size_t const m_cycles;

    public:
        multiset_string() = delete;
};

#endif
