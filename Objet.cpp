#include "Objet.hpp"
#include <iostream>

Objet::Objet(int poid, int profit) :
   _poid(poid), _profit(profit)
{
  _estDansLeSac = false;
}

int Objet::getPoid(){
  return _poid;
}

int Objet::getProfit(){
  return _profit;
}

void Objet::setDansLeSac(){
  _estDansLeSac = false;
}

