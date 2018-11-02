#ifndef BODY_H
#define BODY_H
#include "karta.h"

class body : public karta

{
    public:
        body();
        virtual ~body();
        virtual int vrat_bodova_hodnota();


    protected:
         int m_bodova_hodnota;
    private:

};

#endif // BODY_H
