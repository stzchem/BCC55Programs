#include <stdio.h>

void bubble_sort(int arr[], int len);

int main()
{
	int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
	int len = (int) sizeof(arr) / sizeof(*arr);
	int i;
	
	bubble_sort(arr, len);
	
	for(i = 0; i < len; i++)
		printf("a[%d] = %d\n", i, arr[i]);
	
	return 0;
}

void bubble_sort(int arr[], int len)
{
	int i, j, temp, counter=0;
	
	for(i = 0; i < len -1; i++)
		for(j = 0; j < len -1 - i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;	
			}
			counter++;
		}
	printf("counter=%d\n",counter);
}

