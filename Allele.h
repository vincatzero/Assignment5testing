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

	string WriteAlleleToFile(ofstream &x); //change "x"
	ofstream AlleleInFile;				   //make private?

	void setVariantNames(string x, string y);
	string getVariantName_1() const;
	string getVariantName_2() const;

	void setNucleotideSequences(string x, string y);
	string getNucleotideSequence_1() const;
	string getNucleotideSequence_2() const;

	void setVariantTypes(string x, string y);
	string getVariantType_1() const;
	string getVariantType_2() const;

	Allele()
	{

		variantName_1 = "noVariantYet1";
		variantName_2 = "noVariantYet2";

		variantType_1 = "noTypeYet1";
		variantType_2 = "noTypeYet2";

		nucleotideSequence_1 = "xxxx1";
		nucleotideSequence_2 = "xxxx2";
	};

  private:
	bool RunUnitTests();
	string nucleotideSequence_1;
	string nucleotideSequence_2;
	string variantName_1;
	string variantName_2;

	string variantType_1;
	string variantType_2;

	string variantType;
	//vector<string> AlleleInfo();
};