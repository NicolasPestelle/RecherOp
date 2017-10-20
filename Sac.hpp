#include <vector>
#include "Objet.hpp"

class Sac {

private :
  int _poidMax;
  std::vector<Objet> _ObjetPossible;
public :
  Sac(int poidMax);
  void RempliObjetPossible(Objet o);
  std::string AfficheObjetPossible();

   
};
