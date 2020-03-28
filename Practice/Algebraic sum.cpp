/*#include <iostream>
#include <cmath>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	int count_x;
	float var_A;
	float var_B;
	float var_Z;

	cout << "¬ведите количество переменных \'x\' >> ";
	cin >> count_x;

	float X = 0;
	float Y = 0;
	for (int i = 0; i < count_x; i++) {

		cout << endl;
		cout << "¬ведите A, B, Z дл€ x" << i << ":"<< endl;
		cout << "A = ";
		cin >> var_A;
		cout << "B = ";
		cin >> var_B;
		cout << "Z = ";
		cin >> var_Z;
		cout << "i = " << i << endl;
		cout << endl;

		Y = Y + (pow(var_Z, 3) - var_B + pow(var_A, 2));
	}

	cout << "Y = " << Y << endl;

	return 0;
}
*/