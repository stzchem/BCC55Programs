#include <stdio.h>

int main()
{
	int i,num;
	int sum;
	for(num=1;num<=1000;num++)
	{
		sum=0;                 //每次判断一个数是否为完数前，先将sum重置为0
		for(i=1;i<num;i++)   
		{
			if(num%i==0)     
			{
				sum+=i;        //找出因子并累加
			}
		}
		if(sum==num)           //判断累加值是否等于该完数
		{
			printf("%d ",num);
		}
	}
	
	return 0;
}