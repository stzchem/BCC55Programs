#include <stdio.h>

void selection_sort(int arr[], int len)
{
	int i, j, min, temp, counter=0;
	
	for(i=0;i<len-1;i++)
	{	
		min=i;
		for(j=i+1;j<len;j++)
		{
			if(arr[min]>arr[j])
			{
				temp=arr[min];
				arr[min]=arr[j];
				arr[j]=temp;
			}
			counter++;
		}
	}
	printf("counter=%d\n",counter);
}

int main()
{
	int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
	int len = (int) sizeof(arr) / sizeof(*arr);
	int i;
	
	selection_sort(arr, len);
	
	for(i = 0; i < len; i++)
		printf("a[%d] = %d\n", i, arr[i]);
	
	return 0;
}