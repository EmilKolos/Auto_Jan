#include <iostream>

#include "vozidlo.h"
#include "kolo.h"
#include "automobil.h"
#include "vozovypark.h"

using namespace std;

int main()
{
    Automobil a1 = Automobil(kratka_trasa,"Auto 1", 4, 70, 5.6, 925000);
    a1.info();

    Kolo k1 = Kolo("Kolo 1", false, 2000);
    k1.info();



    Automobil a2 = Automobil(kratka_trasa,"Auto 2", 4, 70, 5.6, 55000);
    Automobil a3 = Automobil(kratka_trasa,"Auto 3", 4, 70, 5.6, 125000);
    Automobil a4 = Automobil(kratka_trasa,"Auto 4", 4, 70, 5.6, 75020);
    Automobil a5 = Automobil(kratka_trasa,"Auto 5", 4, 70, 5.6, 225000);
    Automobil a6 = Automobil(kratka_trasa,"Auto 6", 4, 70, 5.6, 925000);
    Automobil a7 = Automobil(kratka_trasa,"Auto 7", 4, 70, 5.6, 66000);
    Automobil a8 = Automobil(kratka_trasa,"Auto 8", 4, 70, 5.6, 25000);
    Automobil a9 = Automobil(kratka_trasa,"Auto 9", 4, 70, 5.6, 92000);
    Automobil a10 = Automobil(kratka_trasa,"Auto 10", 4, 70, 5.6, 35000);

    VozovyPark park = VozovyPark(a1,a2,a3,a4,a5,a6,a7,a8,a9,a10);
    park.seznamAut();
    cout << "Soucet vsech ujetych km: " << park.ujeteKm() << endl;
    return 0;
}
