/*#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int array[5][5];
	int columns;
	int rows;

	cout << "������� ���������� �������� � �������: ";
	cin >> columns;
	cout << "������� ���������� ����� � �������: ";
	cin >> rows;

	//���������� ������� ���������� �������
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			array[i][j] = rand() % 100;
		}
	}

	//����� ��������� ������� � �� �����
	cout << "�������� ���������� �������:" << endl;
	int sum_array = 0;
	for (int i = 0; i < rows; i++) {
		cout << endl;
		for (int j = 0; j < columns; j++) {
			cout << array[i][j] << "\t";
			sum_array = sum_array + array[i][j];
		}
 	}
	cout << endl;
	cout << endl;
	cout << "����� ��������� ������� = " << sum_array << endl;

	//����� ������������� �������� �������
	int max_value = array[0][0];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {

			if (array[i][j] > max_value) {
				max_value = array[i][j];
			}

		}
	}
	cout << endl;
	cout << "������������� ������� ������� = " << max_value << endl;

	//����� ������������ �������� �������
	int min_value = array[0][0];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {

			if (array[i][j] < min_value) {
				min_value = array[i][j];
			}

		}
	}
	cout << "����������� ������� ������� = " << min_value << endl;
	cout << endl;

	//����� ������ ��������� ������� � �� �����
	cout << "������ �������� �������: ";
	int sum_even = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {

			if (array[i][j] % 2 == 0) {
				cout << array[i][j] << " ";
				sum_even = sum_even + array[i][j];
			}

		}
	}
	cout << endl;
	cout << "����� ������ ��������� ������� = " << sum_even << endl;
	cout << endl;

	//����� �������� ��������� ������� � �� �����
	cout << "�������� �������� �������: ";
	int sum_odd = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {

			if (array[i][j] % 2 != 0) {
				cout << array[i][j] << " ";
				sum_odd = sum_odd + array[i][j];
			}

		}
	}
	cout << endl;
	cout << "����� �������� ��������� ������� = " << sum_odd << endl;

	return 0;
}
*/