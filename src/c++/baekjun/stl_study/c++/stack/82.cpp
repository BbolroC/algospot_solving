#include <iostream>
#include <stack>
#include <list>
#include <deque>
using namespace std;

int main() {
	stack<int> s1;
	stack<int, list<int>> s2;
	deque<int> d = {1, 2, 3, 4, 5};
	stack<int> s3(d);
}
