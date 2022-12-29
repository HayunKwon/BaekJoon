#include <iostream>

using namespace std;

void func();

int main(){
	
	int c;
	cin >> c;
	
	for(int i=0;i<c;i++){
	    func();
	}
	
	return 0;

}

void func(){
    
    int n;
    cin >> n;
    
    int* arr = new int[n];
	
	for(int i =0;i<n;i++){
	    cin >> arr[i];
	}
	
	double avg =0;
	
	for(int i=0;i<n;i++){
	    avg += arr[i];
	}
	
	avg = avg/n;
	
	double count =0;
	for(int i=0;i<n;i++){
	    if (arr[i]>avg){
	        count++;
	    }
	}
	
	double result = (count/n)*100;
	cout <<fixed;
	cout.precision(3);
	cout << result << "%\n";
	
	delete[] arr;
	
}
