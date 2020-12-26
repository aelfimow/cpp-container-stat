#ifdef EMPTY_H
#error Already included
#else
#define EMPTY_H

class empty : public IContainer
{
    public:
        explicit empty(size_t);
        ~empty() override = default;

        void run() override;

    public:
        empty() = delete;
};

#endif
