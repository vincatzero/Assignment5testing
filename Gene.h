#pragma once
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Gene
{
  public:
	ofstream GeneInFile;
	void WriteGeneToFile(ofstream &x);
	void setGeneName(string x);
	string getGeneName() const;
	Allele.WriteAlleleToFile(ofstream &x);

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
	Allele allele;
};