#include <stdio.h>

int main(int argc, char** argv) {
    long a[21],s;   
	//int m;
	int i,sum=0;
	scanf("%d",&s);
	a[1]=a[2]=1;
	for(i=3;i<=20;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	
	for(i=2;i<=s+1;i++)
	{		
		sum+=a[i+1]/a[i];
	}
	
	printf("sum=%d",sum);
	
    return 0;
}