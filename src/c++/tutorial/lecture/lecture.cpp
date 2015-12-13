#include <iostream>
#include <cstring>

using namespace std;

const int max_len = 1000;

int compare_word(char *one, char *two) {
	if (one[0] < two[0]) {
		return -1;
	} else if (one[0] > two[0]) {
		return 1;
	} else {
		if(one[1] < two[1]) {
			return -1;
		} if (one[1] > two[1]) {
			return 1;
		} else {
			return 0;
		}
	}
}

void swap_word(char *one, char *two) {
	char tmp[2];
	tmp[0] = one[0];
	tmp[1] = one[1];
	one[0] = two[0];
	one[1] = two[1];
	two[0] = tmp[0];
	two[1] = tmp[1];
}

int find_middle(char *str, int start, int end) {
	int pivot = start;
	int left = start + 1;
	int right = end;
	
	while (left <= right) {
		while ((left <= right) && (compare_word(str+(left * 2), str+(pivot * 2)) <= 0))
			left++;
			
		while ((compare_word(str+(pivot * 2), str+(right * 2)) <= 0) && (left <= right))
			right--;
			
		if (left > right) {
			swap_word(str+(pivot * 2), str+(right * 2));
			return right;
		} else {
			swap_word(str+(left * 2), str+(right * 2));
			left++;
			right--;
		}
	}
}

void quickSort(char *str, int start, int end) {
	if (start < end) {
		int middle = find_middle(str, start, end);

		quickSort(str, start, middle - 1);
		quickSort(str, middle + 1, end);
	}
}

bool get_substring_sorted(char *str) {
	if (strlen(str) % 2 != 0)
		return false;

	int size = strlen(str) / 2;
	quickSort(str, 0, size - 1);	
	return true;
}

int main() {
	int num_string;
	cin >> num_string;
	char **strings = new char*[num_string];
	for (int i = 0; i < num_string; ++i) {
		strings[i] = new char[max_len];
		cin >> strings[i];
		if (!get_substring_sorted(strings[i])) {
			cout << "The length of the input string is not even." << endl;
			return 1;
		}
	}

	for (int i = 0; i < num_string; ++i) {
		cout << strings[i] << endl;
	}
	
	delete strings;
	return 0;
}
