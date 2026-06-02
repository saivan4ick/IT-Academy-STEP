#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "Header.h"
using namespace std;
int main() {
	string text;
	int b = 0;
	string filename = "qwerty.txt";
	vector<string>vec = input_file(filename);
	for (int i = 0; i < vec.size(); i++) {
		cout << i << ")" << vec[i] << " " << vozvrat(vec, vec[i]) << endl;
	}
	return 0;
}