#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Header2.h"
using namespace std;
vector<int>read_file(string filename) {
	vector<int>vect;
	ifstream inp(filename);
	int number;
	while (inp >> number) {
		vect.push_back(number);
	}
	inp.close();
	return vect;
}
