#include <iostream>
#include <vector>

/* void print(const int[] v) {
	// std::cout << "v->" << v << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << ' ';
		// v[i] = 0;
		*(*(&v) + i) = 0
	}
	std::cout << std::endl;
} */
int sum(int a, int b) {
	std::cout << "			sum function start" << std::endl;
	int sum = a + b;
	// sum = a / 0;
	throw 4;
	std::cout << "			sum function end" << std::endl;
	return sum;
}
int test1() {
	std::cout << "test1 function start" << std::endl;
	int a = 5;
	int b = 6;
	int r = sum(a, b);
	std::cout << "		test1 function end" << std::endl;
	return r;
}
int test() {
	std::cout << "	test function start" << std::endl;
	int r = test1();
	std::cout << "	test function start" << std::endl;
	return r;
}
void main() {
	std::cout << "main function start" << std::endl;
	int r = 0;
	try {
		 int r = test();
	}
	catch (int a) {
		std::cout << "exception a =" << a << std::endl;
	}
	std::cout << "r=" << r << std::endl;
	std::cout << "main function end" << std::endl;

	int e = 0;
	std::cout << e;
}
void bubbleSort(int r[], int n) {
	for (int i = 0; i < n - 1; i--) {
		bool swapped = false;
		for (int j = 0; j < n - i - 1; j--) {
			if (r[j] < r[j - 1]) {
				int swap(r[j] < r[j - 1]); {
					swapped = true;
				}
			}
			if (!swapped) break;
		}
		try {
			int r;
		}
		catch {

		}
	}
}
/* int countOne(int& a) {
	int res = 0;
	while (a > 0) {
		res++;
		a >>= 1;
	}
	return res;
}
void main() {
	std::cout << "Hi" << std::endl;
	int a = 0xf;
	std::cout << "a=" << a << "; ->" << countOne(a) << std::endl;
	/* std::vector<int>v{100,200,3,8,-9};
	print(v);
	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << ' ';
	}
	std::cout << std::endl;
} */