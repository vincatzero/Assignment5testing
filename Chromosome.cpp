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

	string moreChromosomes = "y";
	while (moreChromosomes == "y") //put checks on input
	{
		cout << "Enter the gene name:" << endl;
		getline(cin, testy);
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
		allele.setVariantNames(variant_1, variant_2); //why doens't this work?
		allele.setVariantTypes(type_1, type_2);
		allele.setNucleotideSequences(sequence_1, sequence_2); //not working
		// gene.setGeneName(testy); //do i need the setters here?
		//gene.setGeneTriat(trait);
		gene.WriteGeneToFile(testy, trait);

		//Allele Alleles(string variant_1, string type_1, string sequence_1, string variant_2, string type_2, string sequence_2); //testing

		//Gene Genes;
		//newChromosome.push_back(Gene(testy, trait, sequence_1));

		cout << "Would you like to add another gene?" << endl;
		cout << "TEST " << allele.getNucleotideSequence_1() << "-" << allele.getNucleotideSequence_2() << "-" << allele.getVariantName_1() << "-" << allele.getVariantName_2() << "-" << allele.getVariantType_1() << "-" << allele.getVariantType_2() << "-" << endl;
		getline(cin, moreChromosomes);
	};
};

void Chromosome::inputChromosomeFromFile()
{

	cout << "Enter the file would you like to import from:" << endl;
	getline(cin, userfile);
	ifstream userFile(userfile);

	while (!userFile.is_open())
	{
		cout << endl
			 << "Error opening file" << endl
			 << "Press \"1\" to try again or \"2\" to return to the menu:";
		string userOption;
		getline(cin, userOption);

		if (userOption == "1")
		{
			cout << "What file would you like to import from:" << endl;
			getline(cin, userfile);
			continue;
		}							//fix redundency
		else if (userOption == "2") //FIXME whole error checking system doesn't work
		{

			char c;
			cin.get(c);
			break; //FIXME hangs on enter
		}
		else
		{
			while (userOption != "1" || "2")
			{
				cout << "Invalid selection. Please enter \"1\" or \"2\":" << endl;
				getline(cin, userOption); //FIXME works strangely}
				break;
			}
		}
	};

	while (!userFile.eof())
	{
		getline(userFile, line); //FIXME counter number for file without emtpy last line
		counter++;
	}
	userFile.clear();
	userFile.seekg(0, ios::beg);
	for (int i = 0; i < (counter - 1); i++) // (int i = 0; i < counter; i++)   //CAN I USE .GOOD HERE AGAIN?
	{
		int linecount = 0;
		linecount++;					  //FIXME - "# OF CHROMOSOMES FOUND. WOULD YOU LIKE TO VIEW THEM Y/N?"
		getline(userFile, geneName, ','); //DO I HAVE TO INCLUDE THE USER OPTION TO PICK A SPECIFIC CHROMOSOME?
		getline(userFile, geneTrait, ',');
		getline(userFile, variant_1, ',');
		getline(userFile, type_1, ',');
		getline(userFile, e, ',');
		getline(userFile, f, ',');
		getline(userFile, g, ',');
		getline(userFile, h, '\n');
		cout << endl
			 << "                   Chromosome " << i + 1 << " data " << endl
			 << endl

			 << "                   Gene name:       " << geneName << endl
			 << "                   Gene trait:      " << geneTrait << endl
			 << "                   Gene variant 1:  " << variant_1 << endl
			 << type_1 << endl
			 << e << endl
			 << f << endl
			 << g << endl
			 << h << endl
			 << "--------------";
	}
	userFile.close();
	cout << endl
		 << endl;
	allele.pressEnterToGoToMenu();
}

/*string userfile;
	ifstream userFile;

	cout << "What file would you like to import from:" << endl;
	getline(cin, userfile);		 //write checks
	ifstream userFile(userfile); //count(istreambuf_iterator<char>(inFile), istreambuf_iterator<char>(), '\n');

	while (!userFile.is_open())
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
