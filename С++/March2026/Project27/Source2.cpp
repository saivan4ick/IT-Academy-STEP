#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
vector<vector<string>>readFile(string fileName) {
	vector<vector<string>>res = {};
	ifstream inp(fileName);
	string temp = "";
	vector<string>tempList = {};
	while (inp >> temp) {
		tempList.push_back(temp);
		for (int i = 0; i < 2; i++) {
			inp >> temp;
			tempList.push_back(temp);
		}
		res.push_back(tempList);
		tempList.clear();
	}
	return res;
}
void printList(vector<vector<string>> list) {
	for (int i = 0; i < list.size(); i++) {
		for (int n = 0; n < list[i].size(); n++) {
			cout << list[i][n] << " ";
		}
		cout << endl;
	}
}
int main(int argc, char** argv) {
	string fileName = "qwerty.txt";
	vector<vector<string>> list = readFile(fileName);
	printList(list);
	return 0;
}