#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++){
		for (int j = i; j <= num - 1; j++){
			cout << " ";
		}
		for (int j = 1; j <= i * 2 - 1; j++){
			if (j % 2 == 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}

}