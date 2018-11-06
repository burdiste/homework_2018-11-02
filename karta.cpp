#include "karta.h"
#include <string>
using namespace std;
karta::karta()
{
    //ctor
}

karta::~karta()
{
    //dtor
}

int karta::vrat_nakup_cena()
{
    return m_nakup_cena;
}

string karta::vrat_nazev_karty()
{
    return karta::m_nazev_karty;
}
