#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <atomic>
#include <thread>
using namespace std;
int rand_size() {
	int s_v = (rand() % 1000 )+88;
	return s_v;
}
void random_zp_vect(vector<int>& v) {
	for (int i = 0; i < v.size(); i++) {
		v[i] = rand_size();
	}
}
void mnog_vect(const vector<int>& vect, int start, uint64_t& result, int flows) {
	result = 1;
	for (int i = start; i < vect.size(); i += flows) {
			result = vect[i] * result;
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	uint64_t result1 = 1, result2 = 1, result3 = 1;
	int n;
	cout << "Размер вектора: ";
	cin >> n;
	vector<int>v(n);
	random_zp_vect(v);
	int pthred_count = 5;
	std::vector<thread>pthred;
	std::vector<uint64_t>res(pthred_count);
	for (int i = 0; i < pthred_count; i++) {
		res[i] = 1;
		std::thread temp(mnog_vect, std::ref(v), 0, std::ref(result1), pthred_count);
		pthred.push_back(std::move(temp));
		// pthred.emplace_back(temp);
	}
	for (int i = 0; i < pthred_count; i++) {
		pthred[i].join();
	}
	uint64_t result = 1;
	/* for (int i = 0; i < res.size(); i++) {
		result *= res[i];
	}*/
	cout << "Произведение: " << result << "\n";
	return 0;
}