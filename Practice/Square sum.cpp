/*#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	int size_arr;
	cout << "¬ведите размер массива: ";
	cin >> size_arr;
	int* array = new int[size_arr];

	srand(time(NULL)); //чтобы каждый раз генерировались разные числа
	cout << "Ёлементы массива: ";
	for (int i = 0; i < size_arr; i++) {

		array[i] = rand()% 5;
		cout << array[i] << ", ";

	}

	cout << endl;

	int square_sum = 0;
	cout << " вадраты элементов массива модуль которых > 2.5: ";
	for (int i = 0; i < size_arr; i++) {

		int abs_value = abs(array[i]);

		if (abs_value > 2.5) {
			cout << array[i] * array[i] << ", ";
			square_sum = square_sum + (array[i] * array[i]);
		}

	}

	cout << endl;
	cout << "—умма = " << square_sum << endl;

	delete[] array;

	return 0;
}
*/