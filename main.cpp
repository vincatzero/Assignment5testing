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

using namespace std;

void runMenu()
{
	Allele Alleles;
	Gene Genes;
	Chromosome Chromosomes;

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
		switch (userChoice)
		{
		case 1:
			break;
		case 2:
			Chromosomes.anaylzeGenotype(); //FIXME if you pick "2" without having entered a gene, then press "6", console acts funny
			break;
		case 3:
			Genes.WriteGeneToFile(Genes.GeneInFile);
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
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
//"\033[0;31m    No gene entered yet\033{0m\n" get color working