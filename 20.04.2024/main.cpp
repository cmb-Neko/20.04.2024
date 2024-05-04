#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double R1, R2, R3, R0;
	cout << "Enter first value: ";
	cin >> R1;
	cout << "Enter second value: ";
	cin >> R2;
	cout << "Enter third value: ";
	cin >> R3;
	R0 = ((1 / R1) + (1 / R2) + (1 / R3));
	R0 = (1 / R0);
	cout << R0 << endl;
}