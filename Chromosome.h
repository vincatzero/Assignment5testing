#pragma once
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Chromosome
{
  public:
	Allele allele;
	Gene gene;

	string testy;
	string test;
	string trait;
	string variant_1;
	string type_1;
	string sequence_1;
	string variant_2;
	string type_2;
	string sequence_2;

	//Chromosome chromosomes;

	void writeChromosmeToFile(ofstream &, string &file);

	void analyzeGenotype();

	vector<Gene> GeneVector; //DO I NEED TO HAVE GENE TWICE?

	void buildChromosomes(vector<Gene> &newChromosome);
	void inputChromosomeFromFile();

	Chromosome() {} //constructor?
	ofstream userFile;

  private:
	string expressedAllele;
	string dominantSequence; //not sure what to do with this
	string DominantorRecesessive;

	//declare variables somewhere else later
	//maybe i can reuse them for other stuff if i declare them in .h
	string geneName;
	string geneTrait;
	//string variant_1;
	//string type_1;
	string e;
	string f;
	string g;
	string h;
	string i;

	string userfile;
	//ifstream userFile;
	int counter = 0;
	string line;
};