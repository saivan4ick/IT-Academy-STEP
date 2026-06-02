#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Header.h"
using namespace std;
struct wordCount
{
	string word;
	int count;
};
vector<string>file_inp(string filename) {
	string slovo;
	vector<string>slova;
	ifstream inp(filename);
	while (inp >> slovo) {
		slova.push_back(slovo);
	};
	return slova;
}
void count(string current_word,vector<wordCount>& words_bilo) {
	for (int i = 0; i < words_bilo.size(); i++) {
		if (current_word == words_bilo[i].word) {
			words_bilo[i].count++;
		}
	}
	wordCount peremen;
	peremen.word = current_word;
	peremen.count = 1;
	words_bilo.push_back(peremen);
}
vector<int> uniq_slova(vector<string> slova_save) {
	wordCount peremenn;
	vector<int> peremenn_v;
	for (int i = 0; i < slova_save.size(); i++) {
		count(slova_save[i], peremenn_v);
	}
	return peremenn_v;
	
}