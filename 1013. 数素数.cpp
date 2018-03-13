#include <iostream>
#include "cmath"
#include "vector"

using namespace std;

bool isPrime(int n) {
	if(n == 1) 
		return false;
	if(n == 2)
		return true;
		
	int j = sqrtf(n); 
	for(int i = 2; i <= j; i++) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}


int main(int argc, char *argv[]) {
	vector<int> PrimeNum;
	int start, end, cnt;
	cnt = 0;
	cin>> start >> end;
	
	for(int i = 1; i < 10000; i ++) {
		if(isPrime(i)) {
			PrimeNum.push_back(i);
		}
	}
	
	for(int j = start - 1; j < end; j++) {
		cnt++;
	    if(cnt % 10 != 1)
			cout<< " ";
		cout<< PrimeNum[j];
		if(cnt % 10 == 0)
			cout<< "\n";
		
	}
	
}