#include <fstream.h>
#include <iostream.h>
#include <stdlib.h>

void main(){
	ifstream inFile;
	ofstream outFile;
	
	outFile.open("my.dat",ios::out);
	
	char univ[]="Tsinghua",name[10];
	int course=2401,number;
	
	outFile<<univ<<endl;
	outFile<<course<<endl;
	
	inFile.open("my.dat",ios::in|ios::nocreate);
	
	if(!inFile){
		cerr<<"不能打开my.dat"<<endl;
		exit(1);
	}
	
	char c;
	inFile>>name>>number;
	outFile<<"name:"<<name<<endl;
	outFile<<"number:"<<number<<endl;
}