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

	void anaylzeGenotype();

	Chromosome(){}; //constructor?

  private:
	vector<Gene> genes();
	string expressedAllele;
	string dominantSequence; //not sure what to do with this
	string DominantorRecesessive;
};