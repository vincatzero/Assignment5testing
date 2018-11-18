#include <fstream>
#include "Allele.h"
#include <iostream>

using namespace std;
Allele::Allele()
{

	variantName_1 = "noVariantYet1";
	variantName_2 = "noVariantYet2";

	variantType_1 = "noTypeYet1";
	variantType_2 = "noTypeYet2";

	nucleotideSequence_1 = "xxxx1";
	nucleotideSequence_2 = "xxxx2";
}

void Allele::WriteAlleleToFile(ofstream &, string &userfile) //do i have to add an input here for user files and change the name of the file?
{
	AlleleInFile.open(userfile, ios::app);
	AlleleInFile << getVariantName_1() + "," << getVariantType_1() + "," << getNucleotideSequence_1() + ","
				 << getVariantName_2() + "," << getVariantType_2() + "," << getNucleotideSequence_2() + "\n";
	AlleleInFile.close();
}
void Allele::setVariantNames(string &x, string &y)
{
	variantName_1 = x;
	variantName_2 = y;
}
string Allele::getVariantName_1() const { return variantName_1; }
string Allele::getVariantName_2() const { return variantName_2; }

void Allele::setNucleotideSequences(string &x, string &y) //BACKWARDS?
{
	nucleotideSequence_1 = x;
	nucleotideSequence_2 = y;
}
string Allele::getNucleotideSequence_1() const { return nucleotideSequence_1; }
string Allele::getNucleotideSequence_2() const { return nucleotideSequence_2; }

void Allele::setVariantTypes(string &x, string &y)
{
	variantType_1 = x;
	variantType_2 = y;
}

string Allele::getVariantType_1() const { return variantType_1; }
string Allele::getVariantType_2() const { return variantType_2; }

void Allele::pressEnterToGoToMenu()
{
	char c;
	cout << "Press enter to return to the menu:";
	cin.get(c);
	cout << flush; //flush needed?

} //FIXME this doesn't work as intended

bool Allele::alleleClassTestBench()
{
	Allele testData;
	string tester1 = "test1";
	string tester2 = "test2";
	ofstream tester_out;
	ifstream tester_in;
	string in_out_1;
	string in_out_2;
	string in_out_3;
	string in_out_4;
	string in_out_5;
	string in_out_6;

	string testfile = "test.csv";

	//TEST 1
	testData.setNucleotideSequences(tester1, tester2);
	if ((testData.getNucleotideSequence_1() != "test1") || (testData.getNucleotideSequence_2() != "test2"))
	{
		cout << "Allele class Set/Get nucleotide sequence error" << endl;
		return false;
	};

	testData.setVariantNames(tester1, tester2);
	if ((testData.getVariantName_1() != "test1") || (testData.getVariantName_2() != "test2"))
	{
		cout << "Allele class Set/Get Variant name error" << endl;
		return false;
	}

	testData.setVariantTypes(tester1, tester2);
	if ((testData.getVariantType_1() != "test1") || (testData.getVariantName_2() != "test2"))
	{
		cout << "Allele class Set/Get Variant type error" << endl;
		return false;
	}

	testData.WriteAlleleToFile(tester_out, testfile);
	tester_in.open("test.csv");
	if (!tester_in.is_open())
	{
		cout << "Allele class Error opening file" << endl;
		return false;
	}
	/*tester_out << tester1 + "," << tester2 + "\n"
			   << tester1 + "," << tester2 + "\n";*/
	/*	tester_out.close();
	tester_in.clear();
	tester_in.seekg(0, ios::beg); //PROBABLY DONT NEED THIS TEST LATER
	tester_in.open("test.csv"); */

	/*tester_in.open("test.csv");

	if (!tester_in.is_open())
	{
		cout << "Error opening file" << endl;
		return false;
	}*/
	for (int i = 1; i <= 1; i++) // (int i = 0; i < counter; i++)   //CAN I USE .GOOD HERE AGAIN?
	{
		getline(tester_in, in_out_1, ',');
		getline(tester_in, in_out_2, ',');
		getline(tester_in, in_out_3, ',');
		getline(tester_in, in_out_4, ',');
		getline(tester_in, in_out_5, ',');
		getline(tester_in, in_out_6, '\n');
	}
	if ((in_out_1 != "test1") || (in_out_2 != "test1") || (in_out_3 != "test1") || (in_out_4 != "test2") || (in_out_5 != "test2") || (in_out_6 != "test2"))
	{
		cout << "Allele class Read/Write to file error " << endl;
		return false;
	}
	else
	{
		cout << "All allele class tests passed" << endl;
		remove("test.csv");
	}

	//RETURN TO MENU TEST?

	return true; //DONT FORGET TO DELETE THE OBJECT AT THE END
};