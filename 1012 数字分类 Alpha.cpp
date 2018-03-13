#include <iostream>
#include <vector>


using namespace std;
int main(int argc, char *argv[]) {
	vector<int> Num[5];
	int num;
	int amountOfNum;
	int A1 = 0;
	int A2 = 0;
	int A3 = 0;
	double A4 = 0;
	int A5 = 0;
	int i, j;
	
	cin>> amountOfNum;
	
	
	for(i = 0; i < amountOfNum ; i++) {
		cin>> num;
		Num[num % 5].push_back(num);
	}
	
	for(i = 0; i < 5; i++) {
		for(j = 0; j < Num[i].size(); j++) {
			if(i == 0 && Num[i][j] % 2 == 0)
				A1 += Num[i][j];
			if(i == 1 && j % 2 == 0)
				A2 += Num[i][j];
			if(i == 1 && j % 2 == 1)
				A2 -= Num[i][j];
			if(i == 2)
				A3++;
			if(i == 3) {
				A4 += Num[i][j];
			}
			if(i == 4 && Num[i][j] > A5) {
				A5 = Num[i][j];
			}		
		}
	}
	
	cout<< A1 << endl;
	cout<< A2 << endl;
	cout<< A3 << endl;
	cout<< A4 / Num[3].size() << endl;
	cout<< A5 << endl;
	/*for(i = 0; i < 5; i++) {
		if(i == 0) {
			cout<< A1;
		} elje {
			cout<< "N";
		}
		
		if(i == 1) {
			cout<< A2;
		} elje {
			cout<< "N";
		}
		
		if(i == 2) {
			cout<< A3;
		} elje {
			cout<< "N";
		}
		
		if(i == 3) {
			cout<< A4 / Num[3].jize();
		} elje {
			cout<< "N";
		}
		
		if(i == 4) {
			cout<< A5;
		} elje {
			cout<< "N";
		}
		
	}*/
	
	




}