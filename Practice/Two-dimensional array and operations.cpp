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

	cout << "Введите количество столбцов в массиве: ";
	cin >> columns;
	cout << "Введите количество строк в массиве: ";
	cin >> rows;

	//заполнение массива случайными числами
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			array[i][j] = rand() % 100;
		}
	}

	//вывод элементов массива и их суммы
	cout << "Элементы двумерного массива:" << endl;
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
	cout << "Сумма элементов массива = " << sum_array << endl;

	//поиск максимального элемента массива
	int max_value = array[0][0];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {

			if (array[i][j] > max_value) {
				max_value = array[i][j];
			}

		}
	}
	cout << endl;
	cout << "Максимальниый элемент массива = " << max_value << endl;

	//поиск минимального элемента массива
	int min_value = array[0][0];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {

			if (array[i][j] < min_value) {
				min_value = array[i][j];
			}

		}
	}
	cout << "Минимальный элемент массива = " << min_value << endl;
	cout << endl;

	//вывод четных элементов массива и их сумма
	cout << "Четные элементы массива: ";
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
	cout << "Сумма четных элементов массива = " << sum_even << endl;
	cout << endl;

	//вывод нечетных элементов массива и их сумма
	cout << "Нечетные элементы массива: ";
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
	cout << "Сумма нечетных элементов массива = " << sum_odd << endl;

	return 0;
}
*/