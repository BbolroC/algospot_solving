#include <iostream>

using namespace std;

int main() {
	int num_case;
	cin >> num_case;
	int *numbers = new int[num_case];
	for (int i = 0; i < num_case; ++i) {
		cin >> numbers[i];
	}

	for (int i = 0; i < num_case; ++i) {
		cout << numbers[i] << endl;
	}

	delete numbers;

	return 0;
}

