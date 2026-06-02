#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
vector<string>input_file(string filename) {
	vector<string>vect;
	string word;
	ifstream inp(filename);
	while (inp >> word) {
		vect.push_back(word);
	}
	inp.close();
	return vect;
}
int vozvrat(vector<string>vect,string slovo)