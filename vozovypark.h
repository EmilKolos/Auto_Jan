#ifndef VOZOVYPARK_H
#define VOZOVYPARK_H

#include <string>
#include <iostream>

#include "vozidlo.h"

class VozovyPark
{
public:
    // Parametricky konstruktor
    VozovyPark(Vozidlo a1, Vozidlo a2, Vozidlo a3, Vozidlo a4, Vozidlo a5, Vozidlo a6, Vozidlo a7, Vozidlo a8, Vozidlo a9, Vozidlo a10);

    // Slouzi pro vypis aut a jejich informaci ve vozovem parku
    void seznamAut();

    // Vraci celkovy pocet ujetych km aut ve vozovem parku | Vraci 0 kvuli nefungujici metode ve tride Vozidlo
    double ujeteKm();

protected:
    Vozidlo* auta[10]; // Pole vozidel ve vozovem parku
    string jmenoPracovnika; // Jmeno pracovnika

};

#endif // VOZOVYPARK_H
