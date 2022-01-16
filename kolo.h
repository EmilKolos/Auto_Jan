#ifndef KOLO_H
#define KOLO_H

#include "vozidlo.h"
#include <string>

class Kolo : public Vozidlo
{
public:
    // Parametricky konstruktor tridy Kolo
    Kolo(string nazev, bool krosove, double kolo_km);

    // Vraci informaci, zda je kolo krosove, nebo silnicni
    bool getKrosove() const;

    // Nastavuje informaci, zda je kolo krosove, nebo silnicni
    void setKrosove(bool newSilnicni);

    // Vraci vzdalenost, kterou je mozno s kolem ujet
    double getKolo_km() const;

    // Nastavuje vzdalenost, kterou je mozno s kolem ujet
    void setKolo_km(double newKolo_km);

    // Prekryta trida slouzici pro vypis informaci o kole
    virtual void info() override;

    // Prekryta trida vracejici pocet zbyvajici km
    virtual double zbyvajici_km() override;

protected:
    bool krosove; // Udava, za je kolo krosove
    double kolo_km; // Pocet zbyvajicich km
};

#endif // KOLO_H
