#include <chrono>
#include <iostream>
#include <vector>
uint64_t Fibonacci(uint64_t n) {
    if (n < 2) return n;
    
    uint64_t a = 0;
    uint64_t b = 1;
    uint64_t next = 0;
    
    for (uint64_t i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}
/* 
uint64_t Fibonacci(uint64_t n) {
	return n < 2 ? n : Fibonacci(n - 1) + Fibonacci(n - 2);
}
*/
int main() {
    const uint64_t n = 42;
    
    const auto start = std::chrono::steady_clock::now();
    const auto fb = Fibonacci(n);
    const auto finish = std::chrono::steady_clock::now();
    
    const std::chrono::duration<double> elapsed_seconds = finish - start;
    
    std::cout << "Fibonacci(" << n << "): " << fb << "\n";
    std::cout << "Elapsed time: " << elapsed_seconds.count() << "s\n";
    
    return 0;
}