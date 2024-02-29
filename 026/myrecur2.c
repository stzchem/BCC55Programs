#include <stdio.h>

long myfun(int n)
{
	if(n==1)
		return 1;
	else
		return 2*(myfun(n-1)+1);	
}

int main()
{
	int i;
	long results;
	
	for(i=1;i<=10;i++)
	{	results=myfun(i);
		printf("myfun(%d)=%ld\n",i,results);
	}
	
	return 0;
}