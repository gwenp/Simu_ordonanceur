#include "Tache.hpp"

Tache::Tache(int Ci,int Di) : m_Ci(Ci), m_Di(Di)
{
	m_type="Tache";
}

Tache::~Tache()
{}

string Tache::getType()
{
	return m_type;
}

void Tache::Export(int num, ofstream& file)
{
	file	<<	"Tache : "	<<	num	<<	endl;
	file	<<	"Ci : "		<<	m_Ci<<	endl;
	file	<<	"Di : "		<<	m_Di<<	endl;
}
