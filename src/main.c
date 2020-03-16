/*!
\file main.c
\autor Jalbert Sylvain
\version 1
\date 16 mars 2020
\brief fichier principal du programme qui permet à l'utilisateur de faire le tour de magie
*/

#include "tableau.h"
#include "saisie.h"
#define NBRGRILLE 5

/*!
\fn int main ( int argc, char∗∗ argv )
\author Jalbert Sylvain
\version 0.1 Premier jet
\date 16 mars 2020
\brief la fonction principale qui permet à l'utilisateur de faire le tour de magie
\param argc nombre d’arguments en entree
\param argv valeur des arguments en entree
\return 0 si tout c'est bien passé
*/
int main (int argc, char** argv){
  //DECLARATION DES VARIABLES
  int ttint_grille[NBRGRILLE][N][N] = {{{3,7,23,19},{17,9,11,31},{5,27,21,13},{1,25,29,15}},
                                      {{14,26,10,27},{3,30,15,18},{31,6,19,23},{2,7,11,22}},
                                      {{6,5,20,14},{28,23,15,13},{31,29,21,22},{4,30,7,12}},
                                      {{14,10,15,31},{11,27,29,13},{26,28,9,12},{8,30,25,24}},
                                      {{17,23,29,25},{27,30,29,18},{22,21,26,24},{16,28,31,20}}};

  //INITIALISATION DES VARIABLES

  //Fin du programme, Il se termine normalement, et donc retourne 0
  return(0);
}
