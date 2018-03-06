#include <iostream>
#include "cmath"

bool isPrime(int n) {
	int i, sq, count = 0;
	if(n == 1) {
		return false;
	}
	if(n == 2) {
		return true;
	}
	if(n % 2 == 0) {
		return false;
	}
	sq = sqrtf(n);
	for(i = 2; i <= sq; i++) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}

using namespace std;
int main(int argc, char *argv[]) {
	int Num;
	cin>> Num;
		
	if(isPrime(Num)) {
		cout<< "This number is prime";
	} else {
		cout<< "This number isn't prime";
	}
		

}