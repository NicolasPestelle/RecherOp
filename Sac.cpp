#include <iostream>
#include <vector>
#include "Sac.hpp"
#include <sstream>

using namespace std;

Sac::Sac(int poidMax) : _poidMax(poidMax){}

void Sac::RempliObjetPossible(Objet o){
  _ObjetPossible.push_back(o);
}

string Sac::AfficheObjetPossible(){
stringstream ss;
  string tt ;
  for (int i = 0; i < _ObjetPossible.size();i++){
    ss +=  "Objet num : " << (string)_ObjetPossible[i] << " poid Objet : " << (string)_ObjetPossible[i].getPoid()<< " profit objet : "<< (string)_ObjetPossible[i].getProfit();
  }
  
  return tt = ss.str();
  
}
