#ifndef VOZIDLO_H
#define VOZIDLO_H
#include <string>

using namespace std;

enum Trasa {kratka_trasa, stredni_trasa, dlouha_trasa};
class Vozidlo
{
public:
    // Parametricky konstruktor tridy Vozidlo
    Vozidlo(Trasa trasa, string nazev, int pocet_cestujicich, double cena);

    // Vraci cenu vozidla
    double getCena() const;

    // Nastavuje cenu vozidla
    void setCena(double newCena);

    // Vracu pocet cestujicich ve vozidle
    int getPocet_cestujicich() const;

    // Nastavuje pocet cestujicich ve vozidle
    void setPocet_cestujicich(int newPocet_cestujich);

    // Vraci nazev vozidla
    const string &getNazev() const;

    // Nastavuje nazev vozidla
    void setNazev(const string &newNazev);

    // Ziskava trasu vozidla
    Trasa getTrasa() const;

    // Vraci trasu vozidla
    void setTrasa(Trasa newTrasa);

    // Virtualni metoda slouzici pro vypis informaci o vozidle
    virtual void info();

    // Virtualni pure metoda slouzici pro ziskani zbyvajicich km | Metoda mela byt bez tela, ale z nejakeho duvodu mi to vracelo chyby v mainu, ze inicializuji
    //      abstraktni tridu, tak jsem to udelal aspon takhle
    virtual double zbyvajici_km();

     friend double operator+(Vozidlo &v1, Vozidlo *v2);

protected:
    Trasa trasa; // Trasa vozidla
    string nazev; // Nazev vozidla
    int pocet_cestujicich; // Pocet cestujicich
    double cena; // Cena vozidla
};

#endif // VOZIDLO_H
