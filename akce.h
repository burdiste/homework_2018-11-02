#ifndef AKCE_H
#define AKCE_H
#include <string>
#include "karta.h"

using namespace std;

class akce : public karta
{
    public:
        akce();
        virtual ~akce();
        virtual string do_sth();

    protected:
         string m_do_sth;
    private:

};

#endif // AKCE_H
