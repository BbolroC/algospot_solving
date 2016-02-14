#include<iostream>
#include<vector>
#include<string>

using namespace std;

void printPicked(vector<int>& picked) {
	string gap = "";
	cout << '(';
	for (vector<int>::iterator it = picked.begin(); it != picked.end(); ++it) {
		cout << gap << *it;
		gap = ", ";
	}
	cout << ')' << endl;
}

// n: 전체 원소의 수
// picked: 지금까지 고른 원소들의 번호
// toPick: 더 고를 원소의 수
// 일 때, 앞으로 toPick개의 원소를 고르는 모든 방법을 출력한다.
void pick(int n, vector<int>& picked, int toPick) {
	if (toPick == 0) { printPicked(picked); return; }
	int smallest = picked.empty() ? 0 : picked.back() + 1;
	for (int next = smallest; next < n; ++next) {
		picked.push_back(next);
		pick(n, picked, toPick - 1);
		picked.pop_back();
	}
}

int main() {
	vector<int> picked;
	pick(4, picked, 2);
	return 0;
}
