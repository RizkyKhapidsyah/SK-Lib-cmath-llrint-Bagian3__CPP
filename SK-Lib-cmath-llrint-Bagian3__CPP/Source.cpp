
#include <cfenv>
#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	double a;
	long long int hasil;

	a = 50.35;
	hasil = llrint(a);
	cout << "Nearest rounding of " << a << " is " << hasil << endl;

	a = 50.5;
	hasil = llrint(a);
	cout << "Nearest rounding of " << a << " is " << hasil << endl;

	_getch();
	return 0;
}
