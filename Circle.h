#pragma once
#include <iostream>
constexpr double Pi = 3.1415926535;
using namespace std;
class Circle
{
private:
	double r;
	double l = 2*Pi*r;
public:
	Circle() : Circle(0) {}
	Circle(const double& radius) : r(radius) {};

	bool operator==(const Circle& other)const {
		if (r == other.r) {
			return true;
		}
		return false;
	}
	bool operator>(const Circle& other)const {
		if (l > other.l) {
			return true;
		}
		return false;
	}
	bool operator<(const Circle& other)const {
		if (l < other.l) {
			return true;
		}
		return false;
	}

	void operator+=(const double& value){
		r += value;
		l = 2 * Pi * r;
	}
	void operator-=(const double& value) {
		r -= value;
		l = 2 * Pi * r;
	}

	void print() const {
		cout << "Circle radius: " << r << endl;
		cout << "Circle length: " << l << endl;
	}
};

