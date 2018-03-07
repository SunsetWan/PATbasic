#include <iostream>
#include "algorithm"

using namespace std;
int main(int argc, char *argv[]) {
	int a[10] = { };
	for(int i = 0; i < 10; i++) {
		a[i] = i;
	}
	
	for(auto q : a) {
			cout<< q;
		}
	cout<< endl;
	
	reverse(a, a + 5);
	
	for(auto s : a) {
		cout<< s;
	}
}