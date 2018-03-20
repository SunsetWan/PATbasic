#include <iostream>
#include "vector"
#include "string"

using namespace std;
int main(int argc, char *argv[]) {
	vector<string> Num;
	int num;
	cin>> num;
	Num.push_back(to_string(num));
	
	cout<< Num[0];
	
	
	
}