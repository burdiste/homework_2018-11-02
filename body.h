#ifndef BODY_H
#define BODY_H
#include "karta.h"

class body : public karta

{
    public:
        body();
        virtual ~body();
        int vrat_bodova_hodnota();


    protected:

    private:
        int m_bodova_hodnota;
};

#endif // BODY_H
