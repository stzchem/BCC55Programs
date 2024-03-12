#include <stdio.h>

int main()
{
	int n=0;
	while(~scanf("%d",&n))
	{
		int i=0,j=0;
		for(i=1;i<n+1;i++)
		{
			for(j=1;j<i+1;j++)
			{
				printf("%d*%d=%d ",i,j,i*j);
			}
			printf("\n");
		}
	}
	return 0;
}