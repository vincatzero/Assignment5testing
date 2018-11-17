#include <fstream>
#include "Allele.h"
#include "Gene.h"
#include "Chromosome.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
void Chromosome::analyzeGenotype()
{
	DominantorRecesessive = allele.getVariantType_1();
	if (DominantorRecesessive == "noTypeYet1")
	{
		cout << "No gene entered yet"
			 << endl
			 << endl;
		allele.pressEnterToGoToMenu();
		//FIXED?
	}

	if (DominantorRecesessive == "Dominant")
	{
		expressedAllele = allele.getVariantName_1();
		dominantSequence = allele.getNucleotideSequence_1();
	}
	else if (DominantorRecesessive == "Recessive")
	{
		DominantorRecesessive = allele.getVariantType_2(); //THINK ABOUT ADDING SOME CHECK HERE IN CASE "2" ISN'T DOMINANT
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

void Chromosome::buildChromosomes(vector<Gene> &newChromosome)
{
	string test;
	string trait;
	string variant_1;
	string type_1;
	string sequence_1;
	string variant_2;
	string type_2;
	string sequence_2;
	string moreChromosomes = "y";
	while (moreChromosomes == "y") //put checks on input
	{
		cout << "Enter the gene name:" << endl;
		getline(cin, test);
		cout << "Enter the trait:" << endl;
		getline(cin, trait);
		cout << "Enter the allele 1 variant:(e.g.brown / blue / etc.)" << endl;
		getline(cin, variant_1);
		cout << "Enter the allele 1 type: (e.g. dominant or recessive)" << endl;
		getline(cin, type_1);
		cout << "Enter the allele 1 nucleotide sequence: (e.g. AGTC)" << endl;
		getline(cin, sequence_1);

		cout << "Enter the allele 2 variant: (e.g.brown / blue / etc.)" << endl;
		getline(cin, variant_2);
		cout << "Enter the allele 2 type: (e.g. dominant or recessive)" << endl;
		getline(cin, type_2);
		cout << "Enter the allele 2 nucleotide sequence: (e.g. AGTC)" << endl;
		getline(cin, sequence_2);

		allele.setNucleotideSequences(sequence_1, sequence_2); //not working

		Allele Alleles(string variant_1, string type_1, string sequence_1, string variant_2, string type_2, string sequence_2); //testing

		//Gene Genes;
		newChromosome.push_back(Gene(test, trait, sequence_1));

		cout << "Would you like to add another gene?" << endl;
		getline(cin, moreChromosomes);
	};
};

void Chromosome::inputChromosomeFromFile()
{

	cout << "What file would you like to import from:" << endl;
	getline(cin, userfile);
	ifstream userFile(userfile);
	if (!userFile.is_open())
	{
		cout << endl
			 << "Error opening file" << endl
			 << "Press \"1\" to try again or \"2\" to return to the menu:";
		string userOption;
		getline(cin, userOption);
	}
	else
	{
		cout << "what the fuck";
	}
	/*while (!userFile.eof())
	{
		getline(userFile, line);         //FIXME how did this code break everything?
		counter++;
	}*/
	while (userFile.good()) // (int i = 0; i < counter; i++)
	{
		getline(userFile, geneName, ',');
		cout << "genename test " << geneName;
	}
}

/*string userfile;
	ifstream userFile;

	cout << "What file would you like to import from:" << endl;
	getline(cin, userfile);		 //write checks
	ifstream userFile(userfile); //count(istreambuf_iterator<char>(inFile), istreambuf_iterator<char>(), '\n');

	/*while (!userFile.is_open())
	{
		cout << endl
			 << "Error opening file" << endl
			 << "Press \"1\" to try again or \"2\" to return to the menu:";
		string userOption;
		getline(cin, userOption);

		if (userOption == "1")
		{
			cout << "What file would you like to import from:" << endl;
			getline(cin, file);
		} //fix redundency
		else if (userOption == "2")
		{
			char c;
			cin.get(c); //FIXME hangs on enter
			break;
		}
		else
		{
			while (userOption != "1" || "2")
			{
				cout << "Invalid selection. Please enter \"1\" or \"2\":" << endl;
				getline(cin, userOption); //FIXME works strangely}
				break;
			}
		};
	}*/
/*string line;
	int counter = 0;
	//ifstream file(userfile);
	while (!userFile.eof())
	{
		getline(userFile, line);
		counter++;
	}
	while (userFile.good())
	{
		getline(userFile, geneName, ',');
		getline(userFile, geneTrait, ',');
		getline(userFile, variant_1, ',');
		getline(userFile, type_1, ',');
		getline(userFile, e, ',');
		getline(userFile, f, ',');
		getline(userFile, g, '\n');
		getline(userFile, h, ',');
	}
	cout << "Heres the chromosome data " << geneName << endl;

	cout << "counter at " << counter << endl;
	userFile.close();
	*/
/*
		getline(userFile, geneName, ',');
		getline(userFile, geneTrait, ',');
		getline(userFile, variant_1, ',');
		getline(userFile, type_1, ',');
		getline(userFile, e, ',');
		getline(userFile, f, ',');
		getline(userFile, g, '\n');
		getline(userFile, h, ',');

		cout << "Heres the chromosome data " << endl

			 << geneName << endl
			 << geneTrait << endl
			 << variant_1 << endl
			 << type_1 << endl
			 << e << endl
			 << f << endl
			 << g << endl
			 << h << endl
			 << "--------------";
		userFile.close();*/
