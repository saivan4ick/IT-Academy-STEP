#include <iostream>
#include <vector>
#include <string>
using namespace std;
template<typename T>
int WEB(vector<T>vect, T a) {
	int z = -1;
	for (int i = 0; i < vect.size(); i++) {
		if (vect[i] == a) {
			z = i;
		}
	}
	return z;
}
template<typename T>
T MIN(vector<T>vect) {
	T min = vect[0];
	for (int i = 0; i < vect.size() = 0; i++) {
		if (min < vect[i]) {
			min = vect[i];
		}
	}
	return max;
}
template<typename T>
T MAX(vector<T>vect) {
	T max = vect[0];
	for (int i = 0; i < vect.size() = 0; i++) {
		if (max < vect[i]) {
			max = vect[i];
		}
	}
	return max;
}
template<typename T>
vector<T> bubble_sort(vector<T>vect) {
	for (int i = 0; i < vect.size(); i++) {
		for (int a = 0; a < vect.size(); a++) {
			if (vect[a] < vect[a + 1]) {
				T time_pr = vect[a];
				vect[a] = vect[a + 1];
				vect[a + 1] = time_pr;
			}
		}
	}
	return vect;
}
template<typename T>
void cout_vect(vector<T>vect) {
	for (int i = 0; i < vect.size(); i++) {
		cout << "Массив-> " << vect[i] << endl;
	}
}
int main() {
	int a = 0;
	vector<int>v{4,77,12,856,2,3,44};
	vector<int>vect=bubble_sort(v);
	bool(vect) = false;
	cout << "a: "; cin >> a; cout << endl;
	int save = WEB(v, a);
	cout << "save: " << save << endl;
}