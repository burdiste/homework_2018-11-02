#ifndef KARTA_H
#define KARTA_H
#include <string>
using namespace std;

class karta
{
    public:
        karta();
        virtual ~karta();
        virtual int vrat_nakup_cena();
        virtual string vrat_nazev_karty();

    protected:
        int m_nakup_cena;
        string m_nazev_karty;
//   private:
};

#endif // KARTA_H
