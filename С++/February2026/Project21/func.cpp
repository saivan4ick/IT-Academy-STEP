#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "Header.h"
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
int number = 0;
int vozvrat(vector<string>vect_string, string slovo) {
	for (int i = 0; i < vect_string.size(); i++) {
		if (slovo == vect_string[i]) {
			number++;
		}
	}
	return number;
}