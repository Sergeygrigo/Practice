/*#include<iostream>
#include<string>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	string myString;
	char desired_symbol;
	int char_counter = 0;
	int string_counter = 0;
	int count = myString.size();

	cout << "������� �����������: ";
	getline(cin, myString);
	cout << "������� ������� ������: ";
	cin >> desired_symbol;

	while (myString[string_counter] != count) {
		if (myString[string_counter] == desired_symbol) {
			char_counter++;
		}

		string_counter++;
	}

	cout << "������� ������ ����������� " << char_counter << " ���" << endl;

	return 0;
}
*/