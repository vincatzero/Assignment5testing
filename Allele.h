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

	void setNucleotideSequence(string x, string y);
	string getNucleotideSequence_1() const;

	void setVariantType(string x);
	string getVariantType() const;

	void setGeneName(string x);
	string getGeneName() const;

	void setGeneTriat(string x);
	string getGeneTrait() const;

	Allele()
	{
		geneName = "noNameYet";
		geneTrait = "noTraitYet";
		variantName = "noVariantYet";
		variant_1 = "noTypeYet";
		nucleotideSequence_1 = "xxxx1";
		nucleotideSequence_2 + "xxxx2";
	};

  private:
	bool
	RunUnitTests();
	string nucleotideSequence_1;
	string nucleotideSequence_2;
	string variantName;
	string variant_1;
	string variantType;
	string geneName;
	string geneTrait;
	//vector<string> AlleleInfo();
};