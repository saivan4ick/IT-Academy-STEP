#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <math.h>
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
	double S() {
		double P = (this->Perimetr())/2;
		double ab = get_line(this->A, this->B);
		double bc = get_line(this->B, this->C);
		double ca = get_line(this->C, this->A);
		double res = sqrt(P * (P - ab) * (P - bc) * (P - ca));
		return res;
	}
	double Perimetr() {
		double P_tring = 0;
		double ab = 0, bc = 0, ca = 0;
		ab = get_line(this->A, this->B);
		bc = get_line(this->B, this->C);
		ca = get_line(this->C, this->A);
		P_tring = ab + bc + ca;
		return P_tring;
	}
private:
	double get_line(Point a, Point b) {
		double ras = 0;
		ras = (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
		ras = sqrt(ras);
		return ras;
	}
	Triangle() {}
};
int main() {
	Point A;
	Point B = Point(3);
	Point C = Point(3, 5);
	cout << "x: " << C.x << " y: " << C.y << "" << endl;
	C.clear();
	cout << "x: " << C.x << " y: " << C.y << "" << endl;
	Triangle t = Triangle(A, B, C);
	Point temp = tr.getA();
	temp.x = 0;
	Point a = Point(0, 0);
	Point b = Point(0, -2);
	Point c = Point(-2, 0);
	Triangle tr = Triangle(a, b, c);
	cout << tr.S() << endl;
	return 0;
}
