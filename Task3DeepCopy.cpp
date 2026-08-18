#include <iostream>
#include <string>
using namespace std;

class Student{
	int* marks;
	public:
		Student(){
			marks = new int[5];	
		}
		void setMarks(){
			cout << "Enter Marks: ";
			for(int i = 0 ; i < 5; i++){
				cin >> marks[i];
			}
		}
		float calcAvg(){
			float avg = 0;
			for(int i = 0 ; i < 5; i++){
				avg += marks[i];
			}
			return avg/5.0;
		}
		Student(const Student &a){
			this->marks = new int[5];
			for(int i = 0 ;i < 5 ; i++){
				this->marks[i]  = a.marks[i];
			}
		}
		void printMarks(){
			for(int i = 0 ; i < 5 ; i++){
				cout << marks[i] << endl;
			}
		}
		~Student(){
			delete[] marks;
		}
};

int main(){
	Student s1;
	s1.setMarks();
	cout << endl<<"Average of student 1 : " << s1.calcAvg() << endl;
	float avgS1 = s1.calcAvg();
	Student s2 = s1;
	s2.printMarks();
	cout << endl<<"Average of student 2 : " << s2.calcAvg() << endl;
	s2.setMarks();
	cout << endl<<"Average of student 2 : " << s2.calcAvg() << endl;
	s1.printMarks();
	
	return 0;
}	
