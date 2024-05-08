#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double S, v, t, a;
	cout << "Enter velocity: ";
	cin >> v;
	cout << "Enter time: ";
	cin >> t;
	cout << "Enter acceleration: ";
	cin >> a;

	S = ((v * t) + ((a * (t * 2)) / 2));
	cout << S << endl;
}