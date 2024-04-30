#include <iostream>
#include <Windows.h>

using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

int main() {
	cout << "                Name       : ";
	SetConsoleTextAttribute(hConsole, 14);
	cout << "\"The war and the peace\"" << endl;
	SetConsoleTextAttribute(hConsole, 15);
	cout << "                Avtor      : L.N. Tolstoj" << endl;
	cout << "                Izdatelstvo: Piter" << endl;
	cout << "                Pages      : ";
	SetConsoleTextAttribute(hConsole, 13);
	cout << "500" << endl;
}