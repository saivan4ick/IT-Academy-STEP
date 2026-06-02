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
class Pryamougolnik {
    Point A;
    Point B;
    Point C;
    Point D;
    double ab;
    double bc;
    double ca;
public:
    Pryamougolnik(Point A, Point B, Point C, Point D) {
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        this->ab = get_line(this->A, this->B);
        this->bc = get_line(this->A, this->B);
        this->ca = get_line(this->A, this->B);
    }
    Pryamougolnik(Point A, Point C) {
        this->A = A;
        this->C = C;
        this->B = Point(C.x, A.y);
        this->D = Point(A.x, C.y);
    }
    ~Pryamougolnik() {}
    Point getA() {
        return this->A;
    }
    void setA(Point newA) {
        this->A = newA;
    }
    Point getB() {
        return this->B;
    }
    void setB(Point newB) {
        this->B = newB;
    }
    Point getC() {
        return this->C;
    }
    void setC(Point newC) {
        this->C = newC;
    }
    Point getD() {
        return this->D;
    }
    void setD(Point newD) {
        this->D = newD;
    }
    double Perimetr() {
        return this->ab + this->bc + this->ca;
    }
    double S() {
        double a = get_line(this->A, this->B);
        double b = get_line(this->B, this->C);
        double P = (this->Perimetr()) / 2;
        double res = sqrt(P * (P - this->ab) * (P - this->bc) * (P - this->ca));
        return res;
    }
private:
    double get_line(Point a, Point b) {
        double res = 0;
        res = (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
        res = sqrt(res);
        return res;
    }
};
int main() {
    string fileName = "qwerty.txt";
    setlocale(LC_ALL, "Russian");
    Point A;
    Point B = Point(2);
    Point C = Point(2, 5);
    Point D = Point(3);
    cout << "x: " << C.x << " y: " << C.y << " " << endl;
    C.clear();
    Pryamougolnik tr = Pryamougolnik(A, B, C, D);
    Point temp = tr.getA();
    temp.x = 0;
    Point a = Point(0, 0);
    Point b = Point(0, 2);
    Point c = Point(2, 0);
    Point d = Point(2, 2);
    Pryamougolnik t = Pryamougolnik(a, b, c, d);
    cout << "Площадь: " << tr.S() << endl;
    return 0;
}