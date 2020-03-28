/*#include <iostream>
#include <cmath>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	const double pi = 3.14;
	double value_x;
	double value_y;
	double difference;
	double cos_diff;
	double cos_x;
	double sin_x;
	double ctg_x;
	double tg_x;
	double result;

	cout << "Введите значение \'x\': ";
	cin >> value_x;
	cout << "Введите значение \'y\': ";
	cin >> value_y;

	value_x = (value_x / pi) * 180;
	value_y = (value_y / pi) * 180;

	difference = value_x - value_y;
	cos_diff = cos(difference);
	tg_x = tan(value_x);
	cos_x = cos(value_x);
	sin_x = sin(value_x);
	ctg_x = cos_x / sin_x;
	result = pow(1 - tg_x, ctg_x) + cos_diff;

	cout << "Ответ = " << result << endl;

	return 0;
}
*/