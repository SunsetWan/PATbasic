#include <iostream>
#include "vector"
#include "string"

using namespace std;

bool Judge(string str) {
	int len = str.length();
	//cout<< len;
	bool book[3] = {false};
	int pPosition;
	int tPosition;
	for(int i = 0; i < len; i++) {
		
	
			if(str[i] == 'P') {
				book[0] = true;
			} else if(str[i] == 'A') {
				book[1] = true;
			} else if(str[i] == 'T') {
				book[2] = true;
			} else {
				return false;
			}		
			
			if(str[i] == 'P') {
				pPosition = i;
				//cout<< "P is" << pPosition << "\n";
			}
			
			if(str[i] == 'T') {
				tPosition = i;
				//cout<< "T is" << tPosition << "\n";
			}
						
	}
	
	
	if( (book[0] == true) && (book[1] == true) && (book[2] == true) ) {
			
			if( ((len - 1 - tPosition) == (tPosition - 1 - pPosition) * pPosition) ) {
				return true;
			} else {
				return false;
			}

			
			
		} else {
			return false;
		}


	
	
}

int main(int argc, char *argv[]) {
	int Num;
	string inputStr;
	vector<string> InputStr(Num);
	cin>> Num;
	
	for (int i = 0; i < Num; i++) {
		cin>> inputStr;
		InputStr.push_back(inputStr);
	}
	
	for (string g : InputStr) {
		if(Judge(g)) {
			cout<< "YES" << "\n";
		} else {
			cout<< "NO" << "\n";
		}
	}		
}