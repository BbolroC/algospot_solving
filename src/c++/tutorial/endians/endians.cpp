#include <iostream>

using namespace std;

void swap(unsigned char *one, unsigned char *two) {
	*two = *one ^ *two;
	*one = *two ^ *one;
	*two = *two ^ *one;
}

int main() {
	int input_num;
	cin >> input_num;
	unsigned int *numbers = new unsigned int[input_num];
	for (int i = 0; i < input_num; ++i) {
		cin >> numbers[i];
		unsigned char *one = (unsigned char *) &numbers[i];
		unsigned char *two = (unsigned char *) &numbers[i] + 1;
		unsigned char *three = (unsigned char *) &numbers[i] + 2;
		unsigned char *four = (unsigned char *) &numbers[i] + 3;
		swap(one, four);
		swap(two, three);
	}
	
	for (int i = 0; i < input_num; ++i) cout << numbers[i] << endl;
	delete[] numbers;
	return 0;
}

