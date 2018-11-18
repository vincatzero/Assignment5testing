#pragma once
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Gene
{
  public:
	Allele allele;

	ofstream GeneInFile;
	void WriteGeneToFile(ofstream &, string userfile);
	void setGeneName(string &x);
	string getGeneName() const;

	void setGeneTriat(string &x); //FIXME "trait" is spelled wrong
	string getGeneTrait() const;

	Gene();

	Gene(string &x, string &y, string &z);

  private:
	string geneName;
	string geneTrait;
};