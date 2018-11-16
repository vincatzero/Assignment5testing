#include <fstream>
#include "Allele.h"
#include "Gene.h"
#include <iostream>

using namespace std;

void Gene::WriteGeneToFile(ofstream &x)
{
	GeneInFile.open("Genes.csv", ios::app);

	if (!GeneInFile.is_open())
	{
		cout << "Error opening file" << endl;
	}
	else
	{
		cout << "Success creating/opening file" << endl; //just for testing
	}
	GeneInFile << getGeneName() + "," << getGeneTrait() + ",";
	GeneInFile.close();

	allele.WriteAlleleToFile(allele.AlleleInFile); //problem here?
}

void Gene::setGeneName(string x) { x = geneName; }
string Gene::getGeneName() const { return geneName; }

void Gene::setGeneTriat(string x) { x = geneTrait; }
string Gene::getGeneTrait() const { return geneTrait; }