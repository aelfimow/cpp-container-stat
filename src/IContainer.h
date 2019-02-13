#ifdef ICONTAINER_H
#error Already included
#else
#define ICONTAINER_H

class IContainer
{
    public:
        IContainer() { }
        virtual ~IContainer() { }

        virtual void run() = 0;
};

#endif
