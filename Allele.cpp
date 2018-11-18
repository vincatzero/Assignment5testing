#include <fstream>
#include "Allele.h"
#include <iostream>

using namespace std;

void Allele::WriteAlleleToFile() //do i have to add an input here for user files and change the name of the file?
{
	string g;
	AlleleInFile.open("Genes.csv", ios::app);
	AlleleInFile << getVariantName_1() + "," << getVariantType_1() + "," << getNucleotideSequence_1() + ","
				 << getVariantName_2() + "," << getVariantType_2() + "," << getNucleotideSequence_2() + "\n";
	AlleleInFile.close();
}
void Allele::setVariantNames(string &x, string &y)
{
	variantName_1 = x;
	variantName_2 = y;
}
string Allele::getVariantName_1() const { return variantName_1; }
string Allele::getVariantName_2() const { return variantName_2; }

void Allele::setNucleotideSequences(string &x, string &y) //BACKWARDS?
{
	nucleotideSequence_1 = x;
	nucleotideSequence_2 = y;
}
string Allele::getNucleotideSequence_1() const { return nucleotideSequence_1; }
string Allele::getNucleotideSequence_2() const { return nucleotideSequence_2; }

void Allele::setVariantTypes(string &x, string &y)
{
	variantType_1 = x;
	variantType_2 = y;
}

string Allele::getVariantType_1() const { return variantType_1; }
string Allele::getVariantType_2() const { return variantType_2; }

void Allele::pressEnterToGoToMenu()
{
	char c;
	cout << "Press enter to return to the menu:";
	cin.get(c);
	cout << flush; //flush needed?

} //FIXME this doesn't work as intended