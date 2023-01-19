#include <iostream>
using namespace std;

int main() {
    int a[9][9] = {};
    int max = 0;
    int n, m;

    for (int i = 0; i <9; i++) {
        for (int j = 0; j <9; j++) {
            cin >> a[i][j];
            if (a[i][j] >= max) {
                max = a[i][j];
                n = i + 1;
                m = j + 1;
            }
        }
    }
    cout << max<<endl;
    cout << n <<" " << m;
}