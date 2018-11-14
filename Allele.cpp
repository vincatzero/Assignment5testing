#include <fstream>
#include "Allele.h"
#include <iostream>

using namespace std;
//ifstream WriteAlleleToFile("file.csv");

//ifstream Allele::WriteAlleleToFile("file.csv");

void Allele::WriteAlleleToFile(ofstream &x)
{

	AlleleInFile << getVariantName_1() + "," << getVariantType_1() + "," << getNucleotideSequence_1() + ","
				 << getVariantName_2() + "," << getVariantType_2() + "," << getNucleotideSequence_2() << endl;
}
void Allele::setVariantNames(string x, string y)
{
	x = variantName_1;
	y = variantName_2;
}
string Allele::getVariantName_1() const { return variantName_1; }
string Allele::getVariantName_2() const { return variantName_2; }

void Allele::setNucleotideSequences(string x, string y)
{
	x = nucleotideSequence_1;
	y = nucleotideSequence_2;
}
string Allele::getNucleotideSequence_1() const { return nucleotideSequence_1; }
string Allele::getNucleotideSequence_2() const { return nucleotideSequence_2; }

void Allele::setVariantTypes(string x, string y)
{
	x = variantType_1;
	y = variantType_2;
}

string Allele::getVariantType_1() const { return variantType_1; }
string Allele::getVariantType_2() const { return variantType_2; }

/*void Allele::buildGene(string name, string trait, string A_Variant, string A_Type, string A_NucleotideSequence, string B_Variant, string B_type, string B_NucleotideSequence)
{
}*/