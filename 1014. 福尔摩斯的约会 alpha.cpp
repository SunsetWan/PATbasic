#include <iostream>
#include "vector"
#include "string"
#include "algorithm"
using namespace std;

bool wayToSort(string i, string j) {
	return i.size() < j.size();
}
int main(int argc, char *argv[]) {
	vector<string> twoStr;
	int n;
	int leastlong = 0;
	cin>> n;
	for(int i = 0; i < n ; i++) {
		string str;
		cin>> str;
		twoStr.push_back(str);
	}
	sort(twoStr.begin(),twoStr.end(),wayToSort);
	
	for(int g = 0; g < twoStr[0].size(); g++) {
		if(twoStr[0][g] == twoStr[1][g]) {
			cout<< 666 << g+1 << endl;
		}
	}
	
	
}