#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
struct Point {
public:
	int x;
	int y;
	Point() {
		this->x = 0;
		this->y = 0;
	}
	Point(int a) {
		this->x = a;
		this->y = a;
	}
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	~Point() {
	}
	void clear() {
		this->x = 0;
		this->y = 0;
	}
};
class Triangle {
/* public:
	int a;
protected:
	int b;
private:
	int c;
*/
	Point A;
	Point B;
	Point C;
public:
	Triangle(Point A, Point B, Point C) {
		this->A = A;
		this->B = B;
		this->C = C;
	}
	~Triangle(){}
	Point getA() {
		return this->A;
	}
	void setA(Point newA) {
		this->A = newA;
	}
	Point getB() {
		return this->B;
	}
private:
	Triangle();
};
int main() {
	Point A;
	Point B = Point(3);
	Point C = Point(3, 5);
	cout << "x: "<< C.x <<" y: " << C.y << "" << endl;
	C.clear();
	cout << "x: " << C.x << " y: " << C.y << "" << endl;
	return 0;
}