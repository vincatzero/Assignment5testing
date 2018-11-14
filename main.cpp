/*	Project:    NAME OF PROJECT GOES HERE
	Name:       YOUR NAME GOES HERE
    Partner:    PARTNER'S NAME IF ANY
    Class:      example: CSC 1810 - Section 1
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
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
			 << "Please Enter your Choice (1-6) :";
		getline(cin, UserOption);
		while ((UserOption > "6") || (UserOption < "1") || (UserOption.length() > 1))
		{
			cout << "Please enter a valid choice: ";
			getline(cin, UserOption);
		}
	}
	int userChoice = stoi(UserOption);
	switch (userChoice)
	{
	case 6:
		cout << "so long fuckers";
		break;
	}

	// This causes the program to pause at its completion.
	{
		char c;
		cout << "Hit enter to exit:";
		cin.get(c);
	}
	return 0;
}

//testing testing

//check this out
