#include "Generateur.hpp"

Generateur::Generateur()
{}
Generateur::~Generateur()
{}

void Generateur::GenerationControlee()
{
	int nbTaches = 0;
	cout<<"Nombre de tâches périodiques à générer?"<<endl;
	cin>>nbTaches;
	
	for(int i=0;i<nbTaches;i++)
	{
		int Ci,Pi,Di;
		cout<<"tache"<<i<<":"<<endl<<"Ci=";
		cin>>Ci;
		cout<<endl<<"Pi=";
		cin>>Pi;
		cout<<endl<<"Di=";
		cin>>Di;
		tp.push_back(TachePeriodique(Ci,Pi,Di));
	}

	nbTaches = 0;
	cout<<"Nombre de tâches apériodiques à générer?"<<endl;
	cin>>nbTaches;
	
	for(int i=0;i<nbTaches;i++)	
	{
		int Ci,Pi,Di;
		cout<<"tache"<<i<<":"<<endl<<"Ci=";
		cin>>Ci;
		cout<<endl<<"Pi=";
		cin>>Pi;
		cout<<endl<<"Di=";
		cin>>Di;
		t.push_back(Tache(Ci,Di));
	}

	int i=0;

	ofstream file;
	file.open ("export.txt");
  
	for(vector<TachePeriodique>::iterator itp=tp.begin();itp!=tp.end();itp++)
	{
		itp->Export(i,file);

		i++;
	}
	for(vector<Tache>::iterator it=t.begin();it!=t.end();it++)
	{
		it->Export(i,file);

		i++;
	}
	file.close();
}

void Generateur::GenerationAleatoire()
{
	int nbTaches = 0;
	cout<<"Nombre de tâches périodiques à générer?"<<endl;
	cin>>nbTaches;

	float Umax;
	cout<<"utilisation du processeur max?"<<endl;
	cin>>Umax;

	int nbTry = 0;
	for(unsigned i=0;i<nbTaches;i++)
	{
		nbTry = 0;
		int Ci = ((float)rand())/RAND_MAX*20.;
		
		int Pi=((float)rand())/RAND_MAX*20.;
		

		while(((float)Ci)/((float)Pi) != Umax && nbTry <= 20)
		{
			Pi=((float)rand())/RAND_MAX*20.;
			nbTry++;
		}

		if(nbTry>=20)
			i--;
		else
		{
			cout << "Ci= " << Ci << endl; 
			cout << "Pi= " << Pi << endl; 
			cout << "Ci/Pi= " << ((float)Ci)/((float)Pi) << endl; 
		}		 
	}
}
