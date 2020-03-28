/*#include <iostream>
#include <ctime>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int array[20];

	//заполнение массива случайными числами
	cout << "Элементы массива: ";
	for (int i = 0; i < 20; i++) {

		array[i] = rand() % 100;
		cout << array[i] << " ";

	}

	cout << endl;

	//поиск максимального элемента массива
	int max_value = array[0];
	for (int i = 0; i < 20; i++) {

		if (max_value < array[i]) {
			max_value = array[i];
		}

	}
	cout << "Максимальный элемент массива = " << max_value << endl;

	//поиск минимального элемента массива
	int min_value = array[0];
	for (int i = 0; i < 20; i++) {

		if (min_value > array[i]) {
			min_value = array[i];
		}

	}
	cout << "Минимальный элемент массива = " << min_value << endl;

	//вывод четных элементов массива и их сумма
	cout << "Четные элементы массива: ";
	int sum_even = 0;
	for (int i = 0; i < 20; i++) {

		if (array[i] % 2 == 0) {
			cout << " " << array[i];
			sum_even = sum_even + array[i];
		}

	}
	cout << endl;
	cout << "Сумма четных чисел массива = " << sum_even << endl;

	//вывод нечетных элементов массива и их сумма
	cout << "Нечетные элементы массива: ";
	int sum_odd = 0;
	for (int i = 0; i < 20; i++) {

		if (array[i] % 2 != 0) {
			cout << " " << array[i];
			sum_odd = sum_odd + array[i];
		}

	}
	cout << endl;
	cout << "Сумма нечетных элементов массива = " << sum_odd << endl;

	cout << endl;

	return 0;
}
*/