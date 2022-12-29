#include <iostream>

using namespace std;

int main(){
	
	int n;
	int m;
    cin >> n;
	double sum = 0;
	
	double avg;
	for(int i=0;i<n;i++){
	    cin >> avg;
	    sum += avg;
	    if(m<avg){
	        m=avg;
	    }
	}
	
	cout << ((sum/m)/n)*100;
	return 0;
}
