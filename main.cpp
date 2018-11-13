/*	Project:    Gene Sequencer
	Name:       Omar Cataldo
    Class:      CSC 1810 - Section 3
*/

#include <iostream>
#include <string>
#include <fstream>
#include "Allele.h"

using namespace std;

int main(int argc, char *argv[])
{
	Allele Alleles;

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
			Alleles.WriteAlleleToFile(Alleles.AlleleInFile);
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		}
	}

	// This causes the program to pause at its completion.
	{
		char c;
		cout << "Hit enter to exit:";
		cin.get(c);
	}
	return 0;
}
//laptop test