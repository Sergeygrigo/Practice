/*#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	int size_arr;
	cout << "������� ������ �������: ";
	cin >> size_arr;
	int* array = new int[size_arr];

	srand(time(NULL)); //����� ������ ��� �������������� ������ �����
	cout << "�������� �������: ";
	for (int i = 0; i < size_arr; i++) {

		array[i] = rand()% 5;
		cout << array[i] << ", ";

	}

	cout << endl;

	int square_sum = 0;
	cout << "�������� ��������� ������� ������ ������� > 2.5: ";
	for (int i = 0; i < size_arr; i++) {

		int abs_value = abs(array[i]);

		if (abs_value > 2.5) {
			cout << array[i] * array[i] << ", ";
			square_sum = square_sum + (array[i] * array[i]);
		}

	}

	cout << endl;
	cout << "����� = " << square_sum << endl;

	delete[] array;

	return 0;
}
*/