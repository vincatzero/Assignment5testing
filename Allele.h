#pragma once
#include <string>
#include <fstream>
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

  private:
	bool RunUnitTests();
	string nucleotideSequence;
	string variantName;
	string variantType;
};