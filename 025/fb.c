#include <stdio.h>

long fibonacci(long);

int main()
{
	long result,number;
	
	printf("Please Enter an integer:");
	scanf("%d",&number);
	
	result=fibonacci(number);
	
	printf("Fibonacci(%ld)=%ld\n",number,result);
	
	return 0;	
}

long fibonacci(long n)
{
	if (n==0||n==1)
		return n;
	else 
		return fibonacci(n-1)+fibonacci(n-2);
}