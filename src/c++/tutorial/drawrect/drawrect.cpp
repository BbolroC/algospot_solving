#include <iostream>
#include <map>

using namespace std;

const int num_point = 3;

int get_common_point_index(int **points) {
	map<int, int> x_count, y_count;
	int x, y;
	for (int i = 0; i < num_point; ++i) {
		x_count[points[i][0]] += 1;
		y_count[points[i][1]] += 1;
	}

	for (int i = 0; i < num_point; ++i) {
		if (x_count[points[i][0]] == 2)
			x = points[i][0];
		if (y_count[points[i][1]] == 2)
			y = points[i][1];
	}

	for (int i = 0; i < num_point; i++) {
		if (points[i][0] == x && points[i][1] == y)
			return i;
	}
	return -1;
}

int main() {
	int case_num;
	cin >> case_num;
	int ***axis = new int**[case_num];
	int **sol = new int*[case_num];
	double k1, k2;
	for (int i = 0; i < case_num; ++i) {
		axis[i] = new int*[num_point];
		sol[i] = new int[2];
		for (int j = 0; j < num_point; ++j) {
			axis[i][j] = new int[2];
			cin >> axis[i][j][0] >> axis[i][j][1];
		}
		int common_index = get_common_point_index(axis[i]);	
		if (common_index != -1) {
			sol[i][0] = axis[i][common_index][0];
			sol[i][1] = axis[i][common_index][1];
			for (int j = 0; j < num_point; ++j) {
				if (j != common_index) {
					sol[i][0] += axis[i][j][0] - axis[i][common_index][0];
					sol[i][1] += axis[i][j][1] - axis[i][common_index][1];
				}
			}
		}
		else {
			cout << "Cannot find a common point" << endl;
			return 1;
		}
	}

	for (int i = 0; i < case_num; ++i) {
			cout << sol[i][0] << " " << sol[i][1] << endl;
	}
	delete axis;
	delete sol;
	return 0;
}
