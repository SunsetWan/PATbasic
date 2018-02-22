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
	cin>> sQuantity;
	
	vector<Student> vStu;
	
	for(int i = 0; i < sQuantity; i ++) {
		Student exStu;
		vStu.push_back(exStu);
		cin>> vStu[i].sName;
		cin>> vStu[i].sNum;
		cin>> vStu[i].sGrade;
		
	}	
	printStuInfo(vStu);	
}