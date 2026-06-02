/*#include <iostream>
#include <string>
bool is_number(char a) {
	if (a >= '0' && a <= '9') {
		return true;
	}
	return false;
}
bool is_number(std::string strng) {
	bool a = true;
	for (int i = 0; i < strng.size(); i++) {
		if (!is_number(strng[i])) {
			a = false;
			break;
		}
	}
	return a;
}
int main() {
	std::cout << (char)('0' - 5) << "    " << (int)'z' << std::endl;
	std::string string = "3z+";
	for (int i = 0;i<string.size();i++) {
		std::cout << string[i] << std::endl;
	}
	bool a=is_number(string);
	std::cout << a << std::endl;
}*/