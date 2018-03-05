#include <iostream>
#include "vector"
#include "string"


using namespace std;
int main(int argc, char *argv[]) {
	int Num, i;
	string Num3;　
	string Num2;
	string Num1;
	vector<int> Numbers;
	cin>> Num;
	while (Num > 0) {
		i = Num % 10;
		Numbers.push_back(i);
		Num = Num / 10;
	}
	
	for(int k = 1; k <= Numbers[0]; k++) {
		string temp3;
		temp3 = to_string(k);
		Num3 = Num3 + temp3;
	}
		
	//cout<< Num3;
	
	for(int g = 0; g < Numbers[1]; g++) {
		string temp2 = "S";
		Num2 = Num2 + temp2;
	}
	
	//cout<< Num2;
	
	for(int h = 0; h < Numbers[2]; h++) {
		string temp1 = "B";
		Num1 = Num1 + temp1;
	}
	
	//cout<< Num1;
	
	cout<< Num1 << Num2 << Num3;
}