#include <iostream>

using namespace std;

void InsertionSort(int A[]) {
	int i = 0;
	int j = 1; 
	
	for( ; j < 6; j ++) {
		int key = A[j];
		i = j - 1;
		while ( (i >= 0) && ( A[i] > key ) ) {
			A[i+1] = A[i];
			i = i - 1;
		}
		A[i+1] = key;
	}
	
	
	for(int s = 0; s < 6; s ++) {
			cout<< A[s] << "\n";
			
			
		}

}




int main(int argc, char *argv[]) {
	int A[6] = {5, 4, 6, 2, 1, 3};
	
	InsertionSort(A);



}