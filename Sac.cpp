#include <iostream>
#include <vector>
#include "Sac.hpp"
using namespace std;

Sac::Sac(int poidMax) : _poidMax(poidMax){}

void Sac::RempliObjetPossible(Objet o){
  _ObjetPossible.push_back(o);
}

string Sac::AfficheObjetPossible(){

  string tt ;
  for (int i = 0; i < _ObjetPossible.size();i++){
    tt +=  "Objet num : " _ObjetPossible[i] " poid Objet : "  _ObjetPossible[i].getPoid() " profit objet : " _ObjetPossible[i].getProfit();
  }
  return tt;
  
}
