#include "kolo.h"
#include <string>
#include <iostream>

Kolo::Kolo(string nazev, bool krosove, double kolo_km): Vozidlo(kratka_trasa, nazev, 1, 0), krosove(krosove), kolo_km(kolo_km)
{
}

bool Kolo::getKrosove() const
{
    return krosove;
}

void Kolo::setKrosove(bool newSilnicni)
{
    krosove = newSilnicni;
}

double Kolo::getKolo_km() const
{
    return kolo_km;
}

void Kolo::setKolo_km(double newKolo_km)
{
    kolo_km = newKolo_km;
}

void Kolo::info()
{
    Vozidlo::info();
    cout << "Krosove kolo: " << this->getKrosove() << " Stav pneu: " << this->getKolo_km() << endl;
}

double Kolo::zbyvajici_km()
{
    return this->getKolo_km();
}
