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
    Point(const Point& rhs) {
        this->x = rhs.x;
        this->y = rhs.y;
    } // конструктор копирования
    ~Point() {
    }
    Point operator + (const Point& rhs) {
        cout << "--- OPERATOR ---" << endl;
        Point temp = Point();
        temp.x = this->x + rhs.x;
        temp.y = this->y + rhs.y;
        return temp;
    }
    Point operator + (int rhs) {
        return Point(this->x + rhs, this->y + rhs);
    }
    Point operator - (const Point& rhs) {
        Point temp = Point();
        temp.x = this->x + rhs.x;
        temp.y = this->y + rhs.y;
        return temp;
    }
    Point operator - (int rhs) {
        return Point(this->x - rhs, this->y - rhs);
    }
    Point operator * (int rhs) {
        return Point(this->x * rhs, this->y * rhs);
    }
    void operator = (const Point& rhs) {
        if (this != &rhs) {
            this->x = rhs.x;
            this->y = rhs.y;
        }
    }
    void clear() {
        this->x = 0;
        this->y = 0;
    }
};
int main() {
    Point A;
    Point B = Point(2);
    Point F = A + B;
    Point C = Point(2, 5);
    Point D = Point(3);
    cout << "x: " << C.x << " y: " << C.y << " " << endl;
    C.clear();
    Point a = Point(0, 0);
    Point b = Point(0, 2);
    Point c = Point(2, 0);
    Point d = Point(2, 2);
    return 0;
}