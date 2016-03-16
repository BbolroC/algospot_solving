#include <cstdio>
#include <algorithm>
using namespace std;

int maxHeap[100001];
int len = 0;

void insert(int n) {
	int last = len + 1;
	maxHeap[last] = n;
	while (last / 2 != 0) {
		if (maxHeap[last / 2] < maxHeap[last]) {
			swap(maxHeap[last / 2], maxHeap[last]);
			last /= 2;
		} else {
			break;
		}
	}
	len++;
}

int remove() {
	int ret = 0;
	if (len == 0) return 0;
	ret = maxHeap[1];
	maxHeap[1] = maxHeap[len];
	len--;
	int i = 1;
	while (i * 2 <= len) {
		int child;
		if (i * 2 + 1 == len) {
			if (maxHeap[i * 2] < maxHeap[i * 2 + 1])
				child = i * 2 + 1;
			else 
				child = i * 2;
		} else {
			child = i * 2;
		}
		if (maxHeap[i] < maxHeap[child]) {
			swap(maxHeap[i], maxHeap[child]);
			i = child;
		} else {
			break;
		}
	}
	return ret;
}

void print() {
	for (int i = 1; i <= len; i++) {
		printf("%d ", maxHeap[i]);
	}
	printf("\n");
}

int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int x;
		scanf("%d", &x);
		if (x == 0) {
			printf("%d\n", remove());
			print();
		} else {
			insert(x);
			print();
		}
	}
	return 0;
}
