#include <iostream>
using namespace std;
void print();
class Myclass{
public:
	int myname;
private:
	int myage;
};
	
int main(){
	for(int i=0;i<10;i++)
		cout<<"Test "<<i<<endl;
	
	printf("test\n");
	
	print();
	
	return 0;
}

void print(){
	cout<<"This is function!\n";
}