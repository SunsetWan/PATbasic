#include <iostream>
#include "string"
#include "vector"

using namespace std;

class Student {
	public:
		 string sName;
	     int sGrade;
	     int sNum;
	Student() {
		
	}
	Student(string sname, int snum, int sgrade) {
		this->sName = sname;
		this->sNum = snum;
		this->sGrade = sgrade;
	}
	
	void printInfo() {
		cout<< this->sGrade;
	}
	
};

void printStuInfo(vector<Student> argu1) {
	//cout<< argu1.size() << "\n";
	/*for(int i = 0; i < argu1.size(); i ++) {
		cout<< argu1[i].sGrade;
	}*/
	
	/*int i = 0;
	int j = 1;
	
	for( ; j < argu1.size(); j ++) {
		int key = argu1[j].sGrade;
		i = j - 1;
		while ( ( i >= 0) && ( (argu1[i].sGrade) > key ) ) {
			argu1[i+1].sGrade = argu1[i].sGrade;
			i = i - 1;
		}
		argu1[i+1].sGrade = key;
	}
	
	for(auto s : argu1) {
		cout<< s.sGrade << "\n";
		
	}*/
	int maxGrade = -1;
	int minGrade = 101;
	string maxGraName;
	int maxGraNum;
	string minGraName;
	int minGraNum;
	
	for( auto s : argu1) {
		if (maxGrade < s.sGrade) {
			maxGrade = s.sGrade;
			maxGraName = s.sName;
			maxGraNum = s.sNum;
		}
		if (minGrade > s.sGrade) {
			minGrade = s.sGrade;
			minGraName = s.sName;
			minGraNum = s.sNum;

		}
	}
	
	cout<< maxGraName << " " << maxGraNum << endl;
	
	cout<< minGraName << " " << minGraNum << endl;
	
	
	
	
	
}

int main(int argc, char *argv[]) {
	int sQuantity;
	
	//cout<< "Enter the number:";
	cin>> sQuantity;
	
	vector<Student> vStu;
	
	for(int i = 0; i < sQuantity; i ++) {
		Student exStu;
		vStu.push_back(exStu);
		cin>> vStu[i].sName;
		cin>> vStu[i].sNum;
		cin>> vStu[i].sGrade;
		
	}

	/*for(int i = 0; i < sQuantity; i ++) {
			cout<< vStu[i].sName << " ";
			cout<< vStu[i].sNum << " ";
			cout<< "\n";
			//cin>> vStu[i].sGrade;
		}*/
	
	//cout<< vStu.size();
	printStuInfo(vStu);
	
		
	//Student xiaoming;
	//int xGrade;
	//cin>> xGrade;
	//xiaoming.sGrade = xGrade;
	//xiaoming.printInfo();
}