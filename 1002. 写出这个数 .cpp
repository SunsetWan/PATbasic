#include <iostream>
#include "vector"
#include "string"
#include <typeinfo>
#include "sstream"

using namespace std;
int main(int argc, char *argv[]) {
	
	vector<string> inputNum(1);
	getline(cin,inputNum[0]);
	int temp;
	int sum = 0;
	int i = 0;
	int a = 0;
	int countNum = 0;
	
	
		for (auto s : inputNum[0]) {
			//a = static_cast<int> (s);
			//s = (int)s;  // C-language-style notation
			//a = int (s);   //function-style cast notation
			//stringstream(inputNum[0]) >> a;
			a = s - '0';
			sum = sum + a;
			//cout<< a << "\n";
			//cout<< typeid(a).name() ;

			
		
		}

	
	//0cout<< "Sum is:" << sum << "\n";
	vector<int> Tochar(countNum);
	while (sum > 0) {
				i = sum % 10;
				//cout << i << endl;
				Tochar.push_back(i);
				temp = temp + i;
				sum = sum / 10;
				countNum ++;
			}
	
	
	
		/*for(int d; d < Tochar.size(); d++) {
		cout<< Tochar[d] << "\n";
	}*/


    for(int g = Tochar.size() - 1 ; g >= 0 ; g--) {
		
		switch (Tochar[g]) {
			case 1: {
				cout<< "yi";
				if (g != 0) {
					cout<< " ";
				}
				break;
			}
				
			case 2: {
				cout<< "er";
				if (g != 0) {
					cout<< " ";
				}
				break;
			}

			case 3: {
				cout<< "san";
				if (g != 0) {
					cout<< " ";
				}
				break;
			}

			case 4: {
				cout<< "si";
				if (g != 0) {
					cout<< " ";
				}
				break;
			}

			case 5: {
				cout<< "wu";
				if (g != 0) {
					cout<< " ";
				}
				break;
			}

			case 6: {
				cout<< "liu";
				if (g != 0) {
					cout<< " ";
				}
				break;
			}

			case 7: {
				cout<< "qi";
				if (g != 0) {
					cout<< " ";
				}
				break;
			}

			case 8: {
				cout<< "ba";
				if (g != 0) {
					cout<< " ";
				}
				break;
			}

			case 9: {
				cout<< "jiu";
				if (g != 0) {
					cout<< " ";
				}
				break;
			}

			case 0: {
				cout<< "ling";
				if (g != 0) {
					cout<< " ";
				}
				break;
			}

			
		}
}










}