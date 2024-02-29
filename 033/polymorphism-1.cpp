#include<iostream>
using namespace std;

class A
{
public:
    virtual void print()
    {
        cout << "This is A" << endl;
    }
	virtual void fun()
	{
		cout<<1<<endl;
	}
	virtual void fun2()
	{
		cout<<2<<endl;
	}
};

class B: public A
{
public:
    void print()
    {
        cout << "This is B" << endl;
    }
	void fun()
	{
		cout<<3<<endl;
	}
	void fun2()
	{
		cout<<4<<endl;
	}
};

int main()
{
    A a;
    B b;

	a.print();
    b.print();

	A *p1=&a;
	A *p2=&b;

	p1->print();
	p2->print();

	void (*fun)(A*);
	A *p=new B;
	long lVptrAddr;
	memcpy(&lVptrAddr,p,4);
	memcpy(&fun,reinterpret_cast<long*>(lVptrAddr),4);
	fun(p);
	delete p;
	system("pause");


    return 0;
}


