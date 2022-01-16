#include "vozovypark.h"
#include <iostream>

VozovyPark::VozovyPark(Vozidlo a1, Vozidlo a2, Vozidlo a3, Vozidlo a4, Vozidlo a5, Vozidlo a6, Vozidlo a7, Vozidlo a8, Vozidlo a9, Vozidlo a10)
{
    this->auta[0] = &a1;
    this->auta[1] = &a2;
    this->auta[2] = &a3;
    this->auta[3] = &a4;
    this->auta[4] = &a5;
    this->auta[5] = &a6;
    this->auta[6] = &a7;
    this->auta[7] = &a8;
    this->auta[8] = &a9;
    this->auta[9] = &a10;
}

void VozovyPark::seznamAut()
{
    cout << "\nAuta ve vozovem parku: " << endl;
    for(int i = 0; i < 10; i++){
        this->auta[i]->info();
    }
}

double VozovyPark::ujeteKm()
{
    double sum = 0;
    for(int i = 0; i < 10; i++){
        sum += this->auta[i]->zbyvajici_km();
    }
    return sum;
}
