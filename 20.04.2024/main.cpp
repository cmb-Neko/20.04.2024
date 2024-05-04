#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double L, R, S;
	cout << "Enter length: ";
	cin >> L;
	R = (L / (2 * M_PI));
	S = (M_PI * (R * 2));
	cout << S << endl;
}