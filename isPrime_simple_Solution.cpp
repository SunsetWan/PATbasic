#include <iostream>

using namespace std;

bool isPrime(int n) {
	int i, count;
	if(n == 1) {
		return false;
	}
	if(n == 2) {
		return true;
	}
	if(n % 2 == 0) {
		return false;
	}
	for(i = 1; i <= n; i++) {
		if(n % i == 0) {
			count ++;
		}	
	}
	if(count == 2) {
		return true;
	} else {
		return false;
	}
}


int main(int argc, char *argv[]) {
	int Num;
	cin>> Num;
	
	if(isPrime(Num)) {
		cout<< "This number is prime";
	} else {
		cout<< "This number isn't prime";
	}
	
}