#include <iostream>
#include "vector"
#include "string"
#include <ctype.h>
#include <stdio.h>

// input: a sentence with 6 words
// output formart: 2 words to a line

using namespace std;
int main(int argc, char *argv[]) {

	vector<string> myword ;
	string myWord;
	for (decltype(myword.size()) i = 0; i < 6; i++ ) {
		cin>> myWord;
		myword.push_back(myWord);
	}	
	
	for ( auto &c : myword) {
		for ( auto &s : c) {
			s = toupper(s);
		}
	}
	
	for (int i = 0; i < myword.size() ; i++) {
		cout<< myword[i];
		if ((i+1) % 2 == 0) {
			cout<< endl;
		}
	}
	
	return 0;
	
	}