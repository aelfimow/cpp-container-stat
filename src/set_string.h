#ifdef SET_STRING_H
#error Already included
#else
#define SET_STRING_H

#include <set>
#include <string>

class set_string : public IContainer
{
    public:
        explicit set_string(size_t cycles);
        ~set_string() override = default;

        void run() override;

    private:
        std::set<std::string> m_buffer;
        size_t const m_cycles;

    public:
        set_string() = delete;
};

#endif
