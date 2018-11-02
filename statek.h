#ifndef STATEK_H
#define STATEK_H

#include "karta.h"
#include "body.h"

class statek: public body, public karta
{
    public:
        statek();
        virtual ~statek();


    protected:

    private:
};

#endif // STATEK_H
