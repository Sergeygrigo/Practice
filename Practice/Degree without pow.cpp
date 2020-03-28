/*#include <iostream>
#include <cmath>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	double value_x = -1.1;

	while (value_x <= 0.3) {

		for (int i = 1; i <= 4; i++) {

			double multiple = value_x * i;
			double pow_x = pow(value_x, i);
			double sin_multiple = sin(multiple);

			double result = pow_x * sin_multiple;

			cout << "Значение функции = " << result << ", при m = " << i << endl;
		}

		value_x = value_x + 0.2;
		cout << "Вычислено при x = " << value_x << endl;
	}

	return 0;
}
*/