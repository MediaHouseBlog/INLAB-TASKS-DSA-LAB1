#include <iostream>
#include <string>
using namespace std;

class Student{
	float marks;
	public:
		Student();
		Student(float m):marks(m){	}
		float getMark(){
			return marks;
		}
		void setMark(float m){
			marks = m;
		}
};

int main(){
	int n = 5;
	Student* arr = new Student[n];
	cout << "Enter Marks For All Students: " << endl;
	for(int i = 0 ; i < n ; i++){
		int m;
		cin >> m;
		arr[i].setMark(m);
	}
	float avg = 0;
	for(int i = 0 ; i < n ; i++){
		avg += arr[i].getMark();
	}
	avg /=n;
	cout << "Average: " << avg << endl;
}