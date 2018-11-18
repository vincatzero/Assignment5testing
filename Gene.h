#pragma once
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Gene
{
  public:
	//void testFunction();
	Allele allele;

	ofstream GeneInFile;
	void WriteGeneToFile(string &title, string &trait);
	void setGeneName(string &x);
	string getGeneName() const;

	void setGeneTriat(string &x); //FIXME "trait" is spelled wrong
	string getGeneTrait() const;

	Gene()
	{
		geneName = "noNameYet";
		geneTrait = "noTraitYet";
	}

	Gene(string &x, string &y, string &z)
	{
		geneName = x;
		geneTrait = y;
		setGeneTriat(x);
	}

  private:
	string geneName;
	string geneTrait;
};