#include <iostream>
#include <vector>
#include "karta.h"
#include "body.h"
#include "statek.h"
#include "penize.h"
#include "medak.h"

#define POCATEK_STATKY 3
#define POCATEK_MEDAKY 2



using namespace std;

int main()
{
    vector<karta*> ruka;
    statek* STATEK = new statek();
    medak* MEDAK = new medak();

    for (int i = 0; i < POCATEK_STATKY; i++)
    {
        ruka.push_back(STATEK);
    }

    for (int i = 0; i < POCATEK_MEDAKY; i++)
    {
        ruka.push_back(MEDAK);
    }
    ruka.push_back(STATEK);
    cout << "Statek stoji " << STATEK->vrat_nakup_cena() << endl;
    cout << "a ma hodnotu " << STATEK->vrat_bodova_hodnota() << " bodu" << endl;
    return 0;
}
