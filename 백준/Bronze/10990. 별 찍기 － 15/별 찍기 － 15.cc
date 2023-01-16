#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num - 1 - i; j++)cout << " ";
		cout << "*";
		for (int j = 0; j < 2 * i - 1; j++)cout << " ";
		if (i != 0) cout << "*";
		cout << "\n";
	}
}