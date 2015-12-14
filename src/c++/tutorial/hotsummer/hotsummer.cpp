#include <iostream>

using namespace std;

const int num_month = 9;

int main() {
	int num_case;
	cin >> num_case;
	int *targets = new int[num_case];
	int **elec_usages = new int*[num_case];
	bool *results = new bool[num_case];
	for (int i = 0; i < num_case; ++i) {
		cin >> targets[i];
		elec_usages[i] = new int[num_month];
		cin >> elec_usages[i][0] >> elec_usages[i][1] >> elec_usages[i][2] >> elec_usages[i][3] >> \
		elec_usages[i][4] >> elec_usages[i][5] >> elec_usages[i][6] >> elec_usages[i][7] >> elec_usages[i][8];
		int sum = 0;
		for (int j = 0; j < num_month; ++j)
			sum += elec_usages[i][j];
		if (sum <= targets[i])
			results[i] = true;
		else
			results[i] = false;
	}

	for (int i = 0; i < num_case; ++i) {
		if (results[i])
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	delete results;
	delete elec_usages;
	delete targets;
	return 0;
}

