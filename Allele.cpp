#include <fstream>
#include "Allele.h"

using namespace std;
//ifstream WriteAlleleToFile("file.csv");

//ifstream Allele::WriteAlleleToFile("file.csv");

void Allele::WriteAlleleToFile(ofstream &x)
{
	AlleleInFile.open("Alleles.csv");
}