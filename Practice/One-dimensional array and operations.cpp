/*#include <iostream>
#include <ctime>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int array[20];

	//���������� ������� ���������� �������
	cout << "�������� �������: ";
	for (int i = 0; i < 20; i++) {

		array[i] = rand() % 100;
		cout << array[i] << " ";

	}

	cout << endl;

	//����� ������������� �������� �������
	int max_value = array[0];
	for (int i = 0; i < 20; i++) {

		if (max_value < array[i]) {
			max_value = array[i];
		}

	}
	cout << "������������ ������� ������� = " << max_value << endl;

	//����� ������������ �������� �������
	int min_value = array[0];
	for (int i = 0; i < 20; i++) {

		if (min_value > array[i]) {
			min_value = array[i];
		}

	}
	cout << "����������� ������� ������� = " << min_value << endl;

	//����� ������ ��������� ������� � �� �����
	cout << "������ �������� �������: ";
	int sum_even = 0;
	for (int i = 0; i < 20; i++) {

		if (array[i] % 2 == 0) {
			cout << " " << array[i];
			sum_even = sum_even + array[i];
		}

	}
	cout << endl;
	cout << "����� ������ ����� ������� = " << sum_even << endl;

	//����� �������� ��������� ������� � �� �����
	cout << "�������� �������� �������: ";
	int sum_odd = 0;
	for (int i = 0; i < 20; i++) {

		if (array[i] % 2 != 0) {
			cout << " " << array[i];
			sum_odd = sum_odd + array[i];
		}

	}
	cout << endl;
	cout << "����� �������� ��������� ������� = " << sum_odd << endl;

	cout << endl;

	return 0;
}
*/