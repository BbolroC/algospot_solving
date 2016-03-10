#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cnt;

void mergeSort(vector<int> &a, int start, int end) {
	if (start == end)
		return;
	else {
		bool change = false;
		int mid = (start + end) / 2;
		mergeSort(a, start, mid);
		mergeSort(a, mid + 1, end);
		vector<int> tmp;
		int i = 0;
		int j = 0;
		int k = 0;
		cout << start << " " << mid << " " << end << '\n';
		while(i <= end - start) {
			while (a[start + j] < a[mid + 1 + k] && j <= mid - start && k <= end - mid - 1) {
				cout << "la[" << start + j << "]: " << a[start + j] << " pushed" << '\n';
				tmp.push_back(a[start + j]);
				i++;
				j++;
			}
			while (a[mid + 1 + k] < a[start + j] && j <= mid - start && k <= end - mid - 1) {
				cout << "ha[" << mid + 1 + k << "]: " << a[mid + 1 + k] << " pushed" << '\n';
				tmp.push_back(a[mid + 1 + k]);
				i++;
				k++;
			}
			if (j > mid - start) {
				if (k == 0)
					cnt++;
				if (k <= end - mid - 1) {
					cout << "Ha[" << mid + 1 + k << "]: " << a[mid + 1 + k] << " pushed" << '\n';
					tmp.push_back(a[mid + 1 + k]);
					i++;
					k++;
				}
			}
			if (k > end - mid - 1) {
				if (j <= mid - start) {
					cout << "La[" << start + j << "]: " << a[start + j] << " pushed" << '\n';
					tmp.push_back(a[start + j]);
					i++;
					j++;
				}
			}
		}
		for (int w = 0; w < tmp.size(); w++) {
			a[start + w] = tmp[w];
		}
	}
}
void print(vector<int> &a) {
	for (auto &i : a)
		cout << i << ' ';
	cout << '\n';
}
int main() {
	int n;
	cin >> n;
	vector<int> v;
	while (n--) {
		int x;
		scanf("%d", &x);
		v.push_back(x);
	}
	print(v);
	mergeSort(v, 0, v.size() - 1);
	print(v);
	cout << cnt << '\n';
	return 0;
}
