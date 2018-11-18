#include <fstream>
#include "Allele.h"
#include "Gene.h"
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
	setGeneTriat(x);
}

void Gene::WriteGeneToFile(ofstream &, string userfile)
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

	allele.WriteAlleleToFile(GeneInFile, userfile); //problem here?  //THIS IS PROBABLY ALL WRONG
}

void Gene::setGeneName(string &x) { geneName = x; }
string Gene::getGeneName() const { return geneName; }

void Gene::setGeneTriat(string &x)
{
	geneTrait = x;

	cout << "this is inside the setgene trait. genetrait = " << getGeneTrait();
}
string Gene::getGeneTrait() const { return geneTrait; }
