/*#include <iostream>
#include <string>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	char symbol_element = '�';
	int row_counter = 0;
	int char_counter = 0;
	char test_string[] = "���������������� ��������� �������� ������ � �++ ���������������� �� �++ ���������� �����#";

	while (test_string[char_counter] != '#') {
		
		if (test_string[char_counter] == symbol_element) {
			row_counter++;
		}

		char_counter++;
	}

	std::cout << "���������� ���������� ������� " << "'" << symbol_element << "'" << "= " << row_counter << endl;

	return 0;
}
*/