#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

struct Report {
	string name;
	int korean;
	int english;
	int math;
	bool operator < (const Report &v) const {
		if (korean > v.korean) {
			return true;
		} else if (korean == v.korean) {
			if (english < v.english) {
				return true;
			} else if (english == v.english) {
				if (math > v.math) {
					return true;
				} else if (math == v.math) {
					return name < v.name;
				} else {
					return false;
				}
			} else {
				return false;
			}
		} else {
			return false;
		}
	}
};

void print(vector<Report> &a) {
	for (auto it = a.begin(); it != a.end(); it++)
		printf("%s\n", (it->name).c_str());
}

int main() {
	int n;
	cin >> n;
	vector<Report> v;
	while (n--) {
		Report tmp;
		cin >> tmp.name >> tmp.korean >> tmp.english >> tmp.math;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	print(v);
	return 0;
}
