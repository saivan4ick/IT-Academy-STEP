#include <iostream>	
#include <string>	
#include <vector>	
#include <fstream>

using namespace std;
int main() {
	uint64_t test = 1;
	for (uint64_t i = 0; i < 0xfffffff; i++)
	{
		test *= i;
	}
	cout << test;
	return 0;
}