#ifndef CELLULE_HPP
#define CELLULE_HPP
#include <Etat.hpp>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Cellule{
private:
    Etat* etat;

public:
    bool isVivant();
    void setEtat(Etat* s);
    Etat* getEtat();

};

#endif