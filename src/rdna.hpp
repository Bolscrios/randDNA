#include <random>
#include <string>

using namespace std;

string randDNA(int seed, string Lbase, int length){
	
	string random;
	mt19937 eng(seed);
	uniform_int_distribution<int> un(0, Lbase.size()-1);
	
	
	for(int j=0; j<length; j++){
		
		int rnumber = un(eng);
		random += Lbase[rnumber];
		
	}
	return random;
	
}
