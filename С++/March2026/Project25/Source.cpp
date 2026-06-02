#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
/* 
int main(int argc, char** argv)
{
	int number_cin = 100;
	cout << ".";
	int number = number_cin;
	for (int i = 0; i < number;)
	{
		number_cin = number_cin - 3;
		if (number_cin < 0) {
			break;
		}
		cout << number_cin << "\n";
	}
*/
/* аргументы командной строки 1
setlocale(LC_ALL, "Russian");
vector<string>argv_s;
for (int i = 0; i < argc; i++)
{
	cout << i << ") " << argv[i] << endl;
	argv_s.push_back(string(argv[i]));
}
for (int i = 0; i < argv_s.size(); i++)
{
	cout << i << ") " << argv[i] << endl;
}
return 0;
*/
/* аргументы командной строки 2
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	for (int i = 0; i < argc; i++) {
		cout << argv[i] << "";
	}
	return 0;
}
*/

int main() {
	int a = 4;
	int b = 0;
	cout << a / b;
	return 0;
}