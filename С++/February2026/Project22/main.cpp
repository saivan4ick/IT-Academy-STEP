#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "Header.h"
using namespace std;
/* 
int main(int argc, char** argv) {
	std::vector<std::string>argv_s;
	for (int i = 0; i < argc; i++) {
		std::cout << i << ") " << argv[i] << std::endl;
		argv_s.push_back(std::string(argv[i]));
	}
	for (int i = 0; i < argv_s.size(); i++) {
		std::cout << i << ") " << argv[i] << std::endl;
	}
}
*/
int main() {
	string text;
	int a = 0;
	string filename = "qqq.txt";
	vector<string>vect = input_file(filename);
	for (int i = 0; i < vect.size(); i++) {
		cout << i << ")" << vect[i] << "" << endl;
	}
	return 0;
}
