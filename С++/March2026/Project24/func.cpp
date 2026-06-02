//#include <iostream>
//#include<vector>
//#include <fstream>
//#include "Header.h"
//#include <string>
//using namespace std;
//vector<string>input_file(string filename) {
//	vector<string>vect;
//	string word;
//	ifstream inp(filename);
//	while (inp >> word) {
//		vect.push_back(word);
//	}
//	inp.close();
//	return vect;
//}
//bool is_number(string slovo) {
//	if (slovo.empty())return false;
//	int i = 0;
//	if (slovo[0] == '-' || slovo[0] == '+') {
//		i = 1;
//	}
//	if (i == slovo.size())return false;
//	for (; i < slovo.size(); i++) {
//		if (slovo[i] < '0' || slovo[i]>'9') {
//			return false;
//		}
//	}
//	return true;
//}
//int str_to_int(string slovo) {
//	int result = 0;
//	int i = 0;
//	bool negative = false;
//	if (slovo[0] == '-') {
//		negative = true;
//		i = 1;
//	}
//	else if (slovo[0] == '+') {
//		i = 1;
//	}
//	for (; i < slovo.size(); i++) {
//		result = result * 10 + (slovo[i] - '0');
//	}
//	return negative ? -result : result;
//}
//int sum_numbers(vector<string>vect) {
//	int sum = 0;
//	for (int i = 0; i < vect.size(); i++)
//}