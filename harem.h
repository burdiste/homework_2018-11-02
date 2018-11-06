#ifndef HAREM_H
#define HAREM_H
#include "body.h"
#include "penize.h"


class harem : public body, public penize
{
    public:
        harem();
        virtual ~harem();

    protected:

    private:
};

#endif // HAREM_H
