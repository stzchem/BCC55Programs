#include <stdio.h>

double myfun(int n)
{
	if(n==1)
		return 1.0;
	else
		return n*myfun(n-1);	
}

int main()
{
	int i;
	double results;
	
	for(i=1;i<=15;i++)
	{	results=myfun(i);
		printf("%d!=%lf\n",i,results);
	}
	
	return 0;
}