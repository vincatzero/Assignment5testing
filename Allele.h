#pragma once
#include <string>
#include <fstream>
#include <vector>

using namespace std;
class Allele
{
  public:
	/*  Allele()
	{
		Allele(string x, string y, string z){};
	};
	// come back to constructors  */

	void WriteAlleleToFile(ofstream &x); //change "x"
	ofstream AlleleInFile;				 //make private?

	void setVariantName(string x);
	string getVariantName() const;

	void setNucleotideSequence(string x);
	string getNucleotideSequence() const;

	void setVariantType(string x);
	string getVariantType() const;

	void setGeneName(string x);
	string getGeneName() const;

	void setGeneTriat(string x);
	string getGeneTrait() const;

  private:
	bool
	RunUnitTests();
	string nucleotideSequence;
	string variantName;
	string variantType;
	string geneName;
	string geneTrait;
	//vector<string> AlleleInfo();
};