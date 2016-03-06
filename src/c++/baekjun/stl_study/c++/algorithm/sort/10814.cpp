#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>
#include <string>
using namespace std;

void print(vector<tuple<int, string, int>> a) {
	for (auto &x : a)
		cout << get<0>(x) << ' ' << get<1>(x) << '\n';
}

int main() {
	int n;
	cin >> n;
	vector<tuple<int, string, int>> v;
	for (int i = 0; i < n; i++) {
		int age;
		string name;
		cin >> age >> name;
		v.push_back(make_tuple(age, name, i));
	}
	sort(v.begin(), v.end(), [](tuple<int, string, int> u, tuple<int, string, int> v) {
			if (get<0>(u) < get<0>(v)) {
				return true;
			} else if (get<0>(u) == get<0>(v)) {
				return get<2>(u) < get<2>(v);
			} else {
				return false;
			}
		});
	print(v);
	return 0;
}
