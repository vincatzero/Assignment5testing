#include <fstream>
#include "Allele.h"
#include "Gene.h"
#include "Chromosome.h"
#include <iostream>

using namespace std;
Gene::Gene()
{
	geneName = "noNameYet";
	geneTrait = "noTraitYet";
}

Gene::Gene(string &x, string &y, string &z)
{
	geneName = x;
	geneTrait = y;
	setGeneTrait(x);
}

void Gene::WriteGeneToFile(ofstream &, string &userfile)
{

	GeneInFile.open(userfile, ios::app);

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

	allele.WriteAlleleToFile(GeneInFile, userfile); //problem here?
}

void Gene::setGeneName(string &x) { geneName = x; }
string Gene::getGeneName() const { return geneName; }

void Gene::setGeneTrait(string &x)
{
	geneTrait = x;

	cout << endl
		 << "this is inside the setgene trait. genetrait = " << getGeneTrait();
	cout << "this gene trait = " << this->getGeneTrait();
}
string Gene::getGeneTrait() const { return geneTrait; }

void Gene::buildGenes()
{

	cout << "Enter the gene name:" << endl;
	getline(cin, geneName);
	cout << "Enter the trait:" << endl;
	getline(cin, geneTrait);

	setGeneName(geneName);
	setGeneTrait(geneTrait);
};
