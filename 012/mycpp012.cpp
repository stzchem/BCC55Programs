#include <iostream>
using namespace std;

struct Student_str{
	int num;
	char name[20];
	char sex;
};

int main(){
	Student_str stu1,*stu2;
	cin>>stu1.num>>stu1.name>>stu1.sex;
	
	cout<<stu1.num<<endl<<stu1.name<<endl<<stu1.sex<<endl;
	
	cin>>stu2->num>>stu2->name>>stu2->sex;
	
	cout<<stu2->num<<endl<<stu2->name<<endl<<stu2->sex<<endl;
	
	return 0;
}