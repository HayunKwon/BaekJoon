#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int sum = 0;
	if (b >= c) {
		cout << "-1";
	}
	else {
		sum = a / (c - b)+1;
			cout << sum;
	}
}