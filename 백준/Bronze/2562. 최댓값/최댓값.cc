#include <iostream>

using namespace std;

int main(){
	
    int num[9];
	int max=0, maxnum=0;
	for(int i=0; i<9; i++){
		cin >> num[i];
		if(max < num[i]){
			max = num[i];
            maxnum = i;
		}
		
	}
	
	cout << max << endl << maxnum+1;

}