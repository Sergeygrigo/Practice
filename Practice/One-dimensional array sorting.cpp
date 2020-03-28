#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

//функция заполнения массива
void Array_fill (int array[], const int array_size) {

	for (int i = 0; i < array_size; i++) {
		array[i] = rand() % 100;
	}
	cout << endl;
}

//функция вывода массива на экран
void Print_array (int array[], const int array_size) {
	
	for (int i = 0; i < array_size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

//сортировка методом "Пузырька"
void Bouble_sort (int array[], const int array_size) {
	
	for (int i = 0; i < array_size - 1; i++) {
		
		for (int i = 0; i < array_size - 1; i++) {

			if (array[i] > array[i + 1]) {
				int replace = array[i];
				array[i] = array[i + 1];
				array[i + 1] = replace;
			}

		}
	}
}

//сортировка "Выбором"
void Selection_sort (int array[], const int array_size) {
	for (int i = 0; i < array_size - 1; i++) {

		int min_value = i;
		for (int j = i + 1; j < array_size; j++) {
			if (array[min_value] > array[j]) {
				min_value = j;
			}
		}

		int temporary_value = array[i];
		array[i] = array[min_value];
		array[min_value] = temporary_value;
	}
}

//Шейкерная сортировка (двунаправленная сортировка "Пузырьком")
void Shaker_sort (int array[], const int array_size) {

	int left_edge = 0;
	int right_edge = array_size - 1;
	int flag = 1;

	while ((left_edge < right_edge) && flag > 0) {

		flag = 0;

		for (int i = left_edge; i < right_edge; i++) {

			if (array[i] > array[i + 1]) {
				int replace = array[i];
				array[i] = array[i + 1];
				array[i + 1] = replace;
				flag = 1;
			}
		}
		right_edge--;

		for (int i = right_edge; i > left_edge; i--) {

			if (array[i - 1] > array[i]) {
				int replace = array[i];
				array[i] = array[i - 1];
				array[i - 1] = replace;
				flag = 1;
			}
		}
		left_edge++;
	}
}

//сортировка "Вставками"
void Insertion_sort (int array[], const int array_size) {

	for (int i = 1; i < array_size; i++) {

		int temporary = array[i];
		int j = i - 1;
		
		while (j >= 0 && temporary < array[j]) {
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = temporary;
	}
}

//сортировка "Шелла"
void Shell_sort (int array[], const int array_size) {


}

int main() {

	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	const int array_size = 5;
	int array[array_size];

	cout << "-----Сортировка методом \"Пузырька\"-----";
	Array_fill(array, array_size);
	cout << "Неотсортированный массив: ";
	Print_array(array, array_size);
	Bouble_sort(array, array_size);
	cout << "Отсортированный массив: ";
	Print_array(array, array_size);

	cout << endl;

	cout << "-----Сортировка методом \"Выбора\"-----";
	Array_fill(array, array_size);
	cout << "Неотсортированный массив: ";
	Print_array(array, array_size);
	Selection_sort(array, array_size);
	cout << "Отсортированный массив: ";
	Print_array(array, array_size);

	cout << endl;

	cout << "-----Сортировка методом \"Шейкера\"-----";
	Array_fill(array, array_size);
	cout << "Неотсортированный массив: ";
	Print_array(array, array_size);
	Shaker_sort(array, array_size);
	cout << "Отсортированный массив: ";
	Print_array(array, array_size);

	cout << endl;

	cout << "-----Сортировка методом \"Вставок\"-----";
	Array_fill(array, array_size);
	cout << "Неотсортированный массив: ";
	Print_array(array, array_size);
	Insertion_sort(array, array_size);
	cout << "Отсортированный массив: ";
	Print_array(array, array_size);

	cout << endl;

	/*cout << "-----Сортировка методом \"Шелла\"-----";
	Array_fill(array, array_size);
	cout << "Неотсортированный массив: ";
	Print_array(array, array_size);
	Shell_sort(array, array_size);
	cout << "Отсортированный массив: ";
	Print_array(array, array_size);*/

	cout << endl;

	return 0;
}