#include <fstream>
#include "Allele.h"
#include "Gene.h"
#include <iostream>

using namespace std;

void Gene::WriteGeneToFile(string &name, string &trait)
{
	Gene::setGeneName(name);
	Gene::setGeneTriat(trait);
	GeneInFile.open("Genes.csv", ios::app);

	if (!GeneInFile.is_open())
	{
		cout << "Error opening file" << endl;
	}
	else
	{
		cout << "Success creating/opening file" << endl; //just for testing
	}
	GeneInFile << getGeneName() + "," << getGeneTrait() + ","; //testing trait
	GeneInFile.close();

	allele.WriteAlleleToFile(); //problem here?
}

void Gene::setGeneName(string &x) { geneName = x; }
string Gene::getGeneName() const { return geneName; }

void Gene::setGeneTriat(string &x)
{
	geneTrait = x;

	cout << "this is inside the setgene trait. genetrait = " << getGeneTrait();
}
string Gene::getGeneTrait() const { return geneTrait; }
