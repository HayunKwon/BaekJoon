#include <iostream>
using namespace std;

int main() {
	
	int N;
	cin >> N;

	int i = 0;             
	if (N == 1)i = 1;   //입력한 N이 1인 경우 
	
	for (int sum = 2; sum <= N; i++) { // 입력한 N이 1이 아닌 경우
		sum += 6 *i;
	}

	cout << i;
	return 0;
}