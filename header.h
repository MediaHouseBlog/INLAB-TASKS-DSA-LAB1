#ifndef HEADER_H
#define HEADER_H
using namespace std;

class Header{
	string title;
	int id;
	
	public:
		Header(string t,int i):title(t),id(i){	}
		void setter(string t, int i){
			title = t;
			id = i;
		}
		string getTitle(){
			return title;
		}
		int getId(){
			return id;
		}
};

#endif