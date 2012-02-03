#include "TachePeriodique.hpp"

TachePeriodique::TachePeriodique(int Ci,int Pi,int Di) : Tache(Ci,Di), m_Pi(Pi)
{
	m_type="TachePeriodique";
}

TachePeriodique::~TachePeriodique()
{}

void TachePeriodique::Export(int num, ofstream& file)
{
	cout<<"periodique!!!!"<<endl;
	file	<<	"TachePeriodique : "	<<	num	<<	endl;
	file	<<	"Ci : "					<<	m_Ci<<	endl;
	file	<<	"Di : "					<<	m_Di<<	endl;
	file	<<	"Pi : "					<<	m_Pi<<	endl;
}
