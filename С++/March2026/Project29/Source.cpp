/*
vector<string>text;
vector<string> unique_word;
vector<int>count_word;
bool is_uniq(string word;vector<string>&uniq_word,vector<int>&count_word)
{
	for (int i=0;i<uniq.word.size();i++)
	{
		if (word==uniq.word[i])
		{
			count_word[i]++;
			return false;
		}
	}
	uniq.word.push_back(word);
	count_word.push_back(1);
	return uniq;
}
*/
//#include <iostream>
//#include <string>
//#include <vector>
//#include <fstream>
//using namespace std;
//vector<vector<string>>readfile(string filename) {
//	vector<vector<string>>res = {};
//	ifstream inp(filename);
//	string temp = " ";
//	return res;
//}
//string line;
//vector<string>word;
//vector<string>text;
//vector<string>uniqe_word;
//vector<int>count_word;
//vector<int> uniq;
//while (getline(file, line)); {
//	for (size_t i = 0; i < line(); i++) {
//		char = line[i];
//		if (word.line() > 0) {
//			word.push_back(word);
//			word.clear;
//		}
//	}
//	else {
//	word = char;
//	}
//	if (word.size() > 0) {
//		readfile.push_back(word);
//	}
//	file.close();
//}
//bool is_uniq(string word, vector<string>&uniq_word, vector<int>&count_word)
//{ 
//	for (int i = 0; i < uniq_word.size(); i++)
//	{
//		if (word == uniq_word[i])
//		{
//			count_word[i]++;
//			return false;
//		}
//	}
//	uniq_word.push_back(word);
//	count_word.push_back(1);
//}
//int main(int argc, char** argv) {
//	vector<string>word;
//	string filename = "qwerty.txt";
//	vector<vector<string>>filename = readfile(filename);
//	for (int i = 0; i < filename.size(); i++)
//	{
//		for (int j = 0 < filename.size(); j++;)
//		{
//			string uniqe_word;
//			bool found = false;
//			for (int k = 0; k < word.size(); k++)
//			{
//				if (word[k] == uniqe_word)
//				{
//					word;
//					found = true;
//					break;
//				}
//			}
//			if (uniqe_word.size() == 0)
//			{
//				cout << "Нету вообще слов" << endl;
//			}
//		}
//		string mostWord = uniqe_word[0];
//		int maxCount = 0;
//		for (int i = 1; i < count_word.size(); i++)
//		{
//			if (count_word[i] > maxCount) 
//			{
//				count_word[i] = count_word[i];
//				mostWord = count_word[i];
//			}
//		}
//		cout << "Слово встречается чаще всего: " << mostWord << maxCount << " раз" << endl;
//	}
//}
//#include <iostream>
//#include <string>
//#include <vector>
//#include <fstream>
//#include <iostream>
//#include <string>
//#include <vector>
//#include <fstream>

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
class Square {
	Point A;
	Point B;
	Point C;
	Point D;
public: // метод
	int Perimeter();
	double Plosh();
};

double Perimeter(Point A, Point B, Point C, Point D);

class Vector {
	int* vect;
	int size;
public:
	int size();
};

int main() {
	Square a;
	a.Perimeter()
	return 0;
}