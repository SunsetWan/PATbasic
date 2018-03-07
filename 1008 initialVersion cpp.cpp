#include <iostream>
#include "vector"



using namespace std;
int main(int argc, char *argv[]) {
	
	int flag = 0;
	int Numbers;
	int amountOfNum, off_Set;
	cin>> amountOfNum >> off_Set;
	vector<int> Num(amountOfNum + off_Set);
	
	for(int j = 0; j < off_Set; j++) {
			Num[j] = 0;
		}

	
	for(int i = off_Set; i < amountOfNum + off_Set; i++) {
		cin>> Numbers;
		Num[i] = Numbers;
	}
	
	//cout<< Num.size() << "\n";
	
		
		
	/*for(auto s : Num) {
		cout<< s;
	}
	cout<< "\n";*/
	
	for(int g = amountOfNum; g < amountOfNum + off_Set; g++ ) {
		Num[g - amountOfNum] = Num[g];
		
	}
	
	for(int h = 0; h < amountOfNum; h++) {
		
		if(flag == 1)
			cout<< " ";
		cout<< Num[h];
		flag = 1;
	}
	
	
}