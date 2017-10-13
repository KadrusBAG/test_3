#include <iostream>
#include <sstream>
using namespace std;

int main (){
	string stroka;
	int a[10], b[10]; int i; int p=0;
	getline(cin, stroka);
	istringstream stream(stroka);
	for(i=0; i<10; ++i){
	    if(!(stream>>a[i])){
	        cout<<"An error has occurred while reading the input sequence."<<endl;
	        return -1;
	    }
	    if(p>a[i]){
	        cout<<"The input sequence must be non-decreasing."<<endl;
	        return -1;
	    }
	    p=a[i];
	}
	p=0;
	for(i=0; i<10; ++i){
	    if(!(stream>>b[i])){
	        cout<<"An error has occurred while reading the input sequence."<<endl;
	        return -1;
	    }
	    if(p>b[i]){
	        cout<<"The input sequence must be non-decreasing."<<endl;
	        return -1;
	    }
	    p=a[i];
	}
	
