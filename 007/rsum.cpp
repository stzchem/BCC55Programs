#include <iostream.h>
#include <time.h>

long sum(long a[],int n);
int main()
{
	long a[20000];
	long start,stop;
	cout<<"test"<<endl;
	
	time(&start);
	for(int i=1;i<=20000;i++)
		a[i-1]=i;
	
	cout<<"Sum="<<sum(a,20000)<<endl;
	time(&stop);
	
	cout<<"Time is:"<<stop-start<<endl;
	return 0;
}

long sum(long a[],int n)
{
	if(n>0) return a[n-1]+sum(a,n-1);
	else return 0;
}