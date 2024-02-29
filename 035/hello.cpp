#include <iostream>
using namespace std;

int main()
{
	int a=5;
	cout<<"a="<<a<<endl;
	int &b=a;
	cout<<"a="<<a<<", b="<<b<<endl;
	int c=3;
	cout<<"a="<<a<<", b="<<b<<", c="<<c<<endl;
	b=c;
	cout<<"a="<<a<<", b="<<b<<", c="<<c<<endl;
	return 0;
}