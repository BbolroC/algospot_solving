#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &a) {
	for (auto &i : a)
		cout << i << ' ';
	cout << '\n';
}

int main() {
	vector<int> a;
	vector<int> b = {2, 5, 8};
	vector<int> c = {1, 4, 6, 7};

	cout << "b: ";
	print(b);
	cout << "c: ";
	print(c);
	int i = 0;
	int j = 0;
	int k = 0;
	while(i != 7) {
		while (b[j] < c[k] && j < b.size()) {
			cout << "b[" << j << "]: " << b[j] << " pushed" << '\n';
			a.push_back(b[j++]);
			i++;
		}
		while (c[k] < b[j] && k < c.size()) {
			cout << "c[" << k << "]: " << c[k] << " pushed" << '\n';
			a.push_back(c[k++]);
			i++;
		}
		if (j == b.size()) {
			a.push_back(c[k++]);
			i++;
		}
		if (k == c.size()) {
			a.push_back(b[j++]);
			i++;
		}
	}
	print(a);
}

