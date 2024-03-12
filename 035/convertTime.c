#include <stdio.h>

void convertTime(int,int,int,int);    /*申明时间转换函数*/

int main()
{
	int hour,min,sec;               /*定义3个变量用来存放时、分、秒*/
	int deltaSec;                    /*定义1个变量用来存放增加的秒数*/
	
	scanf("%d:%d:%d %d",&hour,&min,&sec,&deltaSec); 
	convertTime(hour,min,sec,deltaSec);     /*调用时间转换函数*/
	
	return 0;
}

void convertTime(int hh,int mm,int ss,int ds)    /*定义或实现时间转换函数*/
{
	printf("%.2d:%.2d:%.2d\n",hh,mm,ss);
	ss+=ds;
	if(ss>=60)                                  /*增加的秒数超过60s则加1min*/
	{
		++mm;                    
		ss-=60;
	}
	if(mm>=60)
	{
		++hh;
		mm-=60;
	}
	if(hh>=24)
	{
		hh-=24;
	}
	printf("%.2d:%.2d:%.2d\n",hh,mm,ss);
}
	
	
	