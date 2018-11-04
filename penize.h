#ifndef PENIZE_H
#define PENIZE_H
#include "karta.h"


class penize : public karta
{
    public:
        penize();
        virtual ~penize();
        virtual int vrat_penize();

    protected:
        int m_penize;
    private:
};

#endif // PENIZE_H
