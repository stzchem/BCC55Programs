#include <stdio.h>
#include <math.h>
#define N 5

int main()
{
	long nums[N],decNum;
	int i,j;
	for(i=0;i<N;i++)
	{
		scanf("%ld",&nums[i]);
	}
	
	for(i=0;i<N;i++)
	{
		j=0;
		decNum=0;
		while(nums[i]>=1)
		{
			decNum+=(nums[i]%10)*pow(2,j);
			++j;
			nums[i]/=10;
		}
		nums[i]=decNum;
	}
	
	for(i=0;i<N;i++)
	{
		if(i<N-1)
		{
			printf("%ld ",nums[i]);
		}
		else
		{
			printf("%ld",nums[i]);
		}
	}
	
	return 0;
}