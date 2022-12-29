#include <iostream>
using namespace std;

int main() {
	int n;
	bool a[31] = { 0, };

	for (int i = 0; i < 28; i++) {
		cin >> n;
		a[n] = 1;
	}

	for (int j = 1; j <= 30; j++) {
		if (a[j] == 0) {
			cout << j << endl;
		}
	}
}