#ifndef ETAT_HPP
#define ETAT_HPP

#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Etat{
public:
    bool isVivant();


};

class EtatVivant : Etat{
public:
    bool isVivant();

};

class EtatMort : Etat{
public:
    bool isVivant();

};

#endif