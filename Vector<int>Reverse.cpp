#include <iostream>
#include "algorithm"
#include "vector"

using namespace std;
int main(int argc, char *argv[]) {
	vector<int> myVector;
	for(int i = 1; i < 10; i++)
		myVector.push_back(i);
		
	reverse(myVector.begin(), myVector.end());
	
	for(auto s : myVector)
		cout<< s;
}