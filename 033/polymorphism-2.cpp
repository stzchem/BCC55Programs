#include<iostream>
using namespace std;
class A
{
public:
    virtual void fun()
    {
        cout << "A::fun" << endl;
    }
    virtual void fun2()
    {
        cout << "A::fun2" << endl;
    }
};

class B: public A
{
public:
    void fun()
    {
        cout << "B::fun" << endl;
    }
    void fun2()
    {
        cout << "B::fun2" << endl;
    }
};

int main()
{
    void(A::*fun)();
    A *p = new B;
    fun = &A::fun;
    (p->*fun)();
    fun = &A::fun2;
    (p->*fun)();
    delete p;
    system("pause");
    return 0;
}