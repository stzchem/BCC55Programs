#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base construct" << endl;
    }
    virtual void f()
    {
        cout << "Base::f()" << endl;
    }
    virtual void g()
    {
        cout << "Base::g()" << endl;
    }
    virtual void h()
    {
        cout << "Base::h()" << endl;
    }
    virtual ~Base() {}
};

int main()
{
    typedef void (*Fun)();
    Base *b = new Base();

    cout << "�׵�ַ��" << *(int*)(&b) << endl;

    Fun funf = (Fun)(*(int*) * (int*)b);
    Fun fung = (Fun)(*((int*) * (int*)b + 1));
    Fun funh = (Fun)(*((int*) * (int*)b + 2));

    funf();
    fung();
    funh();

    cout << (Fun)(*((int*) * (int*)b + 4)) << endl;

    delete b;
	
	//cout<<int((int*))<<endl;
    return 0;
}