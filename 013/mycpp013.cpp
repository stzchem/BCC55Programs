#include <iostream>
using namespace std;

class Student{
public:
	int num;
	char name[20];
	char sex;
	void display(){
		cout<<"num:"<<num<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"sex:"<<sex<<endl;
	}
};

int main(){
	class Student stu1,*stu2;
	cin>>stu1.num>>stu1.name>>stu1.sex;
	
	stu1.display();
	
	return 0;
}