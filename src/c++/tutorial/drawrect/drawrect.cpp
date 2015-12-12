#include <iostream>

using namespace std;

int main() {
	int case_num;
	cin >> case_num;
	int ***axis = new int**[case_num];
	int **sol = new int*[case_num];
	double k1, k2;
	for (int i = 0; i < case_num; ++i) {
		axis[i] = new int*[3];
		sol[i] = new int[2];
		for (int j = 0; j < 3; ++j) {
			axis[i][j] = new int[2];
			cin >> axis[i][j][0] >> axis[i][j][1];
		}
		if (axis[i][1][0] - axis[i][0][0] != 0) 
			k1 = (axis[i][1][1] - axis[i][0][1]) / (axis[i][1][0] - axis[i][0][0]);
		else
			k1 = 0.f;

		if (axis[i][2][0] - axis[i][0][0] != 0)
			k2 = (axis[i][2][1] - axis[i][0][1]) / (axis[i][2][0] - axis[i][0][0]);
		else
			k2 = 0.f;
		double tmp1 = axis[i][1][1] - axis[i][2][1];
		double tmp2 = k2 * axis[i][1][0] - k1 * axis[i][2][0];
		double den = k1 - k2;
		double num = tmp1 - tmp2;
		sol[i][0] = (int) (num / den);
		sol[i][1] = (int) ((k2 * num) / den);
	}

	for (int i = 0; i < case_num; ++i) {
			cout << sol[i][0] << " " << sol[i][1] << endl;
	}
	delete axis;
	delete sol;
	return 0;
}
