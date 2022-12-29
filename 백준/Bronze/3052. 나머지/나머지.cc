#include <iostream>

using namespace std;

int main(){
	
	int num;
	int sum[42] ={};
	
	for(int i=0; i<10; i++){
		
		cin >> num;
		sum[num%42]++;

	}
	
	int result=0;
	for(int num : sum){
	    if(num>0){
	        result++;
	    }
	}
	std::cout << result << std::endl;
    
    return 0;
}