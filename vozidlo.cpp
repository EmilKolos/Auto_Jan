#include "vozidlo.h"
#include <iostream>

Vozidlo::Vozidlo(Trasa trasa, string nazev, int pocet_cestujicich, double cena): trasa(kratka_trasa), nazev("Neuvedeno"), pocet_cestujicich(0), cena(0)
{
    this->trasa = trasa;
    this->nazev = nazev;
    this->pocet_cestujicich = pocet_cestujicich;
    this->cena = cena;
}

double Vozidlo::getCena() const
{
    return cena;
}

void Vozidlo::setCena(double newCena)
{
    cena = newCena;
}

int Vozidlo::getPocet_cestujicich() const
{
    return pocet_cestujicich;
}

void Vozidlo::setPocet_cestujicich(int newPocet_cestujich)
{
    pocet_cestujicich = newPocet_cestujich;
}

const string &Vozidlo::getNazev() const
{
    return nazev;
}

void Vozidlo::setNazev(const string &newNazev)
{
    nazev = newNazev;
}

Trasa Vozidlo::getTrasa() const
{
    return trasa;
}

void Vozidlo::setTrasa(Trasa newTrasa)
{
    trasa = newTrasa;
}

void Vozidlo::info()
{
    cout << this->getNazev() << ": "  << this->getCena() << " | " << this->getPocet_cestujicich() << endl;
}

double operator+(Vozidlo &v1, Vozidlo &v2){
    return v1.zbyvajici_km() + v2.zbyvajici_km();
}

double Vozidlo::zbyvajici_km(){
    return 0;
}
