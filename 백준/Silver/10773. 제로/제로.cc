#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n,m;
	cin >> n;
	stack<int>s;
	for (int i = 0; i < n; i++) {
		cin >> m;
		if(m!=0){
			s.push(m);
		}
		else {
			s.pop();
		}
	}
	int sum = 0;
	int size = s.size();
	for (int i = 0; i < size; i++) {
		sum += s.top();
		s.pop();
	}
	cout << sum;
	return 0;
}	