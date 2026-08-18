#include "header.h"
#include <string>
#include <iostream>

using namespace std;

class Abstract{
	public:
		virtual void writeSth()=0;
};
class Writing : public Abstract{
	public:
		void writeSth() override{
			cout << "Writing Out Something" << endl;
		}
};

int main(){
	Header h1("MS", 60);
	cout << "Title: " << h1.getTitle()<< endl;
	cout << "ID: " << h1.getId() << endl;
	
	Writing w1;
	w1.writeSth();
}