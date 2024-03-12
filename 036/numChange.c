#include <stdio.h>
#include <math.h>

int main()
{
	int binaryNum,decimalNum,octalNum;     /*存放二进制、十进制、八进制数的变量*/
	int i,decimalTemp,octalTemp;           /*循环变量、暂存变量*/
	
	scanf("%d",&binaryNum);
	
	i=0;
	decimalNum=0;
	while(binaryNum>0)
	{
		decimalTemp=binaryNum%10;                 /*从二进制数的右端依次取出数位值*/
		decimalNum+=decimalTemp*pow(2,i);         /*将取出的数位值乘以2的幂，并求和*/
		binaryNum/=10;                     
		++i;
	}
	
	i=0;
	decimalTemp=decimalNum;
	octalNum=0;
	while(decimalTemp>0)
	{
		octalTemp=decimalTemp%8;                   /*从十进制数除以8后得到八进制的数位，依次是个位、十位......*/
		octalNum+=octalTemp*pow(10,i);             /*将取出的数位值乘以10的幂，并求和*/
	    decimalTemp/=8;
		++i;
	}
	
	printf("%d %d\n",decimalNum,octalNum);
	
	return 0;
}