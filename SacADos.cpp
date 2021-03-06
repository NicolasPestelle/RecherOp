#include <iostream>
#include <string>
#include <fstream>
#include "Sac.hpp"


using namespace std;


int main(int argc,char** argv){

  if(argc<2){
    std::cout << "pas assez d'aarguments utiliser ./tp1 <monTexte>";
      }else{
    
    std::ifstream ifs(argv[1], ios::in);
    
    int nbObjet;


    ifs >> nbObjet;
    int tabProfit[nbObjet];
    int tabPoids[nbObjet];
    int poidsMax;
    //on lis ligne par ligne
    for(int i = 0; i < nbObjet; i++){
      ifs >> tabProfit[i];
    }

    for(int j = 0; j < nbObjet;  j++){
      ifs >> tabPoids[j];

    }

     ifs >> poidsMax ;
     std::cout << "poidsMAX : " << poidsMax << endl;

     Sac sac(poidsMax);
     
     //création des objets
     for (int k = 0; k < nbObjet; k++){
       Objet Objet (tabPoids[k],tabProfit[k]);
       /* cout << "Objet num : " << k << " Objet poids : " << Objet.getPoid() << " Objet profit : "<<Objet.getProfit()<< endl ; */

       sac.RempliObjetPossible(Objet);
     }

     cout << sac.AfficheObjetPossible();
				   
  }

}
