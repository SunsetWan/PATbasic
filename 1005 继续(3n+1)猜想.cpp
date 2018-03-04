#include <iostream>
#include "vector"
#include "algorithm"

using namespace std;

bool SortByDescending (int a, int b) {
	return a > b;
}

int main(int argc, char *argv[]) {
	int arr[10000] = {0};
	vector<int> Num;
	int k, n;
	int flag = 0;
	//cout<< "Please enter the amount of the numbers:" ;
	cin>> k;
	for(int i = 0; i < k; i ++) {
		//cout<< "Please enter a number:";
		cin>> n;
		Num.push_back(n);
		while(n != 1) {
			if((n % 2) == 0) {
				n = n / 2;
			} else {
				n = 3*n + 1;
			}
		arr[n] = 1;
		}
	}
	
	sort(Num.begin(), Num.end(), SortByDescending);
	
	for(auto s : Num) {
		if(arr[s] == 0) {
			if(flag == 1)
				cout<< " ";
			cout<< s;
			flag = 1;
		}
	}	
			
	
}