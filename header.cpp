//#include "header.h"
#include <string>
#include <iostream>
using namespace std;


Header::Header(string t,int i):title(t),id(i){
	}
void Header::setter(string t, int i){
	title = t;
	id = i;
}
string Header::getTitle(){
	return title;
}
int Header::getId(){
	return id;
}