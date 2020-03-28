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

	cout << "¬ведите предложение: ";
	getline(cin, myString);
	cout << "¬ведите искомый символ: ";
	cin >> desired_symbol;

	while (myString[string_counter] != count) {
		if (myString[string_counter] == desired_symbol) {
			char_counter++;
		}

		string_counter++;
	}

	cout << "»скомый символ встречаетс€ " << char_counter << " раз" << endl;

	return 0;
}
*/