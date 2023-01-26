#include<iostream>
using namespace std;



void foo(string name) {
	cout<< "Hello, "<< name<<"\n";
}

int main(){
	cout << "What's your name?   ";
	string name1;
	cin >>name1 ;
	foo(name1);

	
	return 0;
}