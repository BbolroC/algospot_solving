#include <iostream>
#include <cstring>

using namespace std;

const int max_len = 80;

void misspell(char *str, int index) {
	int len = strlen(str);
	for (int i = index - 1; i < len; ++i)
		str[i] = str[i + 1];
}

int main() {
	int case_num;
	cin >> case_num;
	char **input_str = new char*[case_num];
	for (int i = 0; i < case_num; ++i) {
		int pos;
		input_str[i] = new char[max_len];
		cin >> pos >> input_str[i];
		misspell(input_str[i], pos);
	}

	for (int i = 0; i < case_num; ++i) {
		cout << i + 1 << " " << input_str[i] << endl;
	}
	delete input_str;
	return 0;
}
