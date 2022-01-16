#ifndef AUTO_H
#define AUTO_H

#include "vozidlo.h"

class Automobil : public Vozidlo
{
public:
    // Parametricky konstruktor tridy Auto
    Automobil(Trasa trasa, string nazev, int pocet_cestujicich, double objem_nadrze, double spotreba, double cena);

    // Vraci celkovy objem nadrze
    double getObjem_nadrze() const;

    // Nastavuje celkovy objem nadrze
    void setObjem_nadrze(double newObjem_nadrze);

    // Vraci spotrebu automobilu
    double getSpotreba() const;

    // Nastavuje spotrebu automobilu
    void setSpotreba(double newSpotreba);

    // Virtualni funkce slouzici pro vypis informaci o automobilu
    virtual void info() override;

    // Vraci aktualni dojezd automobilu
    virtual double zbyvajici_km() override;

protected:
    double objem_nadrze; // Celkovy objem nadrze v litrech
    double spotreba; // Spotreba automobilu v litrech
};

#endif // AUTO_H
