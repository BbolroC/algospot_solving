#include <iostream>
#include <cstring>

using namespace std;

const int max_len = 100;

void do_encryption(char *str) {
	int len = strlen(str);
	if (len < 3) return;
	int half = len / 2;
	char *tmp = new char[half];
	int p1 = 1;
	int p2 = 0;
	for (int i = 1; i < len; ++i) {
		if (i % 2 == 0)
			str[p1++] = str[i];
		else
			tmp[p2++] = str[i];
	}
	p1 = 0;
	for (int i = len - half; i < len; ++i)
		str[i] = tmp[p1++];
	delete tmp;
}

int main() {
	int case_num;
	cin >> case_num;
	char **input_str = new char*[case_num];
	for (int i = 0; i < case_num; ++i) {
		input_str[i] = new char[max_len];
		cin >> input_str[i];
		do_encryption(input_str[i]);
	}

	for (int i = 0; i < case_num; ++i) {
		cout << input_str[i] << endl;
	}
	delete input_str;
	return 0;
}

