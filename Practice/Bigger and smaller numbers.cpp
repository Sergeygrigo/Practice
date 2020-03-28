/*#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	int value;
	int value_1;
	int value_2;

	cout << "Введите двузначное число от 0 до 99 >> ";
	cin >> value;

	value_1 = value % 10;
	value_2 = (value - value_1) / 10;

	if (value_1 > value_2) {
		cout << "Большая цифра = " << value_1 << endl;
		cout << "Меньшая цифра = " << value_2 << endl;
	}
	else if (value_1 < value_2) {
		cout << "Большая цифра = " << value_2 << endl;
		cout << "Меньшая цифра = " << value_1 << endl;
	}
	else {
		cout << value_1 << " = " << value_2 << " - Цифры равны!" << endl;
	}

	return 0;
}
*/