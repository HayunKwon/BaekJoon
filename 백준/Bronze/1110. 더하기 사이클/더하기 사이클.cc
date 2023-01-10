#include <iostream>
using namespace std;

int main() {
	int n;
	int cnt = 0;
	int a, b;
	cin >> n;
	a = n;

	while (1) {
		b = (n % 10) * 10 + (n / 10 + n % 10) % 10;
		cnt++;
		n = b;
		if (b == a)
			break;
	}
	cout << cnt << '\n';
}