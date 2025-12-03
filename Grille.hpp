#ifndef GRILLE_HPP
#define GRILLE_HPP
#include <Cellule.hpp>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Grille{
private:
    int ligne;
    int colonne;
    vector<vector<Cellule*>> cellules;

public:
    int countVoisinsVivants(int l, int c);
    Cellule* getCellule(int l, int c);
    void setCellule(int l, int c, Cellule* cellule);
    void update (IRule* rule);
    Grille clone(); // Utile pour comparer les itérations

};

#endif