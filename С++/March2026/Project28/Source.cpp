#include <iostream>
#include <string>
#include <fstream>
#include <vector>
struct Student {
	std::string name;
	std::string family;
	double mark;
	int age;
};
struct Student2 {
	std::string mark;
};
std::vector<Student>readfile(std::string filename) {
	std::fstream inp(filename);
	std::string time_pr;
	double otmetka_pr;
	std::vector<Student>res;
	while (inp >> time_pr) {
		Student temp;
		inp >> otmetka_pr;
		temp.name = time_pr;
		temp.mark = otmetka_pr;
		res.push_back(temp);
	}
	return res;
	/* setlocale(LC_ALL, "Russian");
	std::vector<std::vector<std::string>>res = {};
	std::ifstream inp(filename);
	std::string temp = "";
	std::vector<std::string>templist = {};
	while (inp >> temp) {
		templist.push_back(temp);
		for (int i = 0; i < 2; i++) {
			inp >> temp;
			templist.push_back(temp);
		}
		res.push_back(templist);
		templist.clear();
	}
	return res;
	std::string line;*/
}
void print(std::vector<Student>& student) {
	for (int i = 0; i < student.size(); i++) {
			std::cout << student[i].age << student[i].family 
				<< student[i].mark << student[i].name << std::endl;
	}
}
std::vector<std::string>student2;
void sort(std::vector <std::string>&student, int i) {
	if (student[i].mark > student2[i].mark) {
		
	}
}
/* void sort(std::vector <std::string>& student, std::vector<double>otmetka) {
		for (int i = 0; i < otmetka.size(); i++) {
		for (int k = 0; k < otmetka.size() - 1; k++) {
			if (otmetka[k] > otmetka[k + 1]) {
				double temp_d = otmetka[k];
				std::string temp_s = vect_name_ych_time[k];
				otmetka[k] = otmetka[k + 1];
				vect_name_ych_time[k] = vect_name_ych_time[k + 1];
				otmetka[k + 1] = temp_d;
				vect_name_ych_time[k + 1] = temp_s;
			}
		}
	}
}*/
int main(int argc, char** argv) {
	std::string filename = "qwerty.txt";
	std::vector<std::vector<std::string>>student = readfile(filename);
	return 0;
}