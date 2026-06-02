#include <iostream>
#include <vector>
#include <string>
#include "Header2.h"
#include <fstream>
using namespace std;
int main(int argc, char** argv) {
	// string filename = argv[1];
	string filename("qwerty.txt");
	vector<int>vect = read_file(filename);
	read_file(filename);
	cout<<
	return 0;
}