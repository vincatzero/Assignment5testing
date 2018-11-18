/*	Project:    Gene Sequencer
	Name:       Omar Cataldo
    Class:      CSC 1810 - Section 3
*/

#include <iostream>
#include <string>
#include <fstream>
#include "Allele.h"
#include "Gene.h"
#include "Chromosome.h"
#include "GeneSequencer.h"

using namespace std;

void runMenu()
{

	Gene Genes;
	Chromosome Chromosomes;
	Allele Alleles;
	ofstream test;
	string x;

	string UserOption;
	while (UserOption != "6")
	{
		cout << endl
			 << "        * MENU *" << endl
			 << endl
			 << "1 - Create Chromosome" << endl
			 << "2 - Analyze Chromosome" << endl
			 << "3 - Output Chromosome to File" << endl
			 << "4 - Input Chromosome from File" << endl
			 << "5 - Combine Chromosomes" << endl
			 << "6 - Exit" << endl
			 << endl
			 << "Please Enter your Choice (1-6): ";
		getline(cin, UserOption);
		cout << endl;
		while ((UserOption > "6") || (UserOption < "1") || (UserOption.length() > 1))
		{
			cout << "Please enter a valid choice: ";
			getline(cin, UserOption);
		}

		int userChoice = stoi(UserOption);

		string x = "test2";
		string y = "test4";

		switch (userChoice)
		{
		case 1:
			Chromosomes.buildChromosomes(Chromosomes.GeneVector);
			cout << "back inside the menu. Gene trait = " << Genes.getGeneTrait();

			break;
		case 2:
			Chromosomes.analyzeGenotype(); //FIXED? if you pick "2" without having entered a gene, then press "6", console acts funny
			break;
		case 3:
			cout << "Enter the file you would like to export to: " << endl;
			getline(cin, x);

			Chromosomes.writeChromosmeToFile(test, x);
			break;
		case 4:
			Chromosomes.inputChromosomeFromFile();
			break;
		case 5:
			cout << boolalpha << Alleles.alleleClassTestBench(); /*Alleles.setNucleotideSequences(x, y);
			cout << Alleles.getNucleotideSequence_1() << Alleles.getNucleotideSequence_2();
			Alleles.WriteAlleleToFile(); */

			break;
		case 6:
			cout << Genes.getGeneName(); //FIXME delete this later
			break;
		}
	}
};

int main(int argc, char *argv[])
{

	runMenu();

	// This causes the program to pause at its completion.
	{
		char c;
		cout << "Press enter to exit:";
		cin.get(c);
	}
	return 0;
}
// DOES PRAGMA ONCE GO IN MAIN? IN THE .CPP OR IN THE .H?
//CONSTRUCTORS
//"\033[0;31m    No gene entered yet\033{0m\n" get color working
//"3" comes back to strange menu thing
//why do lines of the menu not show up?