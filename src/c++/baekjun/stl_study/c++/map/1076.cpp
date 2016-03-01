#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<string, pair<int, int>> m = { {"black", {0, 1}},
									{"brown", {1, 10}},
									{"red", {2, 100}},
									{"orange", {3, 1000}},
									{"yellow", {4, 10000}},
									{"green", {5, 100000}},
									{"blue", {6, 1000000}},
									{"violet", {7, 10000000}},
									{"grey", {8, 100000000}},
									{"white", {9, 1000000000}}
									};
	long long val = 0;
	string x;
	cin >> x;
	val = (long long) m[x].first * 10;
	cin >> x;
	val += (long long) m[x].first;
	cin >> x;
	val *= (long long) m[x].second;
	cout << val << '\n';
	return 0;
}
