/*#include <iostream>

using namespace std;

int main() {

	setlocale (LC_ALL, "Rus");

	int array[3];

	int value_1;
	int value_2;

	cout << "������� ����� ���������� �����: ";
	cin >> value_1;

	cout << endl;
	
	for (int i = 0; i < 3; i++) {
		value_2 = value_1 % 10;
		cout << " " << value_2;
		value_1 = value_1 / 10;

		array[i] = value_2;
	}

	cout << endl;

	cout << "�������� �������: ";
	for (int i = 0; i < 3; i++) {
		cout << array[i] << " ";
	}

	cout << endl;

	if (array[0] == array[1] || array[0] == array[2] || array[1] == array[2]) {
		cout << "���� ���������� �����!" << endl;
	}
	else{
		cout << "��� ���������� ����!" << endl;
	}

	return 0;
}
*/