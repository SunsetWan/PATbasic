#include <iostream>
#include <stack>

using namespace std;

int stackGetMin(stack<int> b) {
	if(b.empty())
		cout<< "Error!";
	return b.top();
}


void stackPush(stack<int> &a, stack<int> &b, int Num) {
	
	if(b.empty()) 
		b.push(Num);
	else if(Num <= stackGetMin(b))	
		b.push(Num);
	a.push(Num);
}




int main(int argc, char *argv[]) {
	stack<int> sData;
	stack<int> sMin;

	int NUM;
	for(int i = 0; i < 3; i++) {
		cin>> NUM;
		stackPush(sData, sMin, NUM);
		//cout<< "11";

	}
		
	cout<< stackGetMin(sMin);
	
	//cout<< sMin.top();
	
	
	
}