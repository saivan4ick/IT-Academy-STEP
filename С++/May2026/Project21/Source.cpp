#include <iostream>
#include <vector>
//std::vector<int>vect_sortt(std::vector<int>vect) {
//	for (int i = 0; i < vect.size()-1; i++) {
//		int max = vect[i];
//		int maxp = i;
//		for (int j = i; j < vect.size(); j++) {
//			if (max < vect[j]) {
//				max = vect[j];
//				maxp = j;
//			}
//		}
//		int temp = vect[i];
//		vect[i] = max;
//		vect[maxp] = temp;
//	}
//	return vect;
//}
//std::vector<double>vect_sortt(std::vector<double>vect) {
//	for (int i = 0; i < vect.size() - 1; i++) {
//		int max = vect[i];
//		int maxp = i;
//		for (int j = i; j < vect.size(); j++) {
//			if (max < vect[j]) {
//				max = vect[j];
//				maxp = j;
//			}
//		}
//		double temp = vect[i];
//		vect[i] = max;
//		vect[maxp] = temp;
//	}
//	return vect;
//}
//std::vector<double>vect_sort(std::vector<double>vect) {
//	for (int i = 0; i <= vect.size(); i++) {
//		for (int q = 0; q <= vect.size() - 1; q++) {
//			if (vect[q] > vect[q + 1]) {
//				int s = vect[q + 1];
//				vect[q + 1] = vect[q];
//				vect[q] = s;
//			}
//		}
//	}
//	return vect;
//}
template<typename T>
std::vector<T>vect_sortt(std::vector<T>vect) {
	for (int i = 0; i < vect.size() - 1; i++) {
		T max = vect[i];
		int maxp = i;
		for (int j = i; j < vect.size(); j++) {
			if (max < vect[j]) {
				max = vect[j];
				maxp = j;
			}
		}
		T temp = vect[i];
		vect[i] = max;
		vect[maxp] = temp;
	}
	return vect;
}
template<typename T>
void print_sort(std::vector<T>vect) {
	for (int i = 0; i < vect.size(); i++) {
		std::cout << vect[i]<<" ";
	}
	std::cout << std::endl;
}
int main() {
	std::vector<int>vect{9, 8, 7, 6, 5, 4, 3, 2, 1};
	std::vector<double>vectd{ 1.9,7.5,0.0 };
	std::vector<int>vect_end = vect_sortt(vect);
	std::vector<int>vect_end2 = vect_sortt(vect);
	std::vector<double>vect_end23 = vect_sortt(vectd);
	print_sort(vect);
}