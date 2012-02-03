#ifndef DEF_TACHE
#define DEF_TACHE

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

class Tache
{
public:
	Tache(int Ci,int Di);
	~Tache();

	string getType();
	
	virtual void Export(int num, ofstream& file);
protected:
	string m_type;

	int m_Ci;
	int m_Di;
};

#endif /* DEF_TACHE */

