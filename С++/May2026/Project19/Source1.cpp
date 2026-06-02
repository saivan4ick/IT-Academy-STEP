#include "Header.h"
#include <mutex>
#include <thread>
#include <thread>
#include <vector>
#include <chrono>

using namespace std;

vector<int>create_vector(vector<int>vect) {
	for (int i = 0; i < vect.size(); i++) {
		int a = rand() % 1000000;
		vect.push_back(a);
	}
	return vect;
}
int sum_vector(vector<int>vect) {
	int sum = 0;
	int a = 3 + 4;
	a = a + 7;
	for (int i = 0; i < vect.size(); i++) {
		sum = sum + vect[i];
	}
	return sum;
}