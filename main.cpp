/*	Project:    Gene Sequencer
	Name:       Omar Cataldo
    Class:      CSC 1810 - Section 3
*/

#include <iostream>
#include <string>
#include <fstream>
#include "Allele.h"
#include "Gene.h"

using namespace std;

void runMenu()
{
	Allele Alleles;
	Gene Genes;

	string UserOption;
	while (UserOption != "6")
	{
		cout << "        * MENU *" << endl
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
		cout << "Hit enter to exit:";
		cin.get(c);
	}
	return 0;
}
