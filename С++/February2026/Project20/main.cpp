#include <iostream>
#include <string>
#include "Header.h"
#include <vector>
#include <fstream>
using namespace std;

int main() 
{
	int a;
	cout << "A: ";
	cin >> a;
	cout << "Kolichestvo: " << endl;
	vector<int>v;
	v = read("qwerty.txt");
	int c = count(a, v);
	cout << c;
	return 0;
}
