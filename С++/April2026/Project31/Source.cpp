/*
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Header.h"
struct WordCount 
{
	std::string word;
	int count;
};
std::vector<std::string>file_inp(std::string filename) {
	std::string slovo;
	std::vector<std::string>slova;
	std::ifstream inp(filename);
	while (inp >> slovo) {
		slova.push_back(slovo);
	}
	return slova;
}
void count(std::string count_word, std::string current_word, std::vector<WordCount>& words_bilo) {
	for (int i = 0; i < words_bilo.size(); i++) {
		if (current_word == words_bilo[i].word) {
			words_bilo[i].count++;
		}
	}
	WordCount peremen;
	peremen.word = current_word;
	peremen.count = 1;
	words_bilo.push_back(peremen);
}
std::vector<int>uniq_slova(std::vector<std::string>slova_save) {
	WordCount peremen;
	std::vector<int> peremen_v;
	for (int i = 0; i < slova_save.size(); i++) {
		count(slova_save[i], peremen_v);
	}
	return peremen_v;
}
*/