#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <thread>
#include <atomic>
#include <mutex>
using namespace std;
int menyaetsya(string t, int& a, bool& stop) {
	for (;!stop;) {
		a++;
		cout << t << a << endl;
	}
	return 0;
}

/*
// Анонимная функция с лямбдой
void test() {
	unsigned long long g_count = 0;
	thread t1([&]() {
		for (auto i = 0; i < 1'000'000; ++i)
			++g_count;
		}); 
	thread t2([&]() {
		for (auto i = 0; i < 1'000'000; ++i)
			++g_count;
		});
	t1.join();
	t2.join();
	cout << g_count << endl;
} */

void increment1(uint64_t& temp) {
	for (auto i = 0; i < 0xffffff; ++i)
		++temp;
}

void increment2(std::atomic<uint64_t>& temp) {
	for (auto i = 0; i < 1'000'000; ++i)
		temp.fetch_add(1);
}

std::mutex g_count_mutex;
void increment3(uint64_t& temp) {
	for (auto i = 0; i < 1'000'000; ++i) {
		g_count_mutex.lock();
		++temp;
		g_count_mutex.unlock();
	}
}
int main() {
	int b = 1;
	uint64_t res = 0;
	std::atomic<uint64_t>g_count{ 0 };
	const auto start2{ std::chrono::steady_clock::now() };
	thread p1(increment3, ref(res));
	thread p2(increment3, ref(res));
	/* increment1(res);
	increment2(res);
	thread p1(increment1, ref(res));
	thread p2(increment1, ref(res)); */
	p1.join();
	p2.join();
	cout << "res = " << res << endl;
	/* uint64_t res = 0;
	thread p1(increment, std::ref(res));
	thread p2(increment, std::ref(res));
	p1.join();
	p2.join();*/
	/*bool stop = false;
	string t = "-> ";
	thread p(menyaetsya, t, std::ref(b),std::ref(stop));
	getchar();
	stop = true;
	p.join();*/
	return 0;
}