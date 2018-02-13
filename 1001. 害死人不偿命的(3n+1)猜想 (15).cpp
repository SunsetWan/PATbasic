#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int num;
	int numOfSteps = 0;
	int j = 0;	
	//cout << "Please enter a number: " ;
	cin >> num ;
			
	while(j != 1) {
		if (  (num % 2 == 0) ) {
			j = num;
			j = j / 2;
			num = j;
			numOfSteps += 1;
		} else {
			num = ( 3*num + 1 );
			//numOfSteps ++;
		}
		
			
	}
	cout << numOfSteps << endl;
	return 0;
}