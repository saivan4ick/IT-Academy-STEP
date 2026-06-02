#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <thread>
using namespace std;
uint64_t Fibonacci_0(int n) {
	return n < 2 ? n : Fibonacci_0(n - 1) + Fibonacci_0(n - 2);
}
uint64_t Fibonacci_1(int n) {
	vector<uint64_t> v(n + 1);
	v[2] = 1;
	v[1] = 1;
	for (int i = 2; i <= n; i++) {
		v[i] = v[i - 1] + v[i - 2];
	}
	return v[n];
}
uint64_t Fibonacci_2(int n) {
	uint64_t f1 = 1;
	uint64_t f2 = 1;
	uint64_t res = 1;
	for (int i = 2; i <= n; i++) {
		res = f1 + f2;
		f1 = f2;
		f2 = res;
	}
	return res;
}
bool global_stop = false;
void checkStop() {
	getchar();
	global_stop = false;
}
int main() {
	int n = 40;
	const auto start0{ chrono::steady_clock::now() };
	const auto fb0 = Fibonacci_0(42);
	const auto finish0{ chrono::steady_clock::now() };
	const auto elapsed_seconds0 = chrono::duration_cast<chrono::microseconds>(finish0 - start0);
	cout << "Fibonacci_0: " << fb0 << elapsed_seconds0.count() << "ms\n";

	const auto start1{ chrono::steady_clock::now() };
	const auto fb1 = Fibonacci_1(42);
	const auto finish1{ chrono::steady_clock::now() };
	const auto elapsed_seconds1 = chrono::duration_cast<chrono::microseconds>(finish1 - start1);
	cout << "Fibonacci_1: " << fb1 << elapsed_seconds1.count() << "ms\n";

	const auto start2{ chrono::steady_clock::now() };
	const auto fb2 = Fibonacci_2(42);
	const auto finish2{ chrono::steady_clock::now() };
	const auto elapsed_seconds2 = chrono::duration_cast<chrono::microseconds>(finish2 - start2);
	cout << "Fibonacci_2: " << fb2 << elapsed_seconds2.count() << "ms\n";

	int t = 45;
	thread p(checkStop);
	while (!global_stop) {
		t = (t * 97 + 56) % 255;
		cout << t << endl;
	}
	return 0;
}