#include <stdio.h>
#include <time.h>

void main()
{
	time_t timep;
	time (&timep);
	printf("%s",asctime(gmtime(&timep)));
}