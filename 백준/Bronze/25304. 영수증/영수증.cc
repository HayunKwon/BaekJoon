#include <iostream>
using namespace std;

int main() {
	int X;
	int n;
	
	int a;
	int b;

	cin >> X;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		cin >> b;
		X =X- (a * b);
		
	}

	if (X == 0) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}