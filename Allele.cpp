#include <fstream>
#include "Allele.h"
#include <iostream>

using namespace std;
//ifstream WriteAlleleToFile("file.csv");

//ifstream Allele::WriteAlleleToFile("file.csv");

void Allele::WriteAlleleToFile(ofstream &x)
{
	AlleleInFile.open("Alleles.csv", ios::app);

	if (!AlleleInFile.is_open())
	{
		cout << "Error opening file" << endl;
	}
	else
	{
		cout << "Success creating/opening file" << endl; //just for testing
	}
}
void Allele::setVariantName(string x) { x = variantName; }
string Allele::getVariantName() const { return variantName; }

void Allele::setNucleotideSequence(string x) { x = nucleotideSequence; }
string Allele::getNucleotideSequence() const { return nucleotideSequence; }

void Allele::setVariantType(string x) { x = variantType; }
string Allele::getVariantType() const { return variantType; }

void Allele::setGeneName(string x) { x = geneName; }
string Allele::getGeneName() const { return geneName; }

void Allele::setGeneTriat(string x) { x = geneTrait; }
string Allele::getGeneTrait() const { return geneTrait; }

void Allele::buildGene(string name, string trait, string A_Variant, string A_Type, string A_NucleotideSequence, string B_Variant, string B_type, string B_NucleotideSequence)
{
}