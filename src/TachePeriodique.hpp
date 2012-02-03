#ifndef DEF_TACHEPERIODIQUE
#define DEF_TACHEPERIODIQUE

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

#include "Tache.hpp"

using namespace std;

class TachePeriodique : public Tache
{
public:
	TachePeriodique(int Ci,int Pi,int Di);
	~TachePeriodique();

	virtual void Export(int num,ofstream& file);
protected:
	int m_Pi;
};

#endif /* DEF_TACHEPERIODIQUE */

