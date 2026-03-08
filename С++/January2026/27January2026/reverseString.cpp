#include <iostream>
#include <string>
#include "reverseString.h"
using namespace std;
int main() {
	std::string word2 = "World";
	reverseString(word2);
	std::cout << word2 << std::endl;
	return 0;
}
