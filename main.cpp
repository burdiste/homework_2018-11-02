#include <iostream>
#include <vector>
#include "karta.h"
#include "body.h"
#include "statek.h"
#include "penize.h"
#include "medak.h"
#include "lovec_perel.h"
#include "harem.h"

#define POCATEK_STATKY 3
#define POCATEK_MEDAKY 2



using namespace std;

int main()
{
    vector<karta*> ruka;
    statek* STATEK = new statek();
    medak* MEDAK = new medak();
    lovec_perel* LOVEC_PEREL = new lovec_perel();
    harem* HAREM = new harem();

    for (int i = 0; i < POCATEK_STATKY; i++)
    {
        ruka.push_back(STATEK);
    }

    for (int i = 0; i < POCATEK_MEDAKY; i++)
    {
        ruka.push_back(MEDAK);
    }
//    ruka.push_back(LOVEC_PEREL);

    cout << "Statek stoji " << STATEK->vrat_nakup_cena() << endl;
    cout << "a ma hodnotu " << STATEK->vrat_bodova_hodnota() << " bodu" << endl;
    cout << endl;

    cout << "Lovec perel stoji " << LOVEC_PEREL->vrat_nakup_cena() << endl;
    cout << "a dela: " << LOVEC_PEREL->do_sth() << endl;
    cout << endl;
    cout << "Harem stoji " << HAREM->vrat_nakup_cena() << endl;
    cout << "Harem ma hodnotu " << HAREM->vrat_bodova_hodnota() << endl;
    cout << "a dava na nakup " << HAREM->vrat_penize() << " penez" << endl;

    return 0;
}
