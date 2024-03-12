#include <stdio.h>

int main()
{
	int num=0;
	int *pi=&num;
	void *pv;
	size_t size1=sizeof(void*);
	//size_t size2=sizeof(void);
	if(!pi)
	{
		printf("No address is pointed\n");
	}
	else
	{
		printf("Adrress: %p\n",pi);
	}
		
	printf("Value of pi: %p\n",pi);
	pv=pi;
	printf("Value of pv: %p\n",pv);
	pi=(int*)pv;
	printf("Value of pi: %p\n",pi);
	
	
		
	return 0;
}