#include <iostream>
using namespace std;

class ClxBase{
public:
	ClxBase(){};
	virtual ~ClxBase(){cout<<"Delete ClxBase"<<endl;};
	virtual void DoSomething(){cout<<"Do something in class ClxBase"<<endl;};
};

class ClxDerived:public ClxBase{
public:
	ClxDerived(){};
	~ClxDerived(){cout<<"Ouptput from the destructor of class ClxDerived!"<<endl;};
	
	void DoSomething(){cout<<"Do something in class ClxDerived"<<endl;};
};

int main(){
	ClxBase *pTest;
	ClxBase CB1;
	ClxDerived CD1;
	pTest=&CB1;
	pTest->DoSomething();
	pTest=&CD1;
	pTest->DoSomething();
	delete pTest;
	return 0;
}