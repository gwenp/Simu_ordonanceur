#ifndef DEF_GENERATEUR
#define DEF_GENERATEUR

#include <iostream>
#include <vector>
#include "TachePeriodique.hpp"
#include "Tache.hpp"

#include <fstream>
#include <cstdlib>
#include <ctime> 

using namespace std;

class Generateur
{
public:
	Generateur();
	~Generateur();

	void GenerationControlee();
	void GenerationAleatoire();
private:
	vector<Tache> t;
	vector<TachePeriodique> tp;

};

#endif /* DEF_GENERATEUR */

