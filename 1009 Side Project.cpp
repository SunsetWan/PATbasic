#include <iostream>
#include "vector"
#include "algorithm"
#include "string"

using namespace std;
int main(int argc, char *argv[]) {
	string myWords;
	//string * mywo = &myWords;
	
	getline(cin,myWords);
	
	reverse(begin(myWords), end(myWords));
	
	cout<< myWords;	
}