#pragma once
#include <string>
#include <fstream>
#include <vector>

using namespace std;
class Allele
{

  public:
	Allele(); //default contructor now defined in .cpp

	ofstream AlleleInFile;							  //make private?
	void WriteAlleleToFile(ofstream &, string &test); //change "x"

	void setVariantNames(string &x, string &y);
	string getVariantName_1() const;
	string getVariantName_2() const;

	void setNucleotideSequences(string &x, string &y); //BY REFERENCE?
	string getNucleotideSequence_1() const;
	string getNucleotideSequence_2() const;

	void setVariantTypes(string &x, string &y);
	string getVariantType_1() const;
	string getVariantType_2() const;

	void pressEnterToGoToMenu();

	Allele(string &variant_1, string &type_1, string &sequence_1, string &variant_2, string &type_2, string &sequence_2)
	{
		nucleotideSequence_1 = variant_1;
		variantType_1 = type_1;
		nucleotideSequence_1 = sequence_1;
		variantName_2 = variant_2;
		variant_2 = type_2;
		nucleotideSequence_2 = sequence_2;
	}
	Allele(string &x) { nucleotideSequence_1 = x; } //what is this?

	bool alleleClassTestBench();

  private:
	bool RunUnitTests();

	string nucleotideSequence_1;
	string nucleotideSequence_2;

	string variantName_1;
	string variantName_2;

	string variantType_1;
	string variantType_2;

	string variantType;
};