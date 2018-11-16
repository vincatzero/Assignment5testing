#include <fstream>
#include "Allele.h"
#include "Gene.h"
#include "Chromosome.h"
#include <iostream>

using namespace std;

void Chromosome::anaylzeGenotype()
{
	DominantorRecesessive = allele.getVariantType_1();
	if (DominantorRecesessive == "noTypeYet1")
	{
		cout
			<< "No gene entered yet"
			<< endl
			<< endl;
		allele.pressEnterToGoToMenu();
		//FIXME did i fix it?
	}

	if (DominantorRecesessive == "Dominant")
	{
		expressedAllele = allele.getVariantName_1();
		dominantSequence = allele.getNucleotideSequence_1();
	}
	else if (DominantorRecesessive == "Recessive")
	{
		DominantorRecesessive = allele.getVariantType_2();
		expressedAllele = allele.getVariantName_2();
		dominantSequence = allele.getNucleotideSequence_2();
	}
	if (DominantorRecesessive == "Dominant")
	{
		cout << "Gene Name:                " << gene.getGeneName() << endl
			 << "Genetic Trait:            " << gene.getGeneTrait() << endl
			 << "Expressed Allele:         " << expressedAllele << endl
			 << "Nucleotide Sequence:      " << dominantSequence << endl
			 << endl;
		allele.pressEnterToGoToMenu();
	}
};