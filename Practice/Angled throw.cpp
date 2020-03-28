/*#include <iostream>
#include <cmath>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	const float g = 9.81;
	const float pi = asin(1.0);
	float velocity;
	float time;
	float angle;

	cout << "¬ведите скорость = ";
	cin >> velocity;
	cout << "¬ведите врем€ = ";
	cin >> time;

	if (1 < fabs(g * time) / (2 * velocity)) {
		cout << "Incorrect" << endl;
	}
	else {
		angle = asin(g * time / (2 * velocity));
	}
	
	cout << "”гол броска = " << angle*(90/pi) << endl;

	return 0;
}
*/