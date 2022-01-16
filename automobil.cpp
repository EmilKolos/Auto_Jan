#include "automobil.h"
#include <iostream>
#include <string>

Automobil::Automobil(Trasa trasa, string nazev, int pocet_cestujicich, double objem_nadrze, double spotreba, double cena): Vozidlo(trasa, nazev, pocet_cestujicich, cena), objem_nadrze(objem_nadrze), spotreba(spotreba)
{

}

double Automobil::getObjem_nadrze() const
{
    return objem_nadrze;
}

void Automobil::setObjem_nadrze(double newObjem_nadrze)
{
    objem_nadrze = newObjem_nadrze;
}

double Automobil::getSpotreba() const
{
    return spotreba;
}

void Automobil::setSpotreba(double newSpotreba)
{
    spotreba = newSpotreba;
}

void Automobil::info()
{
    Vozidlo::info();
    cout << "Objem nadrze: " << this->getObjem_nadrze() << " Spotreba: " << this->getSpotreba() << endl;
}

double Automobil::zbyvajici_km()
{
    return this->getObjem_nadrze() / (this->getSpotreba() / 100);
}
