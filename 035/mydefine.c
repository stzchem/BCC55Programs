#include <stdio.h>
#include <stdlib.h>

#define myok I_am+\
             ok

int main()
{
	int I_am=2,ok=3;
	printf("The result is %d\n", myok);
	
	return 0;
}