#pragma once
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Gene
{
  public:
	void testFunction();
	Allele allele;

	ofstream GeneInFile;
	void WriteGeneToFile(ofstream &x);
	void setGeneName(string x);
	string getGeneName() const;
	//allele.WriteAlleleToFile(x);

	void setGeneTriat(string x);
	string getGeneTrait() const;

	Gene()
	{
		geneName = "noNameYet";
		geneTrait = "noTraitYet";
	};

  private:
	string geneName;
	string geneTrait;
};