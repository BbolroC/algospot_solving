#include <iostream>
#include <map>
#include <iomanip>
#include <string>

using namespace std;

const int max_len = 3;

int main() {
	int case_num;
	cin >> case_num;
	double *numbers = new double[case_num];
	map<string, double> table;
	map<string, string> utable;
	table["kg"] = 2.2046;
	table["lb"] = 0.4536;
	table["l"] = 0.2642;
	table["g"] = 3.7854;
	utable["kg"] = "lb";
	utable["lb"] = "kg";
	utable["g"] = "l";
	utable["l"] = "g";
	string *units = new string[case_num];
	for (int i = 0; i < case_num; ++i) {
		cin >> numbers[i] >> units[i];
		numbers[i] = numbers[i] * table[units[i]];
	}

	for (int i = 0; i < case_num; ++i) {
		cout << i + 1 << " " << fixed << setprecision(4) << numbers[i] << " " << utable[units[i]] << endl;
	}
	delete numbers;
	delete[] units;

	return 0;
}

