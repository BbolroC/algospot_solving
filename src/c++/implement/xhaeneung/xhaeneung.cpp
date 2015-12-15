#include <iostream>
#include <cstring>

using namespace std;

const int max_len = 10;
const int num_alpha = 26;
const int num_input = 11;
const char *numbers[num_input] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten" };

bool is_anagram(const char *one, const char *two) {
	int len1 = strlen(one);
	int len2 = strlen(two);
	if (len1 != len2) return false;
	int cnt[num_alpha];
	for (int i = 0; i < num_alpha; ++i)
		cnt[i] = 0;

	for (int i = 0; i < len1; ++i) {
		cnt[one[i] - 'a']++;
		cnt[two[i] - 'a']--;
	}
	for (int i = 0; i < num_alpha; ++i) {
		if (cnt[i] != 0)
			return false;
	}
	return true;
}

int realize_string(const char *str) {
	for (int i = 0; i < num_input; ++i) {
		if (is_anagram(str, numbers[i]))
			return i;
	}
	return -1;
}

int main() {
	int num_case;
	cin >> num_case;
	char **op_left = new char*[num_case];
	char **op_right = new char*[num_case];
	char *op = new char[num_case];
	bool *yes_or_no = new bool[num_case];
	char **op_res = new char*[num_case];
	char tmp;
	for (int i = 0; i < num_case; ++i) {
		op_left[i] = new char[max_len];
		op_right[i] = new char[max_len];
		op_res[i] = new char[max_len];
		cin >> op_left[i] >> op[i] >> op_right[i] >> tmp >> op_res[i];
		int tmp_res;
		int left = realize_string(op_left[i]);
		int right = realize_string(op_right[i]);
		int res = realize_string(op_res[i]);
		yes_or_no[i] = true;
		switch (op[i]) {
			case '+':
				tmp_res = left + right;
				break;
			case '-':
				tmp_res = left - right;
				break;
			case '*':
				tmp_res = left * right;
				break;
			case '/':
				if (right != 0)
					tmp_res = left / right;
				else
					yes_or_no[i] = false;
				break;
			default:
				yes_or_no[i] = false;
		}
		if (tmp_res > 10 || tmp_res < 0)
			yes_or_no[i] = false;
		if (tmp_res != res)
			yes_or_no[i] = false;
	}

	for (int i = 0; i < num_case; ++i) {
		if (yes_or_no[i])
			 cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}

	delete op_left;
	delete op_right;
	delete op;
	delete op_res;
	delete yes_or_no;

	return 0;
}

