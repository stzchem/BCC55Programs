#include <stdio.h>

int main()
{
	int num;
	int *pi=&num;
	
	num=0;
	
	printf("Address of num: %p Value: %d\n",&num,num);
	printf("Address of pi: %p Value: %d\n",&pi,pi);
	
	*pi=10;
	printf("Value of num: %d\n",num);
	
	return 0;
}