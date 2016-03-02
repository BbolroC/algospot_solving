#include <iostream>
#include <queue>
#include <list>
using namespace std;

int main() {
	queue<int> q1;
	queue<int, list<int>> q2;
	deque<int> d = {1, 2, 3, 4, 5};
	queue<int> q3(d);
}
