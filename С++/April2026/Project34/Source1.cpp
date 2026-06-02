#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Source1.h"
using namespace std;
class number {
public:
	int size;
	int* ptr;
	number() {
		cout << "Constr #1(without value)\n";
		this->size = 0;
		this->ptr = nullptr;
	}
	number(int size) {
		cout << "Constr #2(1 value)\n";
		this->size = size;
		this->ptr = new int[this->size];
		for (int i = 0; i < this->size; i++) {
			this->ptr[i] = 0;
		}
	}
	number(int size, int value) {
		cout << "Constr #3(2 value)\n";
		this->size = size;
		this->ptr = new int[this->size];
		for (int i = 0; i < this->size; i++) {
			this->ptr[i] = value;
		}
	}
	~number() {
		cout << "Destr\n";
		this->size = 0;
		if (this->ptr != nullptr) {
			delete[] this->ptr;
		}
	}
	int getSize() {
		return this->size;
	}
	int getValue(int i) {
		if (i > size) {
			throw - 1;
		}
		return this->ptr[i];
	}
	void setValue(int i, int value) {
		if (i >= size) {
			throw - 1;
		}
		this->ptr[i] = value;
	}
	void print(int) {
		for (int i = 0; i < this->size; i++) {
			cout << this->ptr[i] << "";
		}
		cout << endl;
	}
	number(const number& g) {
		this->size = g.size;
		this->ptr = new int[this->size];
		for (int i = 0; i < size; i++) {
			this->ptr[i] = g.ptr[i];
		}
	}
	void operator = (const number& y) {
		for (int i = 0; i < size; i++) {
			this->ptr[i];
		}
	}
};
int main() {
	number A;
	number B(10);
	number C(10, 5);
	A.print();
	B.print();
	C.print();
	return 0;
}