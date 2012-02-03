#include <iostream>

#include "Generateur.hpp"

using namespace std;

int main(int argc, char* argv[])
{
	Generateur g;

	int choix;

	cout<<	"generation controlee ou aleatoire?"	<<	endl
		<<	"[0] Controlee"	<<	endl
		<<	"[1] Aleatoire" << 	endl;

	cin >> choix;

	if(choix==0)
		g.GenerationControlee();
	if(choix==1)
		g.GenerationAleatoire();//Up entre 0 et 1
}
